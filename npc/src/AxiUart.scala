package logic

import chisel3._
import chisel3.util._

class AxiUart extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4LiteSlaveIO
  })

  val UART_ADDR = "h10000000".U(32.W)

  val rvalidReg = RegInit(false.B)
  val awAddrReg = RegInit(0.U(32.W))
  val awFullReg = RegInit(false.B)
  val wDataReg  = RegInit(0.U(32.W))
  val wFullReg  = RegInit(false.B)
  val bvalidReg = RegInit(false.B)

  io.axi.ar.ready := !rvalidReg
  // 不能读
  io.axi.r.data   := 0.U
  io.axi.r.resp   := 0.U
  io.axi.r.valid  := rvalidReg

  val arFire = io.axi.ar.valid && io.axi.ar.ready
  val rFire  = io.axi.r.valid && io.axi.r.ready
  when (arFire) {
    rvalidReg := true.B
  }.elsewhen (rFire) {
    rvalidReg := false.B
  }

  io.axi.aw.ready := !awFullReg && !bvalidReg
  io.axi.w.ready  := !wFullReg && !bvalidReg
  io.axi.b.resp   := 0.U
  io.axi.b.valid  := bvalidReg

  val awFire    = io.axi.aw.valid && io.axi.aw.ready
  val wFire     = io.axi.w.valid  && io.axi.w.ready
  val writeAddr = Mux(awFullReg, awAddrReg, io.axi.aw.addr)
  val writeData = Mux(wFullReg, wDataReg, io.axi.w.data)
  val writeFire = !bvalidReg && (awFullReg || awFire) && (wFullReg || wFire)

  when (writeFire) {
    awFullReg := false.B
    wFullReg  := false.B
    bvalidReg := true.B
    when (writeAddr === UART_ADDR) {
      printf("%c", writeData(7, 0))
    }
  }.otherwise {
    when (awFire) {
      awAddrReg := io.axi.aw.addr
      awFullReg := true.B
    }
    when (wFire) {
      wDataReg := io.axi.w.data
      wFullReg := true.B
    }
    when (io.axi.b.valid && io.axi.b.ready) {
      bvalidReg := false.B
    }
  }
}
