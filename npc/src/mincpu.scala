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
    val mem_wmask = Output(UInt(4.W))
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

  val inst = io.inst

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
    Fill(20, inst(31)),
    inst(7),
    inst(30,25),
    inst(11,8),
    0.U(1.W)
  )

  val immU = Cat(inst(31,12), Fill(12, 0.U))

  val immJ = Cat(
    Fill(12, inst(31)),
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
  io.mem_wmask := 0.U
  io.mem_wen   := false.B
  io.mem_ren   := false.B

  val wb_en   = WireDefault(false.B)
  val wb_addr = WireDefault(rd)
  val wb_data = WireDefault(0.U(32.W))

  val next_pc = WireDefault(pc + 4.U)

  // ============================================================
  // Decode
  // ============================================================

  val illegal = WireDefault(true.B)

  switch(opcode) {

    // imm
    is("b0010011".U) { 
      when(funct3 === "b000".U) { // addi
        illegal := false.B
        wb_en := true.B
        wb_data := rs1_data + immI
      }
      when(funct3 === "b111".U) { // andi
        illegal := false.B
        wb_en := true.B
        wb_data := rs1_data & immI
      }
      when(funct3 === "b110".U) { // ori
        illegal := false.B
        wb_en := true.B
        wb_data := rs1_data | immI
      }
      when(funct3 === "b100".U) { // xori
        illegal := false.B
        wb_en := true.B
        wb_data := rs1_data ^ immI
      }
    }

    // ========================================================
    // LUI
    // ========================================================

    is("b0110111".U) {
      illegal := false.B;
      wb_en := true.B
      wb_data := immU
    }

    // ========================================================
    // AUIPC
    // ========================================================

    is("b0010111".U) {
      illegal := false.B;
      wb_en := true.B
      wb_data := pc + immU
    }

    // ========================================================
    // JAL
    // ========================================================

    is("b1101111".U) {
      illegal := false.B;
      wb_en := true.B
      wb_data := pc + 4.U
      next_pc := pc + immJ
    }

    // ========================================================
    // JALR
    // ========================================================

    is("b1100111".U) {
      illegal := false.B;
      wb_en := true.B
      wb_data := pc + 4.U
      next_pc := (rs1_data + immI) & (~1.U(32.W))
    }

    // B_type
    is("b1100011".U) {
      when(funct3 === "b000".U) { //beq
        illegal := false.B;
        when(rs1_data === rs2_data) {
          next_pc := pc + immB
        }
      }
      when(funct3 === "b001".U) { //bne
        illegal := false.B;
        when(rs1_data =/= rs2_data) {
          next_pc := pc + immB
        }
      }
      when(funct3 === "b100".U) { //blt
        illegal := false.B;
        when(rs1_data.asSInt < rs2_data.asSInt) {
          next_pc := pc + immB
        }
      }
      when(funct3 === "b101".U) { //bge
        illegal := false.B;
        when(rs1_data.asSInt >= rs2_data.asSInt) {
          next_pc := pc + immB
        }
      }
      when(funct3 === "b110".U) { //bltu
        illegal := false.B;
        when(rs1_data < rs2_data) {
          next_pc := pc + immB
        }
      }
      when(funct3 === "b111".U) { //bgeu
        illegal := false.B;
        when(rs1_data >= rs2_data) {
          next_pc := pc + immB
        }
      }
    }

    // ========================================================
    // LOAD
    // ========================================================

    is("b0000011".U) {

      io.mem_ren := true.B
      io.mem_addr := (rs1_data + immI) & ~3.U

      wb_en := true.B

      when(funct3 === "b010".U) { //lw
        illegal := false.B
        wb_data := io.mem_rdata
      }
      when(funct3 === "b000".U) { //lb
        illegal := false.B

        val byte = MuxLookup(io.mem_addr(1,0), 0.U)(Seq(
          0.U -> io.mem_rdata(7,0),
          1.U -> io.mem_rdata(15,8),
          2.U -> io.mem_rdata(23,16),
          3.U -> io.mem_rdata(31,24)
        ))

        wb_data := Cat(Fill(24,byte(7)), byte)
      }
      when(funct3 === "b001".U) { //lh
        illegal := false.B
        val byte = MuxLookup(io.mem_addr(1,0), 0.U)(Seq(
          0.U -> io.mem_rdata(15,0),
          2.U -> io.mem_rdata(31,16)
        ))

        wb_data := Cat(Fill(16,byte(7)), byte)
      }
      when(funct3 === "b100".U) { //lbu
        illegal := false.B
        val byte = MuxLookup(io.mem_addr(1,0), 0.U)(Seq(
          0.U -> io.mem_rdata(7,0),
          1.U -> io.mem_rdata(15,8),
          2.U -> io.mem_rdata(23,16),
          3.U -> io.mem_rdata(31,24)
        ))

        wb_data := Cat(0.U(24.W), byte)
      }
      when(funct3 === "b101".U) { //lhu
        illegal := false.B
        val byte = MuxLookup(io.mem_addr(1,0), 0.U)(Seq(
          0.U -> io.mem_rdata(15,0),
          2.U -> io.mem_rdata(31,16)
        ))

        wb_data := Cat(0.U(16.W), byte)
      }
    }

    // ========================================================
    // STORE
    // ========================================================

    is("b0100011".U) {
      illegal := false.B;

      io.mem_wen := true.B
      io.mem_addr := rs1_data + immS
      io.mem_wdata := rs2_data

      when(funct3 === "b000".U) { // sb
        io.mem_wmask := "b0001".U
      }
      when(funct3 === "b001".U) { // sh
        io.mem_wmask := "b0011".U
      }
      when(funct3 === "b010".U) { // sw
        io.mem_wmask := "b1111".U
      }
    }

    // ========================================================
    // OP
    // add/sub
    // ========================================================

    is("b0110011".U) {

      when(funct3 === "b000".U) {
        illegal := false.B;

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
    illegal := false.B;
    regs(wb_addr) := wb_data
  }

  val illegal_seen = RegInit(false.B)

  when(illegal && !illegal_seen) {
    printf(p"illegal inst = 0x${Hexadecimal(inst)} pc = 0x${Hexadecimal(pc)}\n")
    illegal_seen := true.B
  }

  // ============================================================
  // Update PC
  // ============================================================

  pc := next_pc
}