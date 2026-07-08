package logic

import chisel3._
import chisel3.util._

// ar
class Axi4LiteAR extends Bundle {
  val addr  = Output(UInt(32.W))
  val id    = Output(UInt(1.W))
  val valid = Output(Bool())
  val ready = Input(Bool())
}

// r
class Axi4LiteR extends Bundle {
  val data  = Input(UInt(32.W))
  val resp  = Input(UInt(2.W))
  val valid = Input(Bool())
  val ready = Output(Bool())
}

// aw
class Axi4LiteAW extends Bundle {
  val addr  = Output(UInt(32.W))
  val id    = Output(UInt(1.W))
  val valid = Output(Bool())
  val ready = Input(Bool())
}

// w
class Axi4LiteW extends Bundle {
  val data  = Output(UInt(32.W))
  val strb  = Output(UInt(4.W))
  val valid = Output(Bool())
  val ready = Input(Bool())
}

// b
class Axi4LiteB extends Bundle {
  val resp  = Input(UInt(2.W))
  val valid = Input(Bool())
  val ready = Output(Bool())
}


// master
class Axi4LiteMasterIO extends Bundle {
  val ar = new Axi4LiteAR
  val r  = new Axi4LiteR
  val aw = new Axi4LiteAW
  val w  = new Axi4LiteW
  val b  = new Axi4LiteB
}

// slave
class Axi4LiteSlaveIO extends Bundle {
  val ar = Flipped(new Axi4LiteAR)
  val r  = Flipped(new Axi4LiteR)
  val aw = Flipped(new Axi4LiteAW)
  val w  = Flipped(new Axi4LiteW)
  val b  = Flipped(new Axi4LiteB)
}
