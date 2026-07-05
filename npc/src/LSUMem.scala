package logic

import chisel3._
import chisel3.util._
import npc.PaddrReadDPI
import npc.PaddrWriteDPI

class LSUMem extends Module {
    val io = IO(new Bundle{
        // read
        val raddr = Input(UInt(32.W))
        val ren   = Input(Bool())
        val rdata = Output(UInt(32.W))

        // write
        val wen   = Input(Bool())
        val wmask = Input(UInt( 4.W))
        val waddr = Input(UInt(32.W))
        val wdata = Input(UInt(32.W))
    })

    val paddrRead = Module(new PaddrReadDPI)
    val paddrWrite= Module(new PaddrWriteDPI)

    // read
    paddrRead.io.addr    := io.raddr
    paddrRead.io.len     := 4.U
    paddrRead.io.is_inst := false.B
    io.rdata             := RegNext(paddrRead.io.data, 0.U(32.W))

    // write
    paddrWrite.io.addr   := io.waddr
    paddrWrite.io.data   := io.wdata
    paddrWrite.io.wmask  := io.wmask
    paddrWrite.io.is_inst := false.B

    // translate 4-bit wmask to byte-length for len parameter
    paddrWrite.io.len    := MuxLookup(io.wmask, 4.U)(Seq(
        "b0001".U -> 1.U,
        "b0010".U -> 1.U,
        "b0100".U -> 1.U,
        "b1000".U -> 1.U,
        "b0011".U -> 2.U,
        "b1100".U -> 2.U,
        "b1111".U -> 4.U
    ))
}