package logic

import chisel3._
import chisel3.util._

class EXU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IdToEXMessage))
    val out = Decoupled(new ExToMemMessage)

    // 异常/跳转
    val redirect = Valid(new Bundle {
      val target = UInt(32.W)
    })

    // forwarding to IDU
    val fwd_wb_en      = Output(Bool())
    val fwd_wb_addr    = Output(UInt(5.W))
    val fwd_wb_data    = Output(UInt(32.W))
    val fwd_wb_is_Load = Output(Bool())
  })
  val in = io.in.bits
  // transfer
  io.out.bits.pc   := in.pc
  io.out.bits.inst := in.inst

  // alu
  val alu = Module(new Alu(32))
  alu.io.a  := in.alu_a
  alu.io.b  := in.alu_b
  alu.io.op := in.alu_op

  val alu_result = alu.io.out

  // csr
  val csr = Module(new Csr)
  csr.io.csr_addr        := in.csr_addr
  csr.io.csr_op          := in.csr_op
  csr.io.rs1_data        := in.csr_wdata
  csr.io.zimm            := in.csr_zimm
  csr.io.csr_wen         := in.csr_en
  csr.io.exception       := in.exception
  csr.io.exception_cause := in.exception_cause
  csr.io.exception_pc    := in.pc
  csr.io.mret            := in.mret

  // ── redirect (exception / mret / jalr) ──
  val redirect_target = WireDefault(0.U(32.W))
  val redirect_valid  = WireDefault(false.B)

  // printf("exception: %d, mret: %d, jalr: %d\n", in.exception, in.mret, in.is_jalr)
  when (in.exception) { // exception
    redirect_valid  := true.B
    redirect_target := csr.io.mtvec_out
  }
  .elsewhen (in.mret) { // mret
    redirect_valid  := true.B
    redirect_target := csr.io.mret_target
  }
  .elsewhen (in.is_jalr) { // jalr
    redirect_valid  := true.B
    redirect_target := alu_result & (~1.U(32.W))
  }

  io.redirect.valid       := redirect_valid
  io.redirect.bits.target := redirect_target

  // mem
  val mem_addr         = alu_result
  val mem_addr_aligned = mem_addr & "hfffffffc".U(32.W)

  val ex_mem_wmask = WireDefault(in.mem_wmask)
  val ex_mem_wdata = WireDefault(in.mem_wdata)


  when (in.mem_wen && in.mem_funct3 === "b000".U) { // sb
    ex_mem_wmask := (1.U(4.W) << mem_addr(1, 0))
    ex_mem_wdata := (in.mem_wdata & 0xff.U) << Cat(mem_addr(1, 0), 0.U(3.W)) // * 8
  }
  when (in.mem_wen && in.mem_funct3 === "b001".U) { // sh
    ex_mem_wmask := Mux(mem_addr(1), "b1100".U, "b0011".U)
    ex_mem_wdata := (in.mem_wdata & 0xffff.U) << Cat(mem_addr(1), 0.U(4.W))
  }

  // ── pc+4 ──
  val pc_plus4 = in.pc + 4.U

  // forwarding
  val exu_wb_data = WireDefault(0.U(32.W))
  switch (in.wb_sel) {
    is(0.U) { exu_wb_data := alu_result }
    is(1.U) { exu_wb_data := 0.U }               
    is(2.U) { exu_wb_data := pc_plus4 }
    is(3.U) { exu_wb_data := csr.io.csr_rdata }
  }
  io.fwd_wb_en      := io.in.valid && in.wb_en && in.wb_sel =/= 1.U  // load 不在 EXU 前递
  io.fwd_wb_addr    := in.wb_addr
  io.fwd_wb_data    := exu_wb_data
  io.fwd_wb_is_Load := io.in.valid && in.wb_en && in.wb_sel === 1.U

  // io_out
  io.out.bits.alu_result := alu_result
  io.out.bits.mem_ren    := in.mem_ren
  io.out.bits.mem_wen    := in.mem_wen
  io.out.bits.mem_funct3 := in.mem_funct3
  io.out.bits.mem_addr   := mem_addr_aligned
  io.out.bits.load_addr  := mem_addr
  io.out.bits.mem_wmask  := ex_mem_wmask
  io.out.bits.mem_wdata  := ex_mem_wdata
  io.out.bits.wb_addr    := in.wb_addr
  io.out.bits.wb_en      := in.wb_en
  io.out.bits.wb_sel     := in.wb_sel
  io.out.bits.pc_plus4   := pc_plus4
  io.out.bits.csr_rdata  := csr.io.csr_rdata

  when (!io.out.fire) {
    io.redirect.valid := false.B
  }

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
}
