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
    val SLL = 6.U(4.W)
    val SRL = 7.U(4.W)
    val SRA = 8.U(4.W)
    val SLTU= 9.U(4.W)
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
        is(ALUOp.SLTU){ io.out := Mux(io.a < io.b, 1.U, 0.U) }
        is(ALUOp.SLL) { io.out := (io.a << io.b(4,0))(31,0) }  // 截取低 31 位（chisel 中的移位是保留全部位数） 
        is(ALUOp.SRL) { io.out := (io.a >> io.b(4,0))(31,0) }
        is(ALUOp.SRA) { io.out := (io.a.asSInt >> io.b(4,0))(31,0).asUInt } // 有符号数右移补符号位，最后统一格式为无符号数
    }

}
