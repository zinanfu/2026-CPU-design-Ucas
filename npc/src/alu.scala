package logic

import chisel3._
import chisel3.util._

// op
object ALUOp {
    val ADD = 0.U(4.W)
    val SUB = 1.U(4.W)
    val AND = 2.U(4.W)
    val OR  = 3.U(4.W)
    val XOR = 4.U(4.W)
    val SLT = 5.U(4.W)
}



class Alu(width: Int) extends Module {
    val io = IO(new Bundle {
        val a = Input(UInt(width.W))
        val b = Input(UInt(width.W))
        val op = Input(UInt(4.W))
        val out = Output(UInt(32.W))
    })

    io.out := 0.U

    switch(io.op) {
        is(ALUOp.ADD) { io.out := io.a + io.b }
        is(ALUOp.SUB) { io.out := io.a + (~io.b).asUInt + 1.U }
        is(ALUOp.AND) { io.out := io.a & io.b }
        is(ALUOp.OR)  { io.out := io.a | io.b }
        is(ALUOp.XOR) { io.out := io.a ^ io.b }
        is(ALUOp.SLT) { io.out := (io.a.asSInt < io.b.asSInt).asUInt }
    }

}
