#include <verilated.h>
#include <verilated_fst_c.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include "VCpuTop.h"   // 改成 Verilator 生成的顶层头文件
#include "pmem.h"

static vluint64_t sim_time = 0;

static void single_cycle(VCpuTop* top, VerilatedFstC* tfp) {
  top->clock = 0;
  top->eval();
  if (tfp) tfp->dump(sim_time++);

  top->clock = 1;
  top->eval();
  if (tfp) tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  if (argc < 2) {
    std::printf("Usage: %s <img> [max_cycles]\n", argv[0]);
    return 1;
  }

  const char* img = argv[1];
  uint64_t max_cycles = (argc >= 3) ? strtoull(argv[2], nullptr, 0) : 1000000;

  // 1) 初始化 C++ 物理内存
  const uint32_t PMEM_BASE = 0x80000000u;
  const size_t   PMEM_SIZE = 128 * 1024 * 1024;
  init_pmem(PMEM_SIZE, PMEM_BASE);

  if (!load_image(img, PMEM_BASE)) {
    std::printf("load_image failed: %s\n", img);
    return 1;
  }

  // 2) 实例化顶层
  VCpuTop* top = new VCpuTop;

  // 可选波形
  Verilated::traceEverOn(true);
  VerilatedFstC* tfp = new VerilatedFstC;
  top->trace(tfp, 0);
  tfp->open("wave.fst");

  // 3) 复位
  top->reset = 1;
  for (int i = 0; i < 10; i++) single_cycle(top, tfp);
  top->reset = 0;

  // 4) 主循环
  for (uint64_t cycle = 0; cycle < max_cycles; cycle++) {
    // =========================
    // 4.1 取指：把内存内容喂给顶层
    // 约定：top->pc 是输出，top->inst 是输入
    // =========================
    uint32_t pc = top->pc;
    top->io_inst = pmem_read(top->io_pc, 4);

    // =========================
    // 4.2 数据访存（如果你把数据口也拉到顶层）
    // 这里给一个常见总线协议例子，按你的信号名改
    // mem_valid=1 表示有请求
    // mem_wen=1   表示写；0 表示读
    // =========================
    if (top->mem_valid) {
      if (top->mem_wen) {
        // 写请求：根据 wmask 计算写字节
        // 例：wmask=0b0001 写1字节, 0b0011写2字节, 0b1111写4字节
        int len = 4;
        if (top->mem_wmask == 0x1 || top->mem_wmask == 0x2 ||
            top->mem_wmask == 0x4 || top->mem_wmask == 0x8) len = 1;
        else if (top->mem_wmask == 0x3 || top->mem_wmask == 0xC) len = 2;
        else len = 4;

        paddr_write(top->mem_addr, len, top->mem_wdata);
      } else {
        // 读请求
        int len = 4;  // 你如果有 mem_size 信号，就按 mem_size 算
        top->mem_rdata = paddr_read(top->mem_addr, len);
      }
    }

    // =========================
    // 4.3 时钟推进
    // =========================
    single_cycle(top, tfp);

    // =========================
    // 4.4 结束条件（按你的设计）
    // =========================
    if (Verilated::gotFinish()) break;
    // 若有 ebreak/halt 信号，可在这里判断：
    // if (top->halt) break;
  }

  // 5) 收尾
  tfp->close();
  delete tfp;
  delete top;
  free_pmem();
  return 0;
}