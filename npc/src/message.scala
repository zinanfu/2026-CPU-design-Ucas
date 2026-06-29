package logic

import chisel3._
import chisel3.util._

class IfToIdMessage extends Bundle {
    val pc              = UInt(32.W)
    val inst            = UInt(32.W)
}

class IdToEXMessage extends Bundle {
    val pc              = UInt(32.W)
    val inst            = UInt(32.W)
    // ALU
    val alu_op          = UInt(4.W)
    val alu_a           = UInt(32.W)
    val alu_b           = UInt(32.W)

    // WR
    val wb_addr         = UInt(5.W)
    val wb_en           = Bool()
    val wb_sel          = UInt(2.W)      // 0=alu_out, 1=mem_rdata, 2=pc+4, 3=csr_rdata

    // MEM
    val mem_ren         = Bool()
    val mem_wen         = Bool()
    val mem_funct3      = UInt(3.W)    // load/store 类型，MEM 用于字节/半字处理
    val mem_wmask       = UInt(4.W)
    val mem_wdata       = UInt(32.W)  

    // CSR
    val csr_en          = Bool()
    val csr_addr        = UInt(12.W)
    val csr_op          = UInt(3.W)
    val csr_wdata       = UInt(32.W)   // rs1_data for CSR RW/RS/RC ops
    val csr_zimm        = UInt(32.W)   // zimm(rs1) for CSR RWI/RSI/RCI ops

    // control
    // val pc              = UInt(32.W)   // 当前 pc，EX 用来算 auipc 结果/pc+4
    val branch_target   = UInt(32.W)   // ID 已算好 pc+immB 或 pc+immJ
    val is_branch       = Bool()
    val branch_type     = UInt(3.W)    // funct3，EX 用它做比较
    val is_jal          = Bool()
    val is_jalr         = Bool()

    // exception
    val exception       = Bool()
    val exception_cause = UInt(4.W)
    val mret            = Bool()
    val illegal         = Bool()     // ID 就能发现非法指令

}

class ExToMemMessage extends Bundle {
    val pc              = UInt(32.W)
    val inst            = UInt(32.W)
    // ALU
    val alu_result      = UInt(32.W)

    // MEM
    val mem_ren         = Bool()
    val mem_wen         = Bool()
    val mem_funct3      = UInt(3.W)    // load/store 类型穿透
    val mem_addr        = UInt(32.W)
    val mem_wmask       = UInt(4.W)
    val mem_wdata       = UInt(32.W)

    // WB
    val wb_addr         = UInt(5.W)
    val wb_en           = Bool()
    val wb_sel          = UInt(2.W)      // 0=alu_out, 1=mem_rdata, 2=pc+4, 3=csr_rdata
    val pc_plus4        = UInt(32.W)

    // CSR
    val csr_rdata       = UInt(32.W)
}


class MemToWbMessage extends Bundle {
    val pc              = UInt(32.W)
    val inst            = UInt(32.W)

    val wb_addr         = UInt(5.W)
    val wb_en           = Bool()
    val wb_data         = UInt(32.W)      // 最终写回数据，由 MEM 选好（或 WBU 自选）

}