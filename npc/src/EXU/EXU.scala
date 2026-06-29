package logic

import chisel3._
import chisel3.util._

class EXU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IdToEXMessage))
    val out = Decoupled(new ExToMemMessage)

    // 分支/跳转/异常
    val redirect = Valid(new Bundle {
      val target = UInt(32.W)
    })
  })

  val in = io.in.bits

  // alu
  val alu = Module(new Alu(32))
  alu.io.a  := in.alu_a
  alu.io.b  := in.alu_b
  alu.io.op := in.alu_op

  val alu_result = alu.io.out

  // csr
  val csr = Module(new Csr)
  csr.io.csr_addr        := in.csr_addr
  csr.io.csr_op          := in.csr_op
  csr.io.rs1_data        := in.csr_wdata
  csr.io.zimm            := in.csr_zimm
  csr.io.csr_wen         := in.csr_en
  csr.io.exception       := in.exception
  csr.io.exception_cause := in.exception_cause
  csr.io.exception_pc    := in.pc
  csr.io.mret            := in.mret

  // branch
  val branch_taken = WireDefault(false.B)
  when (in.is_branch) {
    switch (in.branch_type) {
      is("b000".U) { branch_taken := in.alu_a === in.alu_b              } // beq
      is("b001".U) { branch_taken := in.alu_a =/= in.alu_b              } // bne
      is("b100".U) { branch_taken := in.alu_a.asSInt < in.alu_b.asSInt  } // blt
      is("b101".U) { branch_taken := in.alu_a.asSInt >= in.alu_b.asSInt } // bge
      is("b110".U) { branch_taken := in.alu_a < in.alu_b                } // bltu
      is("b111".U) { branch_taken := in.alu_a >= in.alu_b               } // bgeu
    }
  }


  val redirect_target = WireDefault(0.U(32.W))
  val redirect_valid  = WireDefault(false.B)

  
  when (in.exception) { // exception
    redirect_valid  := true.B
    redirect_target := csr.io.mtvec_out
  }
  .elsewhen (in.mret) { // mret
    redirect_valid  := true.B
    redirect_target := csr.io.mret_target
  }
  .elsewhen (in.is_jal) { // jal
    redirect_valid  := true.B
    redirect_target := in.branch_target
  }
  .elsewhen (in.is_jalr) { // jalr
    redirect_valid  := true.B
    redirect_target := alu_result & (~1.U(32.W))
  }
  .elsewhen (in.is_branch && branch_taken) { // branch
    redirect_valid  := true.B
    redirect_target := in.branch_target
  }

  io.redirect.valid       := redirect_valid
  io.redirect.bits.target := redirect_target

  // mem
  val mem_addr         = alu_result
  val mem_addr_aligned = mem_addr & "hfffffffc".U(32.W)

  val ex_mem_wmask = WireDefault(in.mem_wmask)
  val ex_mem_wdata = WireDefault(in.mem_wdata)


  when (in.mem_wen && in.mem_funct3 === "b000".U) { // sb
    ex_mem_wmask := (1.U(4.W) << mem_addr(1, 0))
    ex_mem_wdata := (in.mem_wdata & 0xff.U) << Cat(mem_addr(1, 0), 0.U(3.W)) // * 8
  }
  when (in.mem_wen && in.mem_funct3 === "b001".U) { // sh
    ex_mem_wmask := Mux(mem_addr(1), "b1100".U, "b0011".U)
    ex_mem_wdata := (in.mem_wdata & 0xffff.U) << Cat(mem_addr(1), 0.U(4.W))
  }

  // ── pc+4 ──
  val pc_plus4 = in.pc + 4.U

  // io_out
  io.out.bits.alu_result := alu_result
  io.out.bits.mem_ren    := in.mem_ren
  io.out.bits.mem_wen    := in.mem_wen
  io.out.bits.mem_funct3 := in.mem_funct3
  io.out.bits.mem_addr   := mem_addr_aligned
  io.out.bits.mem_wmask  := ex_mem_wmask
  io.out.bits.mem_wdata  := ex_mem_wdata
  io.out.bits.wb_addr    := in.wb_addr
  io.out.bits.wb_en      := in.wb_en
  io.out.bits.wb_sel     := in.wb_sel
  io.out.bits.pc_plus4   := pc_plus4
  io.out.bits.csr_rdata  := csr.io.csr_rdata

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
}
