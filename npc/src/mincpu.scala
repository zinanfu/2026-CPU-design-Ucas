package logic

import chisel3._
import chisel3.util._


// TODO: 指令存储器 Data Memory Byte Load/Store RV32E


class CpuTop extends Module {
  val io = IO(new Bundle {

    // instruction memory
    val inst = Input(UInt(32.W))

    // instruction address
    val pc = Output(UInt(32.W))

    // data memory
    val mem_rdata = Input(UInt(32.W))
    val mem_addr  = Output(UInt(32.W))
    val mem_wdata = Output(UInt(32.W))
    val mem_wen   = Output(Bool())
    val mem_ren   = Output(Bool())
  })

  // ============================================================
  // PC
  // ============================================================

  val pc = RegInit("h80000000".U(32.W))
  io.pc := pc

  // ============================================================
  // Instruction Fields
  // ============================================================

  val inst = pmem_read(pc)

  val opcode = inst(6,0)
  val rd     = inst(11,7)
  val funct3 = inst(14,12)
  val rs1    = inst(19,15)
  val rs2    = inst(24,20)
  val funct7 = inst(31,25)

  // ============================================================
  // Register File
  // ============================================================

  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

  val rs1_data = Mux(rs1.orR, regs(rs1), 0.U)
  val rs2_data = Mux(rs2.orR, regs(rs2), 0.U)

  regs(0) := 0.U

  // ============================================================
  // Immediate
  // ============================================================

  val immI = Cat(Fill(20, inst(31)), inst(31,20))
  val immS = Cat(Fill(20, inst(31)), inst(31,25), inst(11,7))
  val immB = Cat(
    Fill(19, inst(31)),
    inst(31),
    inst(7),
    inst(30,25),
    inst(11,8),
    0.U(1.W)
  )

  val immU = Cat(inst(31,12), Fill(12, 0.U))

  val immJ = Cat(
    Fill(11, inst(31)),
    inst(31),
    inst(19,12),
    inst(20),
    inst(30,21),
    0.U(1.W)
  )

  // ============================================================
  // Default
  // ============================================================

  io.mem_addr  := 0.U
  io.mem_wdata := 0.U
  io.mem_wen   := false.B
  io.mem_ren   := false.B

  val wb_en   = WireDefault(false.B)
  val wb_addr = WireDefault(rd)
  val wb_data = WireDefault(0.U(32.W))

  val next_pc = WireDefault(pc + 4.U)

  // ============================================================
  // Decode
  // ============================================================

  switch(opcode) {

    // ========================================================
    // OP-IMM
    // addi
    // ========================================================

    is("b0010011".U) {
      when(funct3 === "b000".U) {
        wb_en := true.B
        wb_data := rs1_data + immI
      }
    }

    // ========================================================
    // LUI
    // ========================================================

    is("b0110111".U) {
      wb_en := true.B
      wb_data := immU
    }

    // ========================================================
    // AUIPC
    // ========================================================

    is("b0010111".U) {
      wb_en := true.B
      wb_data := pc + immU
    }

    // ========================================================
    // JAL
    // ========================================================

    is("b1101111".U) {
      wb_en := true.B
      wb_data := pc + 4.U
      next_pc := pc + immJ
    }

    // ========================================================
    // JALR
    // ========================================================

    is("b1100111".U) {
      wb_en := true.B
      wb_data := pc + 4.U
      next_pc := (rs1_data + immI) & (~1.U(32.W))
    }

    // ========================================================
    // BRANCH
    // ========================================================

    is("b1100011".U) {

      when(funct3 === "b000".U) {
        when(rs1_data === rs2_data) {
          next_pc := pc + immB
        }
      }

      when(funct3 === "b001".U) {
        when(rs1_data =/= rs2_data) {
          next_pc := pc + immB
        }
      }
    }

    // ========================================================
    // LOAD
    // ========================================================

    is("b0000011".U) {

      io.mem_ren := true.B
      io.mem_addr := rs1_data + immI

      wb_en := true.B

      when(funct3 === "b010".U) {
        wb_data := io.mem_rdata
      }
    }

    // ========================================================
    // STORE
    // ========================================================

    is("b0100011".U) {

      io.mem_wen := true.B
      io.mem_addr := rs1_data + immS
      io.mem_wdata := rs2_data
    }

    // ========================================================
    // OP
    // add/sub
    // ========================================================

    is("b0110011".U) {

      when(funct3 === "b000".U) {

        wb_en := true.B

        when(funct7 === "b0000000".U) {
          wb_data := rs1_data + rs2_data
        }

        when(funct7 === "b0100000".U) {
          wb_data := rs1_data - rs2_data
        }
      }
    }
  }

  // ============================================================
  // Write Back
  // ============================================================

  when(wb_en && wb_addr =/= 0.U) {
    regs(wb_addr) := wb_data
  }

  // ============================================================
  // Update PC
  // ============================================================

  pc := next_pc
}