package logic

import chisel3._
import chisel3.util._
import npc.ItraceDPI


class CpuTop(enableItrace: Boolean = true) extends Module {
  val io = IO(new Bundle {
    val inst            = Input(UInt(32.W))
    val pc              = Output(UInt(32.W))

    // MEM
    val mem_rdata       = Input(UInt(32.W))
    val mem_addr        = Output(UInt(32.W))
    val mem_wdata       = Output(UInt(32.W))
    val mem_wmask       = Output(UInt(4.W))
    val mem_wen         = Output(Bool())
    val mem_ren         = Output(Bool())

    // DEBUG
    val debug_pc        = Output(UInt(32.W))
    val debug_inst      = Output(UInt(32.W))
    val debug_valid     = Output(Bool())
    val debug_regs_flat = Output(UInt(1024.W))
  })

  // 流水级
  val ifu = Module(new IFU)
  val idu = Module(new IDU)
  val exu = Module(new EXU)
  val mem = Module(new MEM)
  val wbu = Module(new WBU)

  // ── 分支地址跳转 ──
  //   IDU: B-type (条件分支) + JAL (无条件跳转)
  //   EXU: JALR (需要 ALU 算地址) + exception + mret
  //   优先级: EXU > IDU（异常/mret 优先）
  val redirect_valid  = exu.io.redirect.valid || idu.io.redirect.valid
  printf("EX: redirect_valid = %d, target = %x\n", exu.io.redirect.valid, exu.io.redirect.bits.target)
  printf("ID: redirect_valid = %d, target = %x\n", idu.io.redirect.valid, idu.io.redirect.bits.target)
  val redirect_target = Mux(exu.io.redirect.valid,
    exu.io.redirect.bits.target,
    idu.io.redirect.bits.target
  )

  ifu.io.redirect.valid       := redirect_valid
  ifu.io.redirect.bits.target := redirect_target

  //   flush 策略:
  //     IDU redirect（B/JAL）→ 只冲 IFU→IDU（跳转指令本身在 IDU，要继续走到 WBU 写回）
  //     EXU redirect（JALR/exception/mret）→ 冲 IFU→IDU + IDU→EXU（后面取指和译码都错了）
  val flush_ifu_idu = redirect_valid
  val flush_idu_exu = exu.io.redirect.valid

  // 流水线连接
  StageConnect(ifu.io.out, idu.io.in, arch = "pipeline", flush = flush_ifu_idu)
  StageConnect(idu.io.out, exu.io.in, arch = "pipeline", flush = flush_idu_exu)
  StageConnect(exu.io.out, mem.io.in, arch = "pipeline")
  StageConnect(mem.io.out, wbu.io.in, arch = "pipeline")

  // pc & inst
  io.pc               := ifu.io.if_pc
  ifu.io.if_inst      := io.inst

  // mem
  io.mem_addr         := mem.io.mem_addr
  io.mem_wdata        := mem.io.mem_wdata
  io.mem_wmask        := mem.io.mem_wmask
  io.mem_wen          := mem.io.mem_wen
  io.mem_ren          := mem.io.mem_ren
  mem.io.mem_rdata    := io.mem_rdata

  // wb (reg is in IDU)
  idu.io.reg_wen      := wbu.io.reg_wen
  idu.io.reg_waddr    := wbu.io.reg_waddr
  idu.io.reg_wdata    := wbu.io.reg_wdata

  // forwarding from EXU / MEM to IDU
  idu.io.fwd_exu_wen   := exu.io.fwd_wb_en
  idu.io.fwd_exu_waddr := exu.io.fwd_wb_addr
  idu.io.fwd_exu_wdata := exu.io.fwd_wb_data

  idu.io.fwd_mem_wen   := mem.io.fwd_wb_en
  idu.io.fwd_mem_waddr := mem.io.fwd_wb_addr
  idu.io.fwd_mem_wdata := mem.io.fwd_wb_data

  // debug
  io.debug_pc         := wbu.io.wb_pc
  io.debug_inst       := wbu.io.wb_inst
  io.debug_valid      := wbu.io.in.valid
  io.debug_regs_flat  := Cat((0 until 32).reverse.map(i => idu.io.debug_regs(i)))

  // ── Itrace ──
  if (enableItrace) {
    val itrace = Module(new ItraceDPI())

    itrace.io.clock := clock
    itrace.io.valid := io.debug_valid
    itrace.io.pc    := io.debug_pc
    itrace.io.inst  := io.debug_inst
  }
}
