package logic

import chisel3._
import chisel3.util._

class IDU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IfToIdMessage))
    val out = Decoupled(new IdToEXMessage)

    // reg
    val reg_wen   = Input(Bool())
    val reg_waddr = Input(UInt(5.W))
    val reg_wdata = Input(UInt(32.W))

    // debug
    val debug_regs = Output(Vec(32, UInt(32.W)))
  })
  // transfer
  val io.out.bits.pc := io.in.bits.pc
  val io.out.bits.inst := io.in.bits.inst
  
  // decode
  val inst   = io.in.bits.inst
  val pc     = io.in.bits.pc
  printf("IDU:pc = %x, inst = %x\n", pc, inst)

  val opcode = inst(6, 0)
  val rd     = inst(11, 7)
  val funct3 = inst(14, 12)
  val rs1    = inst(19, 15)
  val rs2    = inst(24, 20)
  val funct7 = inst(31, 25)

  // reg
  val regfile = Module(new register(32))
  regfile.io.raddr1 := rs1
  regfile.io.raddr2 := rs2
  regfile.io.wen    := io.reg_wen
  regfile.io.waddr  := io.reg_waddr
  regfile.io.wdata  := io.reg_wdata
  io.debug_regs     := regfile.io.debug_regs

  val rs1_data = Mux(rs1.orR, regfile.io.rdata1, 0.U)     // orR: 位或
  val rs2_data = Mux(rs2.orR, regfile.io.rdata2, 0.U)

  // imm
  val immI = Cat(Fill(20, inst(31)), inst(31, 20))
  val immS = Cat(Fill(20, inst(31)), inst(31, 25), inst(11, 7))
  val immB = Cat(Fill(20, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
  val immU = Cat(inst(31, 12), 0.U(12.W))
  val immJ = Cat(Fill(12, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W))

  // alu
  io.out.bits.alu_op          := 0.U
  io.out.bits.alu_a           := rs1_data
  io.out.bits.alu_b           := rs2_data

  // wb
  io.out.bits.wb_addr         := rd
  io.out.bits.wb_en           := false.B
  io.out.bits.wb_sel          := 0.U   // 0=alu, 1=mem, 2=pc+4, 3=csr

  // mem
  io.out.bits.mem_ren         := false.B
  io.out.bits.mem_wen         := false.B
  io.out.bits.mem_funct3      := 0.U
  io.out.bits.mem_wmask       := 0.U
  io.out.bits.mem_wdata       := rs2_data

  // csr
  io.out.bits.csr_en          := false.B
  io.out.bits.csr_addr        := inst(31, 20)
  io.out.bits.csr_op          := funct3
  io.out.bits.csr_wdata       := rs1_data
  io.out.bits.csr_zimm        := Cat(0.U(27.W), rs1)

  // pc & branch/j
  io.out.bits.pc              := pc
  io.out.bits.branch_target   := pc + immB   // B-type 默认
  io.out.bits.is_branch       := false.B
  io.out.bits.branch_type     := funct3
  io.out.bits.is_jal          := false.B
  io.out.bits.is_jalr         := false.B

  // exception
  io.out.bits.exception       := false.B
  io.out.bits.exception_cause := 0.U
  io.out.bits.mret            := false.B
  io.out.bits.illegal         := true.B   

  // alu_op
  val ALU_ADD  = 0.U(4.W)
  val ALU_SUB  = 1.U(4.W)
  val ALU_AND  = 2.U(4.W)
  val ALU_OR   = 3.U(4.W)
  val ALU_XOR  = 4.U(4.W)
  val ALU_SLT  = 5.U(4.W)
  val ALU_SLL  = 6.U(4.W)
  val ALU_SRL  = 7.U(4.W)
  val ALU_SRA  = 8.U(4.W)
  val ALU_SLTU = 9.U(4.W)

  switch(opcode) {

    // I_type
    is("b0010011".U) {
      io.out.bits.alu_a  := rs1_data
      io.out.bits.alu_b  := immI
      io.out.bits.wb_sel := 0.U

      when(funct3 === "b000".U) { // addi
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_ADD
      }
      when(funct3 === "b111".U) { // andi
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_AND
      }
      when(funct3 === "b110".U) { // ori
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_OR
      }
      when(funct3 === "b100".U) { // xori
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_XOR
      }
      when(funct3 === "b001".U) { // slli
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_SLL
        io.out.bits.alu_b   := Cat(0.U(27.W), immI(4, 0)) // shamt
      }
      when(funct3 === "b101".U) {
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_b   := Cat(0.U(27.W), immI(4, 0)) // shamt
        when(funct7 === "b0000000".U) { // srli
          io.out.bits.alu_op := ALU_SRL
        }
        when(funct7 === "b0100000".U) { // srai
          io.out.bits.alu_op := ALU_SRA
        }
      }
      when(funct3 === "b010".U) { // slti
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_SLT
      }
      when(funct3 === "b011".U) { // sltiu
        io.out.bits.illegal := false.B
        io.out.bits.wb_en   := true.B
        io.out.bits.alu_op  := ALU_SLTU
      }
    }

    // lui & auipc
    is("b0110111".U) {
      io.out.bits.illegal := false.B
      io.out.bits.wb_en   := true.B
      io.out.bits.wb_sel  := 0.U
      io.out.bits.alu_a   := 0.U
      io.out.bits.alu_b   := immU
      io.out.bits.alu_op  := ALU_ADD      // 0 + immU = immU
    }
    is("b0010111".U) {
      io.out.bits.illegal := false.B
      io.out.bits.wb_en   := true.B
      io.out.bits.wb_sel  := 0.U
      io.out.bits.alu_a   := pc
      io.out.bits.alu_b   := immU
      io.out.bits.alu_op  := ALU_ADD
    }

    // J_type
    is("b1101111".U) { // jal
      io.out.bits.illegal      := false.B
      io.out.bits.wb_en        := true.B
      io.out.bits.wb_sel       := 2.U        // pc+4
      io.out.bits.is_jal       := true.B
      io.out.bits.branch_target := pc + immJ
    }
    is("b1100111".U) { // jalr
      io.out.bits.illegal      := false.B
      io.out.bits.wb_en        := true.B
      io.out.bits.wb_sel       := 2.U        // pc+4
      io.out.bits.is_jalr      := true.B
      io.out.bits.alu_a        := rs1_data
      io.out.bits.alu_b        := immI
      io.out.bits.alu_op       := ALU_ADD
    }

    // B_type
    is("b1100011".U) {
      io.out.bits.is_branch     := true.B
      io.out.bits.branch_type   := funct3
      io.out.bits.branch_target := pc + immB
      io.out.bits.alu_a         := rs1_data
      io.out.bits.alu_b         := rs2_data

      when(funct3 === "b000".U || funct3 === "b001".U || funct3 === "b100".U || funct3 === "b101".U || funct3 === "b110".U || funct3 === "b111".U) {
        io.out.bits.illegal := false.B
      }
    }

    // L_type
    is("b0000011".U) {
      io.out.bits.wb_en        := true.B
      io.out.bits.wb_sel       := 1.U        // mem_rdata
      io.out.bits.mem_ren      := true.B
      io.out.bits.mem_funct3   := funct3
      io.out.bits.alu_a        := rs1_data
      io.out.bits.alu_b        := immI
      io.out.bits.alu_op       := ALU_ADD    // load_addr = rs1 + immI

      when(funct3 === "b010".U) { // lw
        io.out.bits.illegal := false.B
      }
      when(funct3 === "b000".U) { // lb
        io.out.bits.illegal := false.B
      }
      when(funct3 === "b001".U) { // lh
        io.out.bits.illegal := false.B
      }
      when(funct3 === "b100".U) { // lbu
        io.out.bits.illegal := false.B
      }
      when(funct3 === "b101".U) { // lhu
        io.out.bits.illegal := false.B
      }
    }

    // S_type
    is("b0100011".U) {
      io.out.bits.illegal    := false.B
      io.out.bits.mem_wen    := true.B
      io.out.bits.mem_funct3 := funct3
      io.out.bits.alu_a      := rs1_data
      io.out.bits.alu_b      := immS
      io.out.bits.alu_op     := ALU_ADD     // store_addr = rs1 + immS
      io.out.bits.mem_wdata  := rs2_data

      when(funct3 === "b000".U) { // sb
        // wmask 留到 EXU 根据 addr[1:0] 算
        io.out.bits.mem_wmask := 0.U 
      }
      when(funct3 === "b001".U) { // sh
        io.out.bits.mem_wmask := 0.U  
      }
      when(funct3 === "b010".U) { // sw
        io.out.bits.mem_wmask := "b1111".U
      }
    }

    // R_type
    is("b0110011".U) {
      io.out.bits.alu_a  := rs1_data
      io.out.bits.alu_b  := rs2_data
      io.out.bits.wb_sel := 0.U

      when(funct7 === "b0000000".U || funct7 === "b0100000".U) {
        when(funct3 === "b000".U) { // sub & add
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := Mux(funct7(5), ALU_SUB, ALU_ADD)
        }
        when(funct3 === "b001".U) { // sll
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_SLL
          io.out.bits.alu_b   := Cat(0.U(27.W), rs2_data(4, 0))
        }
        when(funct3 === "b101".U) { // sra & srl
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := Mux(funct7(5), ALU_SRA, ALU_SRL)
          io.out.bits.alu_b   := Cat(0.U(27.W), rs2_data(4, 0))
        }
        when(funct3 === "b011".U) { // sltu
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_SLTU
        }
        when(funct3 === "b010".U) { // slt
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_SLT
        }
        when(funct3 === "b100".U) { // xor
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_XOR
        }
        when(funct3 === "b110".U) { // or
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_OR
        }
        when(funct3 === "b111".U) { // and
          io.out.bits.illegal := false.B
          io.out.bits.wb_en   := true.B
          io.out.bits.alu_op  := ALU_AND
        }
      }
    }

    // system
    is("b1110011".U) {
      when(funct3 === "b000".U) {
        when(funct7 === "b0000000".U) {
          when(rs2(4, 0) === "b00000".U) { // ecall
            io.out.bits.illegal        := false.B
            io.out.bits.exception      := true.B
            io.out.bits.exception_cause := 11.U
          }
          when(rs2(4, 0) === "b00001".U) { // ebreak
            io.out.bits.illegal        := false.B
            io.out.bits.exception      := true.B
            io.out.bits.exception_cause := 3.U
          }
        }
        when(funct7 === "b0011000".U) { // mret
          io.out.bits.illegal := false.B
          io.out.bits.mret    := true.B
        }
      }.otherwise { // csr 读写
        io.out.bits.illegal  := false.B
        io.out.bits.csr_en   := true.B
        io.out.bits.wb_en    := true.B
        io.out.bits.wb_sel   := 3.U         // csr_rdata
        io.out.bits.csr_addr := inst(31, 20)
        io.out.bits.csr_op   := funct3
        io.out.bits.csr_wdata := rs1_data
        io.out.bits.csr_zimm  := Cat(0.U(27.W), rs1)
      }
    }
  }

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
}
