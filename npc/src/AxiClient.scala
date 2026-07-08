package logic

import chisel3._
import chisel3.util._

class AxiClient extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4LiteSlaveIO
  })

  val RTC_ADDR = "h10000010".U(32.W)

  val mtime = RegInit(0.U(64.W))
  mtime := mtime + 1.U

  val rvalidReg = RegInit(false.B)
  val rdataReg  = RegInit(0.U(32.W))
  val awFullReg = RegInit(false.B)
  val wFullReg  = RegInit(false.B)
  val bvalidReg = RegInit(false.B)

  io.axi.ar.ready := !rvalidReg
  io.axi.r.data   := rdataReg
  io.axi.r.resp   := 0.U
  io.axi.r.valid  := rvalidReg

  val arFire = io.axi.ar.valid && io.axi.ar.ready
  when (arFire) {
    rvalidReg := true.B
    rdataReg := MuxLookup(io.axi.ar.addr, 0.U)(Seq(
      RTC_ADDR         -> mtime(31, 0),
      (RTC_ADDR + 4.U) -> mtime(63, 32)
    ))
  }.elsewhen (io.axi.r.valid && io.axi.r.ready) {
    rvalidReg := false.B
  }

  io.axi.aw.ready := !awFullReg && !bvalidReg
  io.axi.w.ready  := !wFullReg && !bvalidReg
  io.axi.b.resp   := 0.U
  io.axi.b.valid  := bvalidReg

  val awFire = io.axi.aw.valid && io.axi.aw.ready
  val wFire  = io.axi.w.valid  && io.axi.w.ready
  val writeFire = !bvalidReg && (awFullReg || awFire) && (wFullReg || wFire)

  when (writeFire) {
    awFullReg := false.B
    wFullReg  := false.B
    bvalidReg := true.B
  }.otherwise {
    when (awFire) {
      awFullReg := true.B
    }
    when (wFire) {
      wFullReg := true.B
    }
    when (io.axi.b.valid && io.axi.b.ready) {
      bvalidReg := false.B
    }
  }
}
