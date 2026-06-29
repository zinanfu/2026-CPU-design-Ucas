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

  // 分支地址跳转
  ifu.io.redirect := exu.io.redirect
  val pipeline_flush = exu.io.redirect.valid

  // 流水线连接
  StageConnect(ifu.io.out, idu.io.in, arch = "pipeline", flush = pipeline_flush)
  StageConnect(idu.io.out, exu.io.in, arch = "pipeline", flush = pipeline_flush)
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

  // debug
  io.debug_pc         := wbu.io.wb_pc
  io.debug_inst       := wbu.io.wb_inst
  printf("debug: pc = %x, inst = %x\n", io.debug_pc, io.debug_inst)
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
