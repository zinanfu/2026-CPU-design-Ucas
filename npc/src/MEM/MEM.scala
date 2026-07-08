package logic

import chisel3._
import chisel3.util._

class MEM extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new ExToMemMessage))
    val out = Decoupled(new MemToWbMessage)

    // mem
    // val mem_addr  = Output(UInt(32.W))
    // val load_addr = Output(UInt(32.W))
    // val mem_wdata = Output(UInt(32.W))
    // val mem_wmask = Output(UInt(4.W))
    // val mem_wen   = Output(Bool())
    // val mem_ren   = Output(Bool())
    // val mem_rdata = Input(UInt(32.W))

    // axi
    val axi_mem     = new Axi4LiteMasterIO

    // forwarding
    val fwd_wb_en   = Output(Bool())
    val fwd_wb_addr = Output(UInt(5.W))
    val fwd_wb_data = Output(UInt(32.W))
  })
  
  val mem_rdata = WireDefault(0.U(32.W))
  val sIDLE :: sREAD :: sWRITE :: Nil = Enum(3)
  val state = RegInit(sIDLE)
  val in = io.in.bits
  val reqReg = Reg(new ExToMemMessage)  // 保存访存指令
  val req = Wire(new ExToMemMessage)
  req := reqReg
  when (state === sIDLE) {
    req := in
  }

  // transfer
  io.out.bits.pc   := req.pc
  io.out.bits.inst := req.inst

  // io.mem_addr  := in.mem_addr
  // io.load_addr := in.load_addr
  // io.mem_wdata := in.mem_wdata
  // io.mem_wmask := in.mem_wmask
  // io.mem_wen   := io.in.valid && in.mem_wen
  // io.mem_ren   := io.in.valid && in.mem_ren

  // default
  io.in.ready              := false.B
  io.out.valid             := false.B
  io.axi_mem.ar.addr       := 0.U
  io.axi_mem.ar.id         := 1.U
  io.axi_mem.ar.valid      := false.B
  io.axi_mem.r.ready       := false.B
  io.axi_mem.aw.addr       := 0.U
  io.axi_mem.aw.id         := 1.U
  io.axi_mem.aw.valid      := false.B
  io.axi_mem.w.data        := 0.U
  io.axi_mem.w.strb        := 0.U
  io.axi_mem.w.valid       := false.B
  io.axi_mem.b.ready       := false.B

  // axi
  when (state === sIDLE) {
    when (io.in.valid) {
      when (in.mem_ren) {
        io.axi_mem.ar.addr  := in.mem_addr
        io.axi_mem.ar.id    := 1.U
        io.axi_mem.ar.valid := true.B
        io.in.ready         := io.axi_mem.ar.ready

        when (io.axi_mem.ar.valid && io.axi_mem.ar.ready) {
          reqReg := in
          state  := sREAD
        }
      }.elsewhen (in.mem_wen) {
        io.axi_mem.aw.addr  := in.mem_addr
        io.axi_mem.aw.id    := 1.U
        io.axi_mem.aw.valid := true.B
        io.axi_mem.w.data   := in.mem_wdata
        io.axi_mem.w.strb   := in.mem_wmask
        io.axi_mem.w.valid  := true.B
        io.in.ready         := io.axi_mem.aw.ready && io.axi_mem.w.ready

        when (io.axi_mem.aw.valid && io.axi_mem.aw.ready && io.axi_mem.w.valid && io.axi_mem.w.ready) {
          reqReg := in
          state  := sWRITE
        }
      }.otherwise { // 非访存
        io.in.ready  := io.out.ready
        io.out.valid := true.B
      }
    }
    
  }.elsewhen (state === sREAD) {
    io.in.ready := false.B

    io.axi_mem.r.ready := io.out.ready
    io.out.valid := io.axi_mem.r.valid
  
    mem_rdata := io.axi_mem.r.data

    when (io.axi_mem.r.valid && io.axi_mem.r.ready) {
      state := sIDLE
    }
  }.elsewhen (state === sWRITE) {
    io.in.ready := false.B

    io.axi_mem.b.ready := io.out.ready
    io.out.valid := io.axi_mem.b.valid

    when (io.axi_mem.b.ready && io.axi_mem.b.valid) {
      state := sIDLE
    }
  }

  // load
  val load_addr_offset = req.load_addr(1, 0)
  

  val load_byte = MuxLookup(load_addr_offset, 0.U)(Seq(
    0.U -> mem_rdata(7, 0),
    1.U -> mem_rdata(15, 8),
    2.U -> mem_rdata(23, 16),
    3.U -> mem_rdata(31, 24)
  ))

  val load_half = MuxLookup(load_addr_offset(1), 0.U)(Seq(
    0.U -> mem_rdata(15, 0),
    1.U -> mem_rdata(31, 16)
  ))

  val mem_rdata_processed = WireDefault(0.U(32.W))

  when (req.mem_ren) {
    switch (req.mem_funct3) {
      is("b010".U) { // lw
        mem_rdata_processed := mem_rdata
      }
      is("b000".U) { // lb 
        mem_rdata_processed := Cat(Fill(24, load_byte(7)), load_byte)
      }
      is("b001".U) { // lh 
        mem_rdata_processed := Cat(Fill(16, load_half(15)), load_half)
      }
      is("b100".U) { // lbu
        mem_rdata_processed := Cat(0.U(24.W), load_byte)
      }
      is("b101".U) { // lhu
        mem_rdata_processed := Cat(0.U(16.W), load_half)
      }
    }
    // printf("load data = %x\n", mem_rdata_processed)
  }

  // printf("wb_sel = %d\n", req.wb_sel)
  // wb
  val wb_data = WireDefault(0.U(32.W))
  switch (req.wb_sel) {
    is(0.U) { wb_data := req.alu_result }
    is(1.U) { wb_data := mem_rdata_processed }
    is(2.U) { wb_data := req.pc_plus4 }
    is(3.U) { wb_data := req.csr_rdata }
  }

  // mem to wb
  io.out.bits.wb_addr := req.wb_addr
  io.out.bits.wb_en   := req.wb_en
  io.out.bits.wb_data := wb_data

  // forwarding
  io.fwd_wb_en   := io.out.valid && req.wb_en
  io.fwd_wb_addr := req.wb_addr
  io.fwd_wb_data := wb_data

  // io.out.valid := io.in.valid
  // io.in.ready  := io.out.ready


  // when (io.in.valid && io.in.bits.mem_ren) {
  //   printf("MEM load: pc=%x addr=%x raw=%x processed=%x\n", 
  //         io.in.bits.pc, io.in.bits.mem_addr, io.mem_rdata, mem_rdata_processed)
  // }
}
