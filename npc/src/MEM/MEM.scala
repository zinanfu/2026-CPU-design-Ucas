package logic

import chisel3._
import chisel3.util._

class MEM extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new ExToMemMessage))
    val out = Decoupled(new MemToWbMessage)

    // mem
    val mem_addr  = Output(UInt(32.W))
    val mem_wdata = Output(UInt(32.W))
    val mem_wmask = Output(UInt(4.W))
    val mem_wen   = Output(Bool())
    val mem_ren   = Output(Bool())
    val mem_rdata = Input(UInt(32.W))
  })
  // transfer
  val io.out.bits.pc := io.in.bits.pc
  val io.out.bits.inst := io.in.bits.inst

  val in = io.in.bits

  io.mem_addr  := in.mem_addr
  io.mem_wdata := in.mem_wdata
  io.mem_wmask := in.mem_wmask
  io.mem_wen   := in.mem_wen
  io.mem_ren   := in.mem_ren

  // load
  val load_addr_offset = in.mem_addr(1, 0)
  val mem_rdata = io.mem_rdata

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

  when (in.mem_ren) {
    switch (in.mem_funct3) {
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
  }

  // wb
  val wb_data = WireDefault(0.U(32.W))
  switch (in.wb_sel) {
    is(0.U) { wb_data := in.alu_result }
    is(1.U) { wb_data := mem_rdata_processed }
    is(2.U) { wb_data := in.pc_plus4 }
    is(3.U) { wb_data := in.csr_rdata }
  }

  // mem to wb
  io.out.bits.wb_addr := in.wb_addr
  io.out.bits.wb_en   := in.wb_en
  io.out.bits.wb_data := wb_data

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
}
