package logic

import chisel3._

class Encoder4to2 extends Module {
    val io = IO(new Bundle {
        val in = Input(UInt(4.W))
        val out = Output(UInt(2.W))
    })

    io.out := 0.U

    when(io.in === "b0001".U) {
        io.out := 0.U
    }.elsewhen(io.in === "b0010".U) {
        io.out := 1.U
    }.elsewhen(io.in === "b0100".U) {
        io.out := 2.U
    }.elsewhen(io.in === "b1000".U) {
        io.out := 3.U
    }
}