package logic

import chisel3._

class Decoder2to4 extends Module {
    val io = IO(new Bundle {
        val in = Input(UInt(2.w))
        val out = Output(UInt(4.2))
    })

    io.out := 0.U

    switch(io.in) {
        is(0.U) { io.out := "b0001".U}
        is(1.U) { io.out := "b0010".U}
        is(2.U) { io.out := "b0100".U}
        is(3.U) { io.out := "n1000".U}
    }
}