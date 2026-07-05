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
  val reqPcReg = RegInit("h80000000".U(32.W))
  val outPcReg = RegInit(0.U(32.W))
  val outInstReg = RegInit(0.U(32.W))
  val sIdle :: sWaitResp :: sHaveInst :: sDropResp :: Nil = Enum(4)
  val state = RegInit(sIdle)

  // printf("pc = 0x%x, if_inst = 0x%x, redirect_valid = %d, redirect_target = %x\n", pc, io.if_inst, io.redirect.valid, io.redirect.bits.target)

  // io.if_pc := pc

  // axi_if
  io.axi_if.ar.addr  := pc
  io.axi_if.ar.valid := false.B
  io.axi_if.r.ready  := false.B
  io.axi_if.aw.addr  := 0.U
  io.axi_if.aw.valid := false.B
  io.axi_if.w.data   := 0.U
  io.axi_if.w.strb   := 0.U
  io.axi_if.w.valid  := false.B
  io.axi_if.b.ready  := false.B

  // IF to ID
  io.out.bits.pc    := outPcReg
  io.out.bits.inst  := outInstReg
  io.out.valid      := state === sHaveInst

  io.si_pc   := outPcReg
  io.si_inst := outInstReg

  when (io.redirect.valid) {
    pc := io.redirect.bits.target
    when (state === sWaitResp) {
      state := sDropResp
    }.otherwise {
      state := sIdle
    }
  }.otherwise {
    switch (state) {
      is (sIdle) {
        io.axi_if.ar.addr  := pc
        io.axi_if.ar.valid := true.B
        when (io.axi_if.ar.valid && io.axi_if.ar.ready) {
          reqPcReg := pc
          pc       := pc + 4.U
          state    := sWaitResp
        }
      }

      is (sWaitResp) {
        io.axi_if.r.ready := true.B
        when (io.axi_if.r.valid && io.axi_if.r.ready) {
          outPcReg   := reqPcReg
          outInstReg := io.axi_if.r.data
          state      := sHaveInst
        }
      }

      is (sHaveInst) {
        when (io.out.fire) {
          state := sIdle
        }
      }

      is (sDropResp) {
        io.axi_if.r.ready := true.B
        when (io.axi_if.r.valid && io.axi_if.r.ready) {
          state := sIdle
        }
      }
    }
  }

}

