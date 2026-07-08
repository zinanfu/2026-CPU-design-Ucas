package logic

import chisel3._
import chisel3.util._

class Xbar extends Module {
  val io = IO(new Bundle {
    val in   = new Axi4LiteSlaveIO
    val mem  = new Axi4LiteMasterIO
    val uart = new Axi4LiteMasterIO
  })

  val UART_ADDR = "h10000000".U(32.W)

  val sIDLE :: sREADREQ :: sMEMREAD :: sUARTREAD :: sWRITEREQ :: sMEMWRITE :: sUARTWRITE :: Nil = Enum(7)
  val state = RegInit(sIDLE)

  val arAddrReg = RegInit(0.U(32.W))
  val arIdReg = RegInit(0.U(1.W))
  val arToUartReg = RegInit(false.B)

  val awAddrReg = RegInit(0.U(32.W))
  val awIdReg = RegInit(0.U(1.W))
  val awToUartReg = RegInit(false.B)
  val awFullReg = RegInit(false.B)
  val wDataReg = RegInit(0.U(32.W))
  val wStrbReg = RegInit(0.U(4.W))
  val wFullReg = RegInit(false.B)
  val awSentReg = RegInit(false.B)
  val wSentReg = RegInit(false.B)

  // default
  io.in.ar.ready := false.B
  io.in.r.data   := 0.U
  io.in.r.resp   := 0.U
  io.in.r.valid  := false.B
  io.in.aw.ready := false.B
  io.in.w.ready  := false.B
  io.in.b.resp   := 0.U
  io.in.b.valid  := false.B

  io.mem.ar.addr  := 0.U
  io.mem.ar.id    := 0.U
  io.mem.ar.valid := false.B
  io.mem.r.ready  := false.B
  io.mem.aw.addr  := 0.U
  io.mem.aw.id    := 0.U
  io.mem.aw.valid := false.B
  io.mem.w.data   := 0.U
  io.mem.w.strb   := 0.U
  io.mem.w.valid  := false.B
  io.mem.b.ready  := false.B

  io.uart.ar.addr  := 0.U
  io.uart.ar.id    := 0.U
  io.uart.ar.valid := false.B
  io.uart.r.ready  := false.B
  io.uart.aw.addr  := 0.U
  io.uart.aw.id    := 0.U
  io.uart.aw.valid := false.B
  io.uart.w.data   := 0.U
  io.uart.w.strb   := 0.U
  io.uart.w.valid  := false.B
  io.uart.b.ready  := false.B

  val inArFire = io.in.ar.valid && io.in.ar.ready
  val inAwFire = io.in.aw.valid && io.in.aw.ready
  val inWFire  = io.in.w.valid  && io.in.w.ready
  val memArFire = io.mem.ar.valid && io.mem.ar.ready
  val uartArFire = io.uart.ar.valid && io.uart.ar.ready
  val memAwFire = io.mem.aw.valid && io.mem.aw.ready
  val memWFire  = io.mem.w.valid  && io.mem.w.ready
  val uartAwFire = io.uart.aw.valid && io.uart.aw.ready
  val uartWFire  = io.uart.w.valid  && io.uart.w.ready

  switch (state) {
    is (sIDLE) {
      io.in.aw.ready := !awFullReg
      io.in.w.ready  := !wFullReg
      io.in.ar.ready := !awFullReg && !wFullReg && !io.in.aw.valid && !io.in.w.valid

      val writePendingOrIncoming = awFullReg || wFullReg || io.in.aw.valid || io.in.w.valid
      when (writePendingOrIncoming) {
        when (inAwFire) {
          awAddrReg   := io.in.aw.addr
          awIdReg     := io.in.aw.id
          awToUartReg := io.in.aw.addr === UART_ADDR
          awFullReg   := true.B
        }
        when (inWFire) {
          wDataReg := io.in.w.data
          wStrbReg := io.in.w.strb
          wFullReg := true.B
        }

        when ((awFullReg || inAwFire) && (wFullReg || inWFire)) {
          awSentReg := false.B
          wSentReg  := false.B
          state     := sWRITEREQ
        }
      }.elsewhen (inArFire) {
        arAddrReg   := io.in.ar.addr
        arIdReg     := io.in.ar.id
        arToUartReg := io.in.ar.addr === UART_ADDR

        when (io.in.ar.addr === UART_ADDR) {
          io.uart.ar.addr  := io.in.ar.addr
          io.uart.ar.id    := io.in.ar.id
          io.uart.ar.valid := true.B

          state := Mux(uartArFire, sUARTREAD, sREADREQ)
        }.otherwise {
          io.mem.ar.addr  := io.in.ar.addr
          io.mem.ar.id    := io.in.ar.id
          io.mem.ar.valid := true.B

          state := Mux(memArFire, sMEMREAD, sREADREQ)
        }
      }
    }

    is (sREADREQ) {
      when (arToUartReg) {
        io.uart.ar.addr  := arAddrReg
        io.uart.ar.id    := arIdReg
        io.uart.ar.valid := true.B

        when (uartArFire) {
          state := sUARTREAD
        }
      }.otherwise {
        io.mem.ar.addr  := arAddrReg
        io.mem.ar.id    := arIdReg
        io.mem.ar.valid := true.B

        when (memArFire) {
          state := sMEMREAD
        }
      }
    }

    is (sMEMREAD) {
      io.in.r.data   := io.mem.r.data
      io.in.r.resp   := io.mem.r.resp
      io.in.r.valid  := io.mem.r.valid
      io.mem.r.ready := io.in.r.ready

      when (io.mem.r.valid && io.in.r.ready) {
        state := sIDLE
      }
    }

    is (sUARTREAD) {
      io.in.r.data    := io.uart.r.data
      io.in.r.resp    := io.uart.r.resp
      io.in.r.valid   := io.uart.r.valid
      io.uart.r.ready := io.in.r.ready

      when (io.uart.r.valid && io.in.r.ready) {
        state := sIDLE
      }
    }

    is (sWRITEREQ) {
      when (awToUartReg) {
        io.uart.aw.addr  := awAddrReg
        io.uart.aw.id    := awIdReg
        io.uart.aw.valid := awFullReg && !awSentReg
        io.uart.w.data   := wDataReg
        io.uart.w.strb   := wStrbReg
        io.uart.w.valid  := wFullReg && !wSentReg

        val awDone = awSentReg || uartAwFire
        val wDone  = wSentReg  || uartWFire

        when (awDone && wDone) {
          awFullReg := false.B
          wFullReg  := false.B
          awSentReg := false.B
          wSentReg  := false.B
          state     := sUARTWRITE
        }.otherwise {
          when (uartAwFire) { awSentReg := true.B }
          when (uartWFire)  { wSentReg  := true.B }
        }
      }.otherwise {
        io.mem.aw.addr  := awAddrReg
        io.mem.aw.id    := awIdReg
        io.mem.aw.valid := awFullReg && !awSentReg
        io.mem.w.data   := wDataReg
        io.mem.w.strb   := wStrbReg
        io.mem.w.valid  := wFullReg && !wSentReg

        val awDone = awSentReg || memAwFire
        val wDone  = wSentReg  || memWFire

        when (awDone && wDone) {
          awFullReg := false.B
          wFullReg  := false.B
          awSentReg := false.B
          wSentReg  := false.B
          state     := sMEMWRITE
        }.otherwise {
          when (memAwFire) { awSentReg := true.B }
          when (memWFire)  { wSentReg  := true.B }
        }
      }
    }

    is (sMEMWRITE) {
      io.in.b.resp   := io.mem.b.resp
      io.in.b.valid  := io.mem.b.valid
      io.mem.b.ready := io.in.b.ready

      when (io.mem.b.valid && io.in.b.ready) {
        state := sIDLE
      }
    }

    is (sUARTWRITE) {
      io.in.b.resp    := io.uart.b.resp
      io.in.b.valid   := io.uart.b.valid
      io.uart.b.ready := io.in.b.ready

      when (io.uart.b.valid && io.in.b.ready) {
        state := sIDLE
      }
    }
  }
}
