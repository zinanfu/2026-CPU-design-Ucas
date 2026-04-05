TOPNAME = top


VSRCS = $(wildcard vsrc/*.v)
CSRCS = csrc/sim_main.cpp


VERILATOR = verilator
VERILATOR_FLAGS = -cc --exe --build --trace-fst --top-module $(TOPNAME)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)
	./obj_dir/V$(TOPNAME)

clean:
	rm -rf obj_dir wave.fst

include ../Makefile
