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

  val sIDLE :: sMEMREAD :: sUARTREAD :: sMEMWRITE :: sUARTWRITE :: Nil = Enum(5)
  val state = RegInit(sIDLE)

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

  val arReady = io.mem.ar.ready && io.uart.ar.ready
  // val writeReady = io.mem.aw.ready && io.mem.w.ready && io.uart.aw.ready && io.uart.w.ready
  val arFire = io.in.ar.valid && arReady
  val writeFire = io.in.aw.valid && io.in.w.valid && writeReady
  val UartWriteReady = io.uart.aw.ready && io.uart.w.ready
  val MemWriteReady = io.mem.aw.ready && io.mem.w.ready

  switch (state) {
    is (sIDLE) {
      io.in.ar.ready := arReady

      when (io.in.aw.addr === UART_ADDR) {
        io.in.aw.ready := UartWriteReady
        io.in.w.ready  := UartWriteReady
      }.otherwise {
        io.in.aw.ready := MemWriteReady
        io.in.w.ready  := MemWriteReady
      }

      // io.in.aw.ready := writeReady
      // io.in.w.ready  := writeReady

      when (io.in.aw.valid && io.in.w.valid) {
        when (io.in.aw.addr === UART_ADDR) {
          io.uart.aw.addr  := io.in.aw.addr
          io.uart.aw.id    := io.in.aw.id
          io.uart.aw.valid := writeFire
          io.uart.w.data   := io.in.w.data
          io.uart.w.strb   := io.in.w.strb
          io.uart.w.valid  := writeFire

          when (writeFire) {
            state := sUARTWRITE
          }
        }.otherwise {
          io.mem.aw.addr  := io.in.aw.addr
          io.mem.aw.id    := io.in.aw.id
          io.mem.aw.valid := writeFire
          io.mem.w.data   := io.in.w.data
          io.mem.w.strb   := io.in.w.strb
          io.mem.w.valid  := writeFire

          when (writeFire) {
            state := sMEMWRITE
          }
        }
      }.elsewhen (io.in.ar.valid) {
        when (io.in.ar.addr === UART_ADDR) {
          io.uart.ar.addr  := io.in.ar.addr
          io.uart.ar.id    := io.in.ar.id
          io.uart.ar.valid := arFire

          when (arFire) {
            state := sUARTREAD
          }
        }.otherwise {
          io.mem.ar.addr  := io.in.ar.addr
          io.mem.ar.id    := io.in.ar.id
          io.mem.ar.valid := arFire

          when (arFire) {
            state := sMEMREAD
          }
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
