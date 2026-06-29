package logic

import chisel3._
import chisel3.util._

class WBU extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new MemToWbMessage))

    // to IDU 
    val reg_wen   = Output(Bool())
    val reg_waddr = Output(UInt(5.W))
    val reg_wdata = Output(UInt(32.W))

    val wb_pc   = Output(UInt(32.W))   
    val wb_inst = Output(UInt(32.W))  
  })

  io.reg_wen    := io.in.bits.wb_en
  io.reg_waddr  := io.in.bits.wb_addr
  io.reg_wdata  := io.in.bits.wb_data

  io.wb_pc         := io.in.bits.pc
  io.wb_inst       := io.in.bits.inst


  io.in.ready   := true.B
}
