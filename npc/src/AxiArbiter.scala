package logic

import chisel3._
import chisel3.util._

class AxiArbiter extends Module {
  val io = IO(new Bundle {
    val ifu = new Axi4LiteSlaveIO
    val mem = new Axi4LiteSlaveIO
    val axi = new Axi4LiteMasterIO
  })

  val sIDLE :: sREADREQ :: sIFUREAD :: sLSUREAD :: sWRITEREQ :: sLSUWRITE :: Nil = Enum(6)
  val state = RegInit(sIDLE)

  val readAddrReg  = RegInit(0.U(32.W))
  val readIdReg    = RegInit(0.U(1.W))

  val awAddrReg    = RegInit(0.U(32.W))
  val awIdReg      = RegInit(0.U(1.W))
  val awFullReg    = RegInit(false.B)

  val wDataReg     = RegInit(0.U(32.W))
  val wStrbReg     = RegInit(0.U(4.W))
  val wFullReg     = RegInit(false.B)
  // 判断下级是否接收
  val awSentReg    = RegInit(false.B)
  val wSentReg     = RegInit(false.B)

  // default
  io.ifu.ar.ready := false.B
  io.ifu.r.data   := 0.U
  io.ifu.r.resp   := 0.U
  io.ifu.r.valid  := false.B
  io.ifu.aw.ready := false.B
  io.ifu.w.ready  := false.B
  io.ifu.b.resp   := 0.U
  io.ifu.b.valid  := false.B

  io.mem.ar.ready := false.B
  io.mem.r.data   := 0.U
  io.mem.r.resp   := 0.U
  io.mem.r.valid  := false.B
  io.mem.aw.ready := false.B
  io.mem.w.ready  := false.B
  io.mem.b.resp   := 0.U
  io.mem.b.valid  := false.B

  io.axi.ar.addr  := 0.U
  io.axi.ar.id    := 0.U
  io.axi.ar.valid := false.B
  io.axi.r.ready  := false.B
  io.axi.aw.addr  := 0.U
  io.axi.aw.id    := 0.U
  io.axi.aw.valid := false.B
  io.axi.w.data   := 0.U
  io.axi.w.strb   := 0.U
  io.axi.w.valid  := false.B
  io.axi.b.ready  := false.B

  // 握手
  val memArFire = io.mem.ar.valid && io.mem.ar.ready
  val memAwFire = io.mem.aw.valid && io.mem.aw.ready
  val memWFire  = io.mem.w.valid  && io.mem.w.ready
  

  val ifuArFire = io.ifu.ar.valid && io.ifu.ar.ready

  val axiArFire = io.axi.ar.valid && io.axi.ar.ready
  val axiAwFire = io.axi.aw.valid && io.axi.aw.ready
  val axiWFire  = io.axi.w.valid  && io.axi.w.ready

  switch (state) {
    is (sIDLE) {
      io.mem.aw.ready := !awFullReg
      io.mem.w.ready  := !wFullReg

      // mem write
      val willBeWrite = awFullReg || wFullReg || io.mem.aw.valid || io.mem.w.valid
      when (willBeWrite) {
        // 存储
        when (memAwFire) {
          awAddrReg := io.mem.aw.addr
          awIdReg   := io.mem.aw.id
          awFullReg := true.B
        }
        when (memWFire) {
          wDataReg  := io.mem.w.data
          wStrbReg  := io.mem.w.strb
          wFullReg  := true.B
        }

        when ((awFullReg || memAwFire) && (wFullReg || memWFire)) {
          awSentReg := false.B
          wSentReg  := false.B
          state     := sWRITEREQ
        }
      }.elsewhen (io.mem.ar.valid) {   // mem read
        io.mem.ar.ready := true.B
        io.axi.ar.addr  := io.mem.ar.addr
        io.axi.ar.id    := io.mem.ar.id
        io.axi.ar.valid := true.B
        when (memArFire) {
          readAddrReg    := io.mem.ar.addr
          readIdReg      := io.mem.ar.id
          state          := Mux(axiArFire, sLSUREAD, sREADREQ)
        }
      }.elsewhen (io.ifu.ar.valid) {   // ifu read
        io.ifu.ar.ready := true.B
        io.axi.ar.addr  := io.ifu.ar.addr
        io.axi.ar.id    := io.ifu.ar.id
        io.axi.ar.valid := true.B
        when (ifuArFire) {
          readAddrReg    := io.ifu.ar.addr
          readIdReg      := io.ifu.ar.id
          state          := Mux(axiArFire, sIFUREAD, sREADREQ)
        }
      }
    }

    is (sREADREQ) {
      io.axi.ar.addr  := readAddrReg
      io.axi.ar.id    := readIdReg
      io.axi.ar.valid := true.B

      when (axiArFire) {
        state := Mux(readIdReg === 1.U, sLSUREAD, sIFUREAD)
      }
    }

    is (sIFUREAD) {
      io.ifu.r.data  := io.axi.r.data
      io.ifu.r.resp  := io.axi.r.resp
      io.ifu.r.valid := io.axi.r.valid
      io.axi.r.ready := io.ifu.r.ready

      when (io.axi.r.valid && io.ifu.r.ready) {
        state := sIDLE
      }
    }

    is (sLSUREAD) {
      io.mem.r.data  := io.axi.r.data
      io.mem.r.resp  := io.axi.r.resp
      io.mem.r.valid := io.axi.r.valid
      io.axi.r.ready := io.mem.r.ready

      when (io.axi.r.valid && io.mem.r.ready) {
        state := sIDLE
      }
    }

    is (sWRITEREQ) {
      io.axi.aw.addr  := awAddrReg
      io.axi.aw.id    := awIdReg
      io.axi.aw.valid := awFullReg && !awSentReg    // 握手后不再重发
      io.axi.w.data   := wDataReg
      io.axi.w.strb   := wStrbReg
      io.axi.w.valid  := wFullReg && !wSentReg

      val awDone = awSentReg || axiAwFire
      val wDone  = wSentReg  || axiWFire

      when (awDone && wDone) {
        // reset
        awFullReg := false.B
        wFullReg  := false.B
        awSentReg := false.B
        wSentReg  := false.B

        state     := sLSUWRITE
      }.otherwise {
        when (axiAwFire) { awSentReg := true.B }
        when (axiWFire)  { wSentReg  := true.B }
      }
    }

    is (sLSUWRITE) {
      io.mem.b.resp  := io.axi.b.resp
      io.mem.b.valid := io.axi.b.valid
      io.axi.b.ready := io.mem.b.ready

      when (io.axi.b.valid && io.mem.b.ready) {
        state := sIDLE
      }
    }
  }
}
