$(shell mkdir -p build)

TOPNAME = top

VSRCS = $(wildcard vsrc/*.v)
SIM_CSRCS = csrc/sim_main.cpp

NV_CSRCS = csrc/nv_main.cpp
NXDC_FILES = constr/top.nxdc
SRC_AUTO_BIND = build/auto_bind.cpp

$(SRC_AUTO_BIND): $(NXDC_FILES)

	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VERILATOR = verilator
VERILATOR_FLAGS = -cc --exe --build --trace-fst --top-module $(TOPNAME)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(SIM_CSRCS)
	./obj_dir/V$(TOPNAME)


nv: $(SRC_AUTO_BIND)
	$(call git_commit, "nvboard RTL") 
	$(VERILATOR) -cc --exe --build \
		--top-module $(TOPNAME) \
		$(VSRCS) $(NV_CSRCS) $(SRC_AUTO_BIND) \
		-CFLAGS -I$(NVBOARD_HOME)/include \
		-LDFLAGS "-L$(NVBOARD_HOME)/build -lnvboard"
	./obj_dir/V$(TOPNAME)


clean:
	rm -rf obj_dir wave.fst

include ../Makefile
