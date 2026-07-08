package logic

import chisel3._
import chisel3.util._

class AxiUart extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4LiteSlaveIO
  })

  val UART_ADDR = "h10000000".U(32.W)

  val rvalidReg = RegInit(false.B)
  val bvalidReg = RegInit(false.B)

  io.axi.ar.ready := !rvalidReg
  io.axi.r.data   := 0.U
  io.axi.r.resp   := 0.U
  io.axi.r.valid  := rvalidReg

  val arFire = io.axi.ar.valid && io.axi.ar.ready
  when (arFire) {
    rvalidReg := true.B
  }.elsewhen (io.axi.r.valid && io.axi.r.ready) {
    rvalidReg := false.B
  }

  io.axi.aw.ready := !bvalidReg
  io.axi.w.ready  := !bvalidReg
  io.axi.b.resp   := 0.U
  io.axi.b.valid  := bvalidReg

  val writeFire = io.axi.aw.valid && io.axi.aw.ready && io.axi.w.valid && io.axi.w.ready
  when (writeFire) {
    bvalidReg := true.B
    when (io.axi.aw.addr === UART_ADDR) {
      printf("%c", io.axi.w.data(7, 0))
    }
  }.elsewhen (io.axi.b.valid && io.axi.b.ready) {
    bvalidReg := false.B
  }
}
