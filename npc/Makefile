BUILD_DIR = ./build

TOPNAME = CpuTop_single

# VSRCS = $(wildcard vsrc/*.v)
VSRCS = $(wildcard build/*.sv)


SIM_CSRCS = csrc/sim_main.cpp csrc/pmem.cpp csrc/trace.cpp csrc/ftrace.cpp csrc/difftest.cpp

VERILATOR = verilator
CAPSTONE_LIBS ?= -lcapstone
VERILATOR_FLAGS = -cc --exe --build --trace-fst -I./csrc -Wall -O3 -Wno-UNUSEDSIGNAL -CFLAGS "-std=c++17" $(if $(CAPSTONE_LIBS),-LDFLAGS "$(CAPSTONE_LIBS)") --top-module $(TOPNAME)

# Extra arguments forwarded to the Chisel elaboration entrypoint.
ELAB_ARGS ?=
ITRACE ?= 0
ifeq ($(filter 1 true yes on,$(ITRACE)),)
ITRACE_FLAG := --no-itrace
else
ITRACE_FLAG := --itrace
endif

MTRACE ?= 0
ifneq ($(filter 1 true yes on, $(MTRACE)),)
VERILATOR_FLAGS += -CFLAGS "-DCONFIG_MTRACE"
endif

FTRACE ?= 0
ifneq ($(filter 1 true yes on, $(FTRACE)),)
VERILATOR_FLAGS += -CFLAGS "-DCONFIG_FTRACE"
endif

DIFFTEST ?= 0
DIFF_REF_SO ?= /home/nan/Desktop/cpuDesign/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
ifneq ($(filter 1 true yes on, $(DIFFTEST)),)
VERILATOR_FLAGS += -CFLAGS "-DCONFIG_DIFFTEST"
VERILATOR_FLAGS += -LDFLAGS "-ldl"
endif


test:
	mill -i test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i runMain logic.Elaborate $(ITRACE_FLAG) $(ELAB_ARGS) --target-dir $(BUILD_DIR)

help:
	mill -i runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

bsp:
	mill -i mill.bsp.BSP/install

idea:
	mill -i mill.idea.GenIdea/idea

clean:
	-rm -rf $(BUILD_DIR)
	-rm -rf obj_dir
	-rm -f wave.fst

.PHONY: test verilog help reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(SIM_CSRCS)
	./obj_dir/V$(TOPNAME) $(IMG) $(ELFPATH) $(if $(filter 1 true yes on, $(DIFFTEST)), $(DIFF_REF_SO)) # use: make sim IMG=build/test.bin

-include ../Makefile
