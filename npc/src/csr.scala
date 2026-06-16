package logic

import chisel3._
import chisel3.util._

// CSR addr
object CSRaddr {
    val MSTAUTS     = 0x300
    val MSTAUTSH    = 0x310
    val MEPC        = 0x341
    val MCYCLE      = 0xB00
    val MCYCLEH     = 0xB80
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
    val mcycle      = RegInit("h00000000".U(32.W))
    val mcycleh     = RegInit("h00000000".U(32.W))
    val mepc        = RegInit("h00000000".U(32.W))

    val old_value = MuxLookup(io.csr_addr, 0.U)(Seq(
        CSRaddr.MSTAUTS.U   -> mstatus,
        CSRaddr.MSTAUTSH.U  -> mstatush,
        CSRaddr.MCYCLE.U    -> mcycle,
        CSRaddr.MCYCLEH.U   -> mcycleh
    ))
    
    io.csr_rdata := old_value
    
    val wdata = WireDefault(0.U(32.W))

    wdata := MuxLookup(io.csr_op, 0.U)(Seq(
        CSRop.RW -> io.rs1_data,
        CSRop.RS -> io.rs1_data | old_value,
        CSRop.RC -> ~io.rs1_data & old_value,
        CSRop.RWI -> io.zimm,
        CSRop.RSI -> io.zimm | old_value,
        CSRop.RCI -> ~io.zimm & old_value
    ))

    when(io.csr_wen) {
        when(io.csr_addr === CSRaddr.MSTAUTS.U) {
            mstatus := wdata
        }
        when(io.csr_addr === CSRaddr.MSTAUTSH.U) {
            mstatush := wdata
        }
        when(io.csr_addr === CSRaddr.MCYCLE.U) {
            mcycle := wdata
        }
        when(io.csr_addr === CSRaddr.MCYCLEH.U) {
            mcycleh := wdata
        }
        when(io.csr_addr === CSRaddr.MEPC.U) {
            mepc := wdata
        }
    }

    // exception
    when(io.exception) {
        mepc := io.exception_pc
        // mcause

        mstatus := mstatus & (~"b1000".U(32.W))
    }
    
    // mret
    io.mret_target := mepc



    io.global_intr_en := mstatus(3)
}
