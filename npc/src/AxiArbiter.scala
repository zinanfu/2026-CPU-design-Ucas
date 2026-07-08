package logic

import chisel3._
import chisel3.util._

class AxiArbiter extends Module {
  val io = IO(new Bundle {
    val ifu = new Axi4LiteSlaveIO
    val mem = new Axi4LiteSlaveIO
    val axi = new Axi4LiteMasterIO
  })

  val sIDLE :: sIFUREAD :: sLSUREAD :: sLSUWRITE :: Nil = Enum(4)
  val state = RegInit(sIDLE)

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

  switch (state) {
    is (sIDLE) {
      when (io.mem.aw.valid && io.mem.w.valid) {
        io.axi.aw.addr  := io.mem.aw.addr
        io.axi.aw.id    := io.mem.aw.id
        io.axi.aw.valid := io.mem.aw.valid
        io.axi.w.data   := io.mem.w.data
        io.axi.w.strb   := io.mem.w.strb
        io.axi.w.valid  := io.mem.w.valid

        io.mem.aw.ready := io.axi.aw.ready && io.axi.w.ready
        io.mem.w.ready  := io.axi.aw.ready && io.axi.w.ready

        when (io.axi.aw.valid && io.axi.aw.ready && io.axi.w.valid && io.axi.w.ready) {
          state := sLSUWRITE
        }
      }.elsewhen (io.mem.ar.valid) {
        io.axi.ar.addr  := io.mem.ar.addr
        io.axi.ar.id    := io.mem.ar.id
        io.axi.ar.valid := io.mem.ar.valid
        io.mem.ar.ready := io.axi.ar.ready

        when (io.axi.ar.valid && io.axi.ar.ready) {
          state := sLSUREAD
        }
      }.elsewhen (io.ifu.ar.valid) {
        io.axi.ar.addr  := io.ifu.ar.addr
        io.axi.ar.id    := io.ifu.ar.id
        io.axi.ar.valid := io.ifu.ar.valid
        io.ifu.ar.ready := io.axi.ar.ready

        when (io.axi.ar.valid && io.axi.ar.ready) {
          state := sIFUREAD
        }
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
