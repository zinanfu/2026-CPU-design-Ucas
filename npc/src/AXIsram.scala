package logic

import chisel3._
import chisel3.util._
import npc.PaddrReadDPI
import npc.PaddrWriteDPI

// 取指和访存分别使用两个sram，用 is_inst 区分
class AXIsram(is_inst: Boolean = false) extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4LiteSlaveIO
  })

  val paddrRead  = Module(new PaddrReadDPI)
  val paddrWrite = Module(new PaddrWriteDPI)

  // read
  val rvalidReg = RegInit(false.B)
  val rdataReg  = RegInit(0.U(32.W))

  io.axi.ar.ready := true.B

  val arFire = io.axi.ar.valid && io.axi.ar.ready

  paddrRead.io.addr    := Mux(arFire, io.axi.ar.addr, 0.U)
  paddrRead.io.len     := 4.U
  paddrRead.io.is_inst := is_inst.B

  val arFire_d = RegNext(arFire, false.B)
  val rdata_d  = RegNext(paddrRead.io.data, 0.U(32.W))

  when (arFire) {
    rvalidReg := true.B
    rdataReg  := paddrRead.io.data
  }.elsewhen (io.axi.r.valid && io.axi.r.ready) {
    rvalidReg := false.B
  }

  io.axi.r.valid := rvalidReg
  io.axi.r.data  := rdataReg
  io.axi.r.resp  := 0.U

  // write
  io.axi.aw.ready := true.B
  io.axi.w.ready  := true.B

  val awFire    = io.axi.aw.valid && io.axi.aw.ready
  val wFire     = io.axi.w.valid  && io.axi.w.ready

  val writeFire = awFire && wFire
  val bvalidreg = RegInit(false.B)

  paddrWrite.io.wen     := writeFire
  paddrWrite.io.addr    := Mux(writeFire, io.axi.aw.addr, 0.U)
  paddrWrite.io.data    := io.axi.w.data
  paddrWrite.io.wmask   := Mux(writeFire, Cat(Fill(28, 0.U), io.axi.w.strb), 0.U)
  paddrWrite.io.len     := MuxLookup(io.axi.w.strb, 4.U)(Seq(
    "b0001".U -> 1.U,
    "b0010".U -> 1.U,
    "b0100".U -> 1.U,
    "b1000".U -> 1.U,
    "b0011".U -> 2.U,
    "b1100".U -> 2.U,
    "b1111".U -> 4.U
  ))
  paddrWrite.io.is_inst := is_inst.B

  when (writeFire) {
    bvalidreg := true.B
  }.elsewhen (io.axi.b.valid && io.axi.b.ready) {
    bvalidreg := false.B
  }

  io.axi.b.valid := bvalidreg

  // val writeFire_d = RegNext(writeFire, false.B)

  // io.axi.b.valid := writeFire_d
  io.axi.b.resp  := 0.U
}
