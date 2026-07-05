package logic

import chisel3._
import chisel3.util._
import npc.ItraceDPI


// in chisel === 会创造一个硬件上的比较相等  == 是作为 scala 的函数语境下的相等
// 同理 := 是硬件上的赋值，会连线  = 是 scala 的赋值


class CpuTop(enableItrace: Boolean = true) extends Module {
  val io = IO(new Bundle {

    // instruction memory
    // val inst            = Input(UInt(32.W))

    // instruction address
    // val pc              = Output(UInt(32.W))

    // data memory
    // val mem_rdata       = Input(UInt(32.W))
    // val mem_addr        = Output(UInt(32.W))
    // val mem_wdata       = Output(UInt(32.W))
    // val mem_wmask       = Output(UInt(4.W))
    // val mem_wen         = Output(Bool())
    // val mem_ren         = Output(Bool())

    // debug
    val debug_pc        = Output(UInt(32.W))
    val debug_inst      = Output(UInt(32.W))
    val debug_valid     = Output(Bool())
    val debug_regs_flat = Output(UInt(1024.W))
  })
  // pc
  val pc = RegInit("h80000000".U(32.W))
  // io.pc := pc


  //IF
  val instMemory = Module(new singleMemory(32))
  instMemory.io.raddr := pc
  instMemory.io.wen := 0.U
  instMemory.io.waddr := 0.U
  instMemory.io.wdata := 0.U

  // mem
  val lsuMem = Module(new LSUMem)

  // load 相关信号
  val is_load            = WireDefault(false.B)
  val load_processed_data= WireDefault(0.U(32.W))
  val load_offset_reg    = RegInit(0.U(2.W))     // load_addr(1,0)
  val load_funct3_reg    = RegInit(0.U(3.W))

  // state
  val sIF :: sEX :: sMEM :: Nil = Enum(3)
  val state = RegInit(sIF)
  val instReg = RegInit(0.U(32.W))

  // printf("state = %d\n", state)
  // printf("pc = %x\n", pc)


  // id
  val inst = instReg

  val opcode = inst(6,0)
  val rd     = inst(11,7)
  val funct3 = inst(14,12)
  val rs1    = inst(19,15)
  val rs2    = inst(24,20)
  val funct7 = inst(31,25)

  // reg
  val XLEN = 32
  val ARCH_REGS = 16
  val DEBUG_REGS = 32
  val debugRegs = Wire(Vec(DEBUG_REGS, UInt(32.W)))

  val regs = RegInit(VecInit(Seq.fill(ARCH_REGS)(0.U(XLEN.W))))

  val rs1_idx = rs1(3,0)
  val rs2_idx = rs2(3,0)

  val rs1_data = Mux(rs1.orR, regs(rs1_idx), 0.U)
  val rs2_data = Mux(rs2.orR, regs(rs2_idx), 0.U)

  regs(0) := 0.U

  // imm
  val immI = Cat(Fill(20, inst(31)), inst(31,20))
  val immS = Cat(Fill(20, inst(31)), inst(31,25), inst(11,7))
  val immB = Cat(
    Fill(20, inst(31)),
    inst(7),
    inst(30,25),
    inst(11,8),
    0.U(1.W)
  )

  val immU = Cat(inst(31,12), 0.U(12.W))

  val immJ = Cat(
    Fill(12, inst(31)),
    inst(19,12),
    inst(20),
    inst(30,21),
    0.U(1.W)
  )

  // alu
  val alu = Module(new Alu(32))
  alu.io.a  := 0.U
  alu.io.b  := 0.U
  alu.io.op := 0.U

  // csr
  val csr = Module(new Csr)
  csr.io.csr_addr         := 0.U
  csr.io.csr_op           := 0.U
  csr.io.rs1_data         := 0.U
  csr.io.zimm             := 0.U
  csr.io.csr_wen          := false.B
  csr.io.exception        := false.B
  csr.io.exception_cause  := 0.U
  csr.io.exception_pc     := 0.U
  csr.io.mret             := false.B

  // lsuMem 默认连接（各指令处理中按需覆盖）
  lsuMem.io.raddr   := 0.U
  lsuMem.io.ren     := false.B
  lsuMem.io.waddr   := 0.U
  lsuMem.io.wdata   := 0.U
  lsuMem.io.wmask   := 0.U
  lsuMem.io.wen     := false.B

  val wb_en   = WireDefault(false.B)
  val wb_addr = WireDefault(rd)
  val wb_data = WireDefault(0.U(32.W))

  val next_pc = WireDefault(pc + 4.U)

  /*===========================id & exe=================================*/


  val illegal = WireDefault(true.B)

  switch(opcode) {

    // I_type
    is("b0010011".U) {
      alu.io.a := rs1_data
      alu.io.b := immI

      when(funct3 === "b000".U) { // addi
        illegal := false.B
        wb_en := true.B
        alu.io.op := ALUOp.ADD
        wb_data := alu.io.out
      }
      when(funct3 === "b111".U) { // andi
        illegal := false.B
        wb_en := true.B
        alu.io.op := ALUOp.AND
        wb_data := alu.io.out
      }
      when(funct3 === "b110".U) { // ori
        illegal := false.B
        wb_en := true.B
        alu.io.op := ALUOp.OR
        wb_data := alu.io.out
      }
      when(funct3 === "b100".U) { // xori
        illegal := false.B
        wb_en := true.B
        alu.io.op := ALUOp.XOR
        wb_data := alu.io.out
      }
      when(funct3 === "b001".U) { // slli
        illegal := false.B
        wb_en := true.B
        val shamt = immI(4,0)
        wb_data := (rs1_data << shamt)(31,0)
      }
      when(funct3 === "b101".U) {
        illegal := false.B
        wb_en := true.B
        val shamt = immI(4,0)
        when(funct7 === "b0000000".U) { // srli
          wb_data := (rs1_data >> shamt)(31,0)
        }
        when(funct7 === "b0100000".U) { // srai
          wb_data := (rs1_data.asSInt >> shamt)(31,0).asUInt
        }

      }
      when(funct3 === "b010".U) { // slti
        illegal := false.B
        wb_en := true.B
        alu.io.op := ALUOp.SLT
        wb_data := alu.io.out
      }
      when(funct3 === "b011".U) { // sltiu
        illegal := false.B
        wb_en := true.B
        wb_data := Mux(rs1_data < immI, 1.U(32.W), 0.U(32.W))
      }

    }

    // LUI
    is("b0110111".U) {
      illegal := false.B;
      wb_en := true.B
      wb_data := immU
    }

    // AUIPC
    is("b0010111".U) {
      illegal := false.B;
      wb_en := true.B
      alu.io.a := pc
      alu.io.b := immU
      alu.io.op := ALUOp.ADD
      wb_data := alu.io.out
    }


    // J_type
    is("b1101111".U) { //jal
      illegal := false.B;
      wb_en := true.B
      wb_data := pc + 4.U
      next_pc := pc + immJ
    }
    is("b1100111".U) { //jalr
      illegal := false.B;
      wb_en := true.B
      wb_data := pc + 4.U
      alu.io.a := rs1_data
      alu.io.b := immI
      alu.io.op := ALUOp.ADD
      next_pc := alu.io.out & (~1.U(32.W))
    }

    // B_type
    is("b1100011".U) {
      // B 型比较直接用 Mux + 硬件比较器，不通过 ALU
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

    // L_type
    is("b0000011".U) {
      is_load := true.B
      wb_en   := true.B

      val load_addr = rs1_data + immI

      lsuMem.io.ren   := state === sEX
      lsuMem.io.raddr := Mux(state === sEX, load_addr & "hfffffffc".U(32.W), 0.U)

      // 在 sEX 时锁存 load 的字节偏移和类型，供 sMEM 使用
      when (state === sEX) {
        load_offset_reg := load_addr(1, 0)
        load_funct3_reg := funct3
      }

      val offset   = load_offset_reg
      val raw_data = lsuMem.io.rdata

      val load_byte = MuxLookup(offset, 0.U)(Seq(
        0.U -> raw_data(7, 0),
        1.U -> raw_data(15, 8),
        2.U -> raw_data(23, 16),
        3.U -> raw_data(31, 24)
      ))

      val load_half = MuxLookup(offset(1), 0.U)(Seq(
        0.U -> raw_data(15, 0),
        1.U -> raw_data(31, 16)
      ))

      // illegal 基于当前 funct3 判断(sEX)
      switch (funct3) {
        is("b010".U) { illegal := false.B } // lw
        is("b000".U) { illegal := false.B } // lb
        is("b001".U) { illegal := false.B } // lh
        is("b100".U) { illegal := false.B } // lbu
        is("b101".U) { illegal := false.B } // lhu
      }

      // 数据提取基于寄存的 load_funct3_reg(sMEM)
      switch (load_funct3_reg) {
        is("b010".U) { // lw
          load_processed_data := raw_data
        }
        is("b000".U) { // lb
          load_processed_data := Cat(Fill(24, load_byte(7)), load_byte)
        }
        is("b001".U) { // lh
          load_processed_data := Cat(Fill(16, load_half(15)), load_half)
        }
        is("b100".U) { // lbu
          load_processed_data := Cat(0.U(24.W), load_byte)
        }
        is("b101".U) { // lhu
          load_processed_data := Cat(0.U(16.W), load_half)
        }
      }
    }

    // S_type
    is("b0100011".U) {
      illegal := false.B;

      val store_addr = rs1_data + immS

      lsuMem.io.wen   := state === sEX
      lsuMem.io.waddr := store_addr & "hfffffffc".U(32.W)

      when(funct3 === "b000".U) { // sb
        lsuMem.io.wmask := (1.U(4.W) << store_addr(1,0))
        lsuMem.io.wdata := rs2_data << (store_addr(1,0) << 3)
      }

      when(funct3 === "b001".U) { // sh
        lsuMem.io.wmask := Mux(store_addr(1), "b1100".U, "b0011".U)
        lsuMem.io.wdata := rs2_data << (store_addr(1) << 4)
      }

      when(funct3 === "b010".U) { // sw
        lsuMem.io.wmask := "b1111".U
        lsuMem.io.wdata := rs2_data
        // printf("S_wdata:0x%8x\n", rs2_data)
      }
    }

    // R_type
    is("b0110011".U) {
      alu.io.a := rs1_data
      alu.io.b := rs2_data

      when(funct7 === "b0000000".U || funct7 === "b0100000".U) {
        when(funct3 === "b000".U) {
          illegal := false.B
          wb_en := true.B
          when(funct7 === "b0000000".U) { //add
            alu.io.op := ALUOp.ADD
            wb_data := alu.io.out
          }
          when(funct7 === "b0100000".U) { //sub
            alu.io.op := ALUOp.SUB
            wb_data := alu.io.out
          }
        }
        when(funct3 === "b001".U) { //sll
          illegal := false.B
          wb_en := true.B
          wb_data := rs1_data << rs2_data(4, 0)
        }
        when(funct3 === "b101".U) {
          illegal := false.B
          wb_en := true.B
          when(funct7 === "b0000000".U) { //srl
            wb_data := rs1_data >> rs2_data(4, 0)
          }
          when(funct7 === "b0100000".U) { //sra
            wb_data := (rs1_data.asSInt >> rs2_data(4, 0)).asUInt
          }
        }
        when(funct3 === "b011".U) { //sltu
          illegal := false.B
          wb_en := true.B
          wb_data := Mux(rs1_data < rs2_data, 1.U(32.W), 0.U(32.W))
        }
        when(funct3 === "b010".U) { //slt
          illegal := false.B
          wb_en := true.B
          alu.io.op := ALUOp.SLT
          wb_data := alu.io.out
        }
        when(funct3 === "b100".U) { //xor
          illegal := false.B
          wb_en := true.B
          alu.io.op := ALUOp.XOR
          wb_data := alu.io.out
        }
        when(funct3 === "b110".U) { //or
          illegal := false.B
          wb_en := true.B
          alu.io.op := ALUOp.OR
          wb_data := alu.io.out
        }
        when(funct3 === "b111".U) { //and
          illegal := false.B
          wb_en := true.B
          alu.io.op := ALUOp.AND
          wb_data := alu.io.out
        }
      }
    }

    // syscall
    is("b1110011".U) {
      when(funct3 === "b000".U) {
        when(funct7 === "b0000000".U) {
          when(rs2_idx === "b000".U) {  // ecall
            illegal := false.B
            csr.io.exception := true.B && (state === sEX)
            csr.io.exception_cause := 11.U
            csr.io.exception_pc    := pc
            next_pc                := csr.io.mtvec_out
          }
          when(rs2_idx === "b001".U) {  // ebreak
            illegal := false.B
            csr.io.exception := true.B && (state === sEX)
            csr.io.exception_cause := 3.U
            csr.io.exception_pc    := pc
          }
        }
        when(funct7 === "b0011000".U) {  // mret
          illegal := false.B
          csr.io.mret := true.B && (state === sEX)
          next_pc := csr.io.mret_target
        }
      }.otherwise {                     // csr
        illegal := false.B
        csr.io.csr_wen := true.B && (state === sEX)
        csr.io.csr_op := funct3
        csr.io.csr_addr := inst(31,20)
        csr.io.rs1_data := rs1_data
        csr.io.zimm := Cat(0.U(27.W), rs1)

        wb_data := csr.io.csr_rdata
        wb_en := true.B
      }




    }
  }


  /**************************debug*********************************/
  io.debug_pc := pc
  io.debug_inst := inst
  io.debug_valid := !illegal && (state === sEX) // only use in no pipe line

  var i = 0

  // when(csr.io.mret) {
  //   printf("mret: mepc=0x%x next_pc=0x%x\n", csr.io.mret_target, next_pc)
  // }


  while(i < DEBUG_REGS) {
    if (i == 0) {
      debugRegs(i) := 0.U(32.W)
    }
    else if (i < ARCH_REGS) {
      debugRegs(i) := regs(i)
    }
    else {
      debugRegs(i) := 0.U(32.W)
    }
    i += 1
  }

  io.debug_regs_flat := Cat((0 until DEBUG_REGS).reverse.map(i => debugRegs(i)))

  val illegal_seen = RegInit(false.B)

  when(illegal && !illegal_seen && state === sEX) {
    printf(p"illegal inst = 0x${Hexadecimal(inst)} pc = 0x${Hexadecimal(pc)}\n")
    illegal_seen := true.B
  }

  if (enableItrace) {
    //itrace
    val itrace = Module(new ItraceDPI())

    itrace.io.clock := clock
    itrace.io.valid := io.debug_valid
    itrace.io.pc    := io.debug_pc
    itrace.io.inst  := io.debug_inst
  }


  // when(pc === "h8001905c".U) {
  //   printf("pc=0x%8x, next_pc=0x%8x, inst=0x%8x\n", pc, next_pc, inst)
  //   printf("sp=0x%8x\n", rs1_data)
  // }
  // when(pc === "h80019100".U) {
  //   printf("pc=0x%8x, next_pc=0x%8x, inst=0x%8x\n", pc, next_pc, inst)
  //   printf("sp=0x%8x\n", regs(2.U))
  // }
  // when(pc === "h80019138".U) {
  //   printf("pc=0x%8x, next_pc=0x%8x, inst=0x%8x\n", pc, next_pc, inst)
  //   printf("sp=0x%8x\n", regs(2.U))
  // }

  // printf("pc=0x%8x, next_pc=0x%8x, inst=0x%8x\n", pc, next_pc, inst)

  // state
  when (state === sIF) {
    instReg := instMemory.io.rdata
    state   := sEX
  }

  when (state === sEX) {
    when (is_load) {
      state := sMEM
    }.otherwise {
      state := sIF
      pc    := next_pc
      when (wb_en && wb_addr =/= 0.U) {
        regs(wb_addr) := wb_data
      }
    }
  }

  when (state === sMEM) {
    state := sIF
    pc    := next_pc
    when (wb_en && wb_addr =/= 0.U) {
      regs(wb_addr) := load_processed_data
    }
  }
}
