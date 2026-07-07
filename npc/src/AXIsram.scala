package logic

import chisel3._
import chisel3.util._
import npc.PaddrReadDPI
import npc.PaddrWriteDPI

class AXIsram extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4LiteSlaveIO
  })

  val paddrRead  = Module(new PaddrReadDPI)
  val paddrWrite = Module(new PaddrWriteDPI)

  // read
  val rvalidReg = RegInit(false.B)
  val rdataReg  = RegInit(0.U(32.W))

  io.axi.ar.ready := !rvalidReg

  val arFire = io.axi.ar.valid && io.axi.ar.ready

  paddrRead.io.addr    := Mux(arFire, io.axi.ar.addr, 0.U)
  paddrRead.io.len     := 4.U
  paddrRead.io.is_inst := arFire && io.axi.ar.id === 0.U

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
  val awAddrReg = RegInit(0.U(32.W))
  val awIdReg   = RegInit(0.U(1.W))
  val awFullReg = RegInit(false.B)
  val wDataReg  = RegInit(0.U(32.W))
  val wStrbReg  = RegInit(0.U(4.W))
  val wFullReg  = RegInit(false.B)
  val bvalidReg = RegInit(false.B)

  io.axi.aw.ready := !awFullReg && !bvalidReg
  io.axi.w.ready  := !wFullReg && !bvalidReg

  val awFire = io.axi.aw.valid && io.axi.aw.ready
  val wFire  = io.axi.w.valid  && io.axi.w.ready

  val writeAddr = Mux(awFullReg, awAddrReg, io.axi.aw.addr)
  val writeId   = Mux(awFullReg, awIdReg, io.axi.aw.id)
  val writeData = Mux(wFullReg, wDataReg, io.axi.w.data)
  val writeStrb = Mux(wFullReg, wStrbReg, io.axi.w.strb)
  val writeFire = !bvalidReg && (awFullReg || awFire) && (wFullReg || wFire)

  paddrWrite.io.wen   := writeFire
  paddrWrite.io.addr  := Mux(writeFire, writeAddr, 0.U)
  paddrWrite.io.data  := writeData
  paddrWrite.io.wmask := Mux(writeFire, Cat(Fill(28, 0.U), writeStrb), 0.U)
  paddrWrite.io.len   := MuxLookup(writeStrb, 4.U)(Seq(
    "b0001".U -> 1.U,
    "b0010".U -> 1.U,
    "b0100".U -> 1.U,
    "b1000".U -> 1.U,
    "b0011".U -> 2.U,
    "b1100".U -> 2.U,
    "b1111".U -> 4.U
  ))
  paddrWrite.io.is_inst := writeFire && writeId === 0.U

  when (writeFire) {
    awFullReg := false.B
    wFullReg  := false.B
    bvalidReg := true.B
  }.otherwise {
    when (awFire) {
      awAddrReg := io.axi.aw.addr
      awIdReg   := io.axi.aw.id
      awFullReg := true.B
    }
    when (wFire) {
      wDataReg := io.axi.w.data
      wStrbReg := io.axi.w.strb
      wFullReg := true.B
    }
    when (io.axi.b.valid && io.axi.b.ready) {
      bvalidReg := false.B
    }
  }

  io.axi.b.valid := bvalidReg
  io.axi.b.resp  := 0.U
}
