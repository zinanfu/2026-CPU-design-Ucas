package logic

import chisel3._
import chisel3.util._

class AxiArbiter extends Module {
  val io = IO(new Bundle {
    val ifu = new Axi4LiteSlaveIO
    val lsu = new Axi4LiteSlaveIO
    val mem = new Axi4LiteMasterIO
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

  io.lsu.ar.ready := false.B
  io.lsu.r.data   := 0.U
  io.lsu.r.resp   := 0.U
  io.lsu.r.valid  := false.B
  io.lsu.aw.ready := false.B
  io.lsu.w.ready  := false.B
  io.lsu.b.resp   := 0.U
  io.lsu.b.valid  := false.B

  io.mem.ar.addr  := 0.U
  io.mem.ar.valid := false.B
  io.mem.r.ready  := false.B
  io.mem.aw.addr  := 0.U
  io.mem.aw.valid := false.B
  io.mem.w.data   := 0.U
  io.mem.w.strb   := 0.U
  io.mem.w.valid  := false.B
  io.mem.b.ready  := false.B

  switch (state) {
    is (sIDLE) {
      when (io.lsu.aw.valid && io.lsu.w.valid) {
        io.mem.aw.addr  := io.lsu.aw.addr
        io.mem.aw.valid := io.lsu.aw.valid
        io.mem.w.data   := io.lsu.w.data
        io.mem.w.strb   := io.lsu.w.strb
        io.mem.w.valid  := io.lsu.w.valid

        io.lsu.aw.ready := io.mem.aw.ready && io.mem.w.ready
        io.lsu.w.ready  := io.mem.aw.ready && io.mem.w.ready

        when (io.mem.aw.valid && io.mem.aw.ready && io.mem.w.valid && io.mem.w.ready) {
          state := sLSUWRITE
        }
      }.elsewhen (io.lsu.ar.valid) {
        io.mem.ar.addr  := io.lsu.ar.addr
        io.mem.ar.valid := io.lsu.ar.valid
        io.lsu.ar.ready := io.mem.ar.ready

        when (io.mem.ar.valid && io.mem.ar.ready) {
          state := sLSUREAD
        }
      }.elsewhen (io.ifu.ar.valid) {
        io.mem.ar.addr  := io.ifu.ar.addr
        io.mem.ar.valid := io.ifu.ar.valid
        io.ifu.ar.ready := io.mem.ar.ready

        when (io.mem.ar.valid && io.mem.ar.ready) {
          state := sIFUREAD
        }
      }
    }

    is (sIFUREAD) {
      io.ifu.r.data  := io.mem.r.data
      io.ifu.r.resp  := io.mem.r.resp
      io.ifu.r.valid := io.mem.r.valid
      io.mem.r.ready := io.ifu.r.ready

      when (io.mem.r.valid && io.ifu.r.ready) {
        state := sIDLE
      }
    }

    is (sLSUREAD) {
      io.lsu.r.data  := io.mem.r.data
      io.lsu.r.resp  := io.mem.r.resp
      io.lsu.r.valid := io.mem.r.valid
      io.mem.r.ready := io.lsu.r.ready

      when (io.mem.r.valid && io.lsu.r.ready) {
        state := sIDLE
      }
    }

    is (sLSUWRITE) {
      io.lsu.b.resp  := io.mem.b.resp
      io.lsu.b.valid := io.mem.b.valid
      io.mem.b.ready := io.lsu.b.ready

      when (io.mem.b.valid && io.lsu.b.ready) {
        state := sIDLE
      }
    }
  }
}
