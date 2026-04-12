BUILD_DIR = ./build

TOPNAME = top

VSRCS = $(wildcard vsrc/*.v)
SIM_CSRCS = csrc/sim_main.cpp

VERILATOR = verilator
VERILATOR_FLAGS = -cc --exe --build --trace-fst --top-module $(TOPNAME)


test:
	mill -i test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i runMain logic.Elaborate --target-dir $(BUILD_DIR)

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

.PHONY: test verilog help reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(SIM_CSRCS)
	./obj_dir/V$(TOPNAME)

-include ../Makefile
