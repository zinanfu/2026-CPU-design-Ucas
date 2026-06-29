package logic

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val out = Decoupled(new IfToIdMessage)

    // 分支/跳转/异常(EXU)
    val redirect = Flipped(Valid(new Bundle { // valid 由 chisel 标准库提供，结构为 valid 和 bits
      val target = UInt(32.W)
    }))

    val if_pc   = Output(UInt(32.W))   
    val if_inst = Input(UInt(32.W))    
  })

  val pc = RegInit("h80000000".U(32.W))
  val inst = RegInit("h00000000".U(32.W))

  printf("pc = 0x%08x, inst = 0x%08x", pc, inst)
  // PC 更新逻辑
  when (io.redirect.valid) {
    pc := io.redirect.bits.target 
  }.elsewhen (io.out.fire) {
    pc := pc + 4.U
  }
  
  when (io.out.fire) {
    inst := io.if_inst
  }

  io.if_pc := pc

  // IF to ID
  io.out.bits.pc    := pc
  io.out.bits.inst  := inst
  io.out.valid      := true.B
}
