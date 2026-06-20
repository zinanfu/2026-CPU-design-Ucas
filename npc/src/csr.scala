package logic

import chisel3._
import chisel3.util._

// CSR addr
object CSRaddr {
    val MSTAUTS     = 0x300
    val MTVEC       = 0x305
    val MSTAUTSH    = 0x310
    val MEPC        = 0x341
    val MCAUSE      = 0x342

    val MCYCLE      = 0xB00
    val MCYCLEH     = 0xB80

    val MVENDORID   = 0xf11
    val MARCHID     = 0xf12
}

object CSRop {
    val NONE        = 0.U(3.W)
    val RW          = 1.U(3.W)
    val RS          = 2.U(3.W)
    val RC          = 3.U(3.W)
    val RWI         = 4.U(3.W)
    val RSI         = 5.U(3.W)
    val RCI         = 6.U(3.W)
}

class Csr extends Module {
    val io = IO(new Bundle {
        // csr
        val csr_addr = Input(UInt(12.W))
        val csr_op   = Input(UInt(3.W))
        val rs1_data = Input(UInt(32.W))
        val zimm     = Input(UInt(32.W))
        val csr_wen  = Input(Bool())
        val csr_rdata= Output(UInt(32.W))

        // mtvec
        val mtvec_out= Output(UInt(32.W))

        // exception
        val exception       = Input(Bool())
        val exception_cause = Input(UInt(4.W))
        val exception_pc    = Input(UInt(32.W))
        val mret            = Input(Bool())
        val mret_target     = Output(UInt(32.W))

        // 全局中断使能
        val global_intr_en  = Output(Bool())
    })

    val mstatus     = RegInit("h00001800".U(32.W))
    val mstatush    = RegInit("h00000000".U(32.W))
    val mcycle_64   = RegInit("h00000000".U(64.W))
    val mepc        = RegInit("h00000000".U(32.W))
    val mvendorid   = RegInit("h79737978".U(32.W))
    val marchid     = RegInit("h000e2cf9".U(32.W)) // 学号未知
    val mcause      = RegInit("h00000000".U(32.W))
    val mtvec       = RegInit("h00000000".U(32.W))

    val old_value = MuxLookup(io.csr_addr, 0.U)(Seq(
        CSRaddr.MSTAUTS.U   -> mstatus,
        CSRaddr.MSTAUTSH.U  -> mstatush,
        CSRaddr.MCYCLE.U    -> mcycle_64(31,0),
        CSRaddr.MCYCLEH.U   -> mcycle_64(63,32),
        CSRaddr.MVENDORID.U -> mvendorid,
        CSRaddr.MARCHID.U   -> marchid,
        CSRaddr.MCAUSE.U    -> mcause,
        CSRaddr.MTVEC.U     -> mtvec,
        CSRaddr.MEPC.U      -> mepc
    ))
    
    io.csr_rdata := old_value
    
    val wdata = WireDefault(0.U(32.W))

    wdata := MuxLookup(io.csr_op, 0.U)(Seq(
        CSRop.RW  -> io.rs1_data,
        CSRop.RS  -> (io.rs1_data | old_value),
        CSRop.RC  -> (~io.rs1_data & old_value),
        CSRop.RWI -> io.zimm,
        CSRop.RSI -> (io.zimm | old_value),
        CSRop.RCI -> (~io.zimm & old_value)
    ))
    // 自增
    mcycle_64 := mcycle_64 + 1.U

    when(io.csr_wen) {
        when(io.csr_addr === CSRaddr.MSTAUTS.U) {
            mstatus := wdata
        }
        when(io.csr_addr === CSRaddr.MSTAUTSH.U) {
            mstatush := wdata
        }
        when(io.csr_addr === CSRaddr.MCYCLE.U) {
            mcycle_64 := Cat(mcycle_64(63,32), wdata)
        }
        when(io.csr_addr === CSRaddr.MCYCLEH.U) {
            mcycle_64 := Cat(wdata, mcycle_64(31,0))
        }
        when(io.csr_addr === CSRaddr.MEPC.U) {
            mepc := wdata
        }
        when(io.csr_addr === CSRaddr.MTVEC.U) {
            mtvec := wdata
        }
        when(io.csr_addr === CSRaddr.MCAUSE.U) {
            mcause := wdata
        }
    }

    // exception
    when(io.exception) {
        mepc    := io.exception_pc
        mcause  := io.exception_cause
        mstatus := mstatus & (~"b1000".U(32.W))
    }
    
    // mret
    io.mret_target := mepc
    when (io.mret) {
        mstatus := mstatus | "b1000".U(32.W)
    }

    io.mtvec_out := mtvec

    io.global_intr_en := mstatus(3)
}
