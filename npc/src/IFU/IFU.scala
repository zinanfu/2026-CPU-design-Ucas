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

    // val if_pc   = Output(UInt(32.W))   
    // val if_inst = Input(UInt(32.W))    
    val axi_if     = new Axi4LiteMasterIO
    // si
    val si_pc   = Output(UInt(32.W))
    val si_inst = Output(UInt(32.W))
  })

  val pc = RegInit("h80000000".U(32.W))

  // printf("pc = 0x%x, if_inst = 0x%x, redirect_valid = %d, redirect_target = %x\n", pc, io.if_inst, io.redirect.valid, io.redirect.bits.target)
  // PC 更新逻辑
  when (io.redirect.valid) {
    pc := io.redirect.bits.target 
  }.elsewhen (io.axi_if.ar.ready && io.axi_if.ar_if.ar.valid) {
    pc := pc + 4.U
  }

  // io.if_pc := pc

  // axi_if
  io.axi_if.ar.addr  := pc
  io.axi_if.ar.valid := true.B

  io.axi_if.r.ready  := true.B


  io.axi_if.aw.addr  := 0.U
  io.axi_if.aw.valid := false.B
  io.axi_if.w.data   := 0.U
  io.axi_if.w.strb   := 0.U
  io.axi_if.w.valid  := false.B
  io.axi_if.b.ready  := false.B

  val pc_reg = RegNext(pc, 0.U)

  io.si_pc   := pc_reg
  io.si_inst := io.axi_if.r.data
  // IF to ID

  io.out.bits.pc    := pc_reg
  io.out.bits.inst  := io.axi_if.r.data
  io.out.valid      := io.axi_if.r.valid
}



