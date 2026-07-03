package logic

import chisel3._
import chisel3.util._
import npc.PaddrReadDPI

class singleMemory(width:Int) extends Module {
    val io = IO(new Bundle{
        // read
        val raddr = Input(UInt(32.W))
        val rdata = Output(UInt(32.W))

        // write 
        val wen = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(32.W))

    })

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
    val paddrRead = Module(new PaddrReadDPI)

    paddrRead.io.addr    := io.raddr      
    paddrRead.io.len     := 4.U         
    paddrRead.io.is_inst := true.B        
    // read
    io.rdata := paddrRead.io.data

    // write
    when(io.wen && io.waddr =/= 0.U) {
        regs(io.waddr) := io.wdata
    }
        
    regs(0) := 0.U


}
