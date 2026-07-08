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

  val sIDLE :: sMEM_READ :: sUartReadReq :: sMemReadResp :: sUartReadResp :: sMemWriteReq :: sUartWriteReq :: sMemWriteResp :: sUartWriteResp :: Nil = Enum(9)
  val state = RegInit(sIDLE)
  val addrReg = RegInit(0.U(32.W))
  val idReg = RegInit(0.U(1.W))
  val wdataReg = RegInit(0.U(32.W))
  val wstrbReg = RegInit(0.U(4.W))

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

  switch (state) {
    is (sIDLE) {
      io.in.ar.ready := true.B
      io.in.aw.ready := true.B
      io.in.w.ready  := true.B

      when (io.in.aw.valid && io.in.w.valid) {
        addrReg        := io.in.aw.addr
        idReg          := io.in.aw.id
        wdataReg       := io.in.w.data
        wstrbReg       := io.in.w.strb

        when (io.in.aw.addr === UART_ADDR) {
          io.uart.aw.addr  := io.in.aw.addr
          io.uart.aw.id    := io.in.aw.id
          io.uart.aw.valid := true.B
          io.uart.w.data   := io.in.w.data
          io.uart.w.strb   := io.in.w.strb
          io.uart.w.valid  := true.B

          when (io.uart.aw.valid && io.uart.aw.ready && io.uart.w.valid && io.uart.w.ready) {
            state := sUartWriteResp
          }.otherwise {
            state := sUartWriteReq
          }
        }.otherwise {
          io.mem.aw.addr  := io.in.aw.addr
          io.mem.aw.id    := io.in.aw.id
          io.mem.aw.valid := true.B
          io.mem.w.data   := io.in.w.data
          io.mem.w.strb   := io.in.w.strb
          io.mem.w.valid  := true.B

          when (io.mem.aw.valid && io.mem.aw.ready && io.mem.w.valid && io.mem.w.ready) {
            state := sMemWriteResp
          }.otherwise {
            state := sMemWriteReq
          }
        }
      }.elsewhen (io.in.ar.valid) {
        addrReg        := io.in.ar.addr
        idReg          := io.in.ar.id

        when (io.in.ar.addr === UART_ADDR) {
          io.uart.ar.addr  := io.in.ar.addr
          io.uart.ar.id    := io.in.ar.id
          io.uart.ar.valid := true.B

          when (io.uart.ar.valid && io.uart.ar.ready) {
            state := sUartReadResp
          }.otherwise {
            state := sUartReadReq
          }
        }.otherwise {
          io.mem.ar.addr  := io.in.ar.addr
          io.mem.ar.id    := io.in.ar.id
          io.mem.ar.valid := true.B

          when (io.mem.ar.valid && io.mem.ar.ready) {
            state := sMemReadResp
          }.otherwise {
            state := sMEM_READ
          }
        }
      }
    }

    is (sMEM_READ) {
      io.mem.ar.addr  := addrReg
      io.mem.ar.id    := idReg
      io.mem.ar.valid := true.B

      when (io.mem.ar.valid && io.mem.ar.ready) {
        state := sMemReadResp
      }
    }

    is (sUartReadReq) {
      io.uart.ar.addr  := addrReg
      io.uart.ar.id    := idReg
      io.uart.ar.valid := true.B

      when (io.uart.ar.valid && io.uart.ar.ready) {
        state := sUartReadResp
      }
    }

    is (sMemReadResp) {
      io.in.r.data   := io.mem.r.data
      io.in.r.resp   := io.mem.r.resp
      io.in.r.valid  := io.mem.r.valid
      io.mem.r.ready := io.in.r.ready

      when (io.mem.r.valid && io.in.r.ready) {
        state := sIDLE
      }
    }

    is (sUartReadResp) {
      io.in.r.data    := io.uart.r.data
      io.in.r.resp    := io.uart.r.resp
      io.in.r.valid   := io.uart.r.valid
      io.uart.r.ready := io.in.r.ready

      when (io.uart.r.valid && io.in.r.ready) {
        state := sIDLE
      }
    }

    is (sMemWriteReq) {
      io.mem.aw.addr  := addrReg
      io.mem.aw.id    := idReg
      io.mem.aw.valid := true.B
      io.mem.w.data   := wdataReg
      io.mem.w.strb   := wstrbReg
      io.mem.w.valid  := true.B

      when (io.mem.aw.valid && io.mem.aw.ready && io.mem.w.valid && io.mem.w.ready) {
        state := sMemWriteResp
      }
    }

    is (sUartWriteReq) {
      io.uart.aw.addr  := addrReg
      io.uart.aw.id    := idReg
      io.uart.aw.valid := true.B
      io.uart.w.data   := wdataReg
      io.uart.w.strb   := wstrbReg
      io.uart.w.valid  := true.B

      when (io.uart.aw.valid && io.uart.aw.ready && io.uart.w.valid && io.uart.w.ready) {
        state := sUartWriteResp
      }
    }

    is (sMemWriteResp) {
      io.in.b.resp   := io.mem.b.resp
      io.in.b.valid  := io.mem.b.valid
      io.mem.b.ready := io.in.b.ready

      when (io.mem.b.valid && io.in.b.ready) {
        state := sIDLE
      }
    }

    is (sUartWriteResp) {
      io.in.b.resp    := io.uart.b.resp
      io.in.b.valid   := io.uart.b.valid
      io.uart.b.ready := io.in.b.ready

      when (io.uart.b.valid && io.in.b.ready) {
        state := sIDLE
      }
    }
  }
}
