package logic

import chisel3._
import chisel3.util._

class register(width:Int) extends Module {
    val io = IO(new Bundle{
        // read port 1
        val raddr1 = Input(UInt(5.W))
        val rdata1 = Output(UInt(32.W))

        // read port 2
        val raddr2 = Input(UInt(5.W))
        val rdata2 = Output(UInt(32.W))

        // write port
        val wen = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(32.W))

    })

    val regs = RegInit(VecInit(seq.fill(32)(0.U(32.W))))

    // read
    io.rdata1 := regs(io.raddr1)
    io.rdata2 := regs(io.raddr2)

    // write
    when(io.wen && io.waddr =/= 0.U) {
        regs(io.waddr) := io.wdata
    }
        
    regs[0] := 0.U
}
