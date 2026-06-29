package logic

import chisel3._
import chisel3.util._

class register(width:Int) extends Module {
    val io = IO(new Bundle{
        // read
        val raddr1 = Input(UInt(5.W))
        val rdata1 = Output(UInt(32.W))
        val raddr2 = Input(UInt(5.W))
        val rdata2 = Output(UInt(32.W))

        // write 
        val wen = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(32.W))

        // debug
        val debug_regs = Output(Vec(32, UInt(32.W)))
    })

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    // read
    io.rdata1 := regs(io.raddr1)
    io.rdata2 := regs(io.raddr2)

    // write
    when(io.wen && io.waddr =/= 0.U) {
        regs(io.waddr) := io.wdata
    }
        
    regs(0) := 0.U

    // debug
    io.debug_regs := regs
}
