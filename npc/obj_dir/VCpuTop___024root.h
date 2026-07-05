// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCpuTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"


class VCpuTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCpuTop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_debug_valid,0,0);
        CData/*1:0*/ CpuTop__DOT__load_offset_reg;
        CData/*2:0*/ CpuTop__DOT__load_funct3_reg;
        CData/*1:0*/ CpuTop__DOT__state;
        CData/*0:0*/ CpuTop__DOT___GEN_8;
        CData/*0:0*/ CpuTop__DOT___GEN_9;
        CData/*0:0*/ CpuTop__DOT___GEN_15;
        CData/*0:0*/ CpuTop__DOT___GEN_17;
        CData/*0:0*/ CpuTop__DOT__is_load;
        CData/*0:0*/ CpuTop__DOT___GEN_18;
        CData/*7:0*/ CpuTop__DOT__casez_tmp_1;
        CData/*0:0*/ CpuTop__DOT___GEN_20;
        CData/*0:0*/ CpuTop__DOT___GEN_21;
        CData/*0:0*/ CpuTop__DOT___GEN_24;
        CData/*0:0*/ CpuTop__DOT___GEN_25;
        CData/*0:0*/ CpuTop__DOT___GEN_26;
        CData/*0:0*/ CpuTop__DOT___GEN_27;
        CData/*0:0*/ CpuTop__DOT___GEN_30;
        CData/*0:0*/ CpuTop__DOT___GEN_31;
        CData/*0:0*/ CpuTop__DOT___GEN_32;
        CData/*0:0*/ CpuTop__DOT___GEN_34;
        CData/*0:0*/ CpuTop__DOT__illegal;
        CData/*0:0*/ CpuTop__DOT___GEN_35;
        CData/*0:0*/ CpuTop__DOT___GEN_36;
        CData/*0:0*/ CpuTop__DOT__illegal_seen;
        CData/*0:0*/ CpuTop__DOT___GEN_37;
        CData/*1:0*/ CpuTop__DOT__casez_tmp_3;
        CData/*0:0*/ CpuTop__DOT___GEN_38;
        CData/*0:0*/ CpuTop__DOT___GEN_43;
        CData/*0:0*/ CpuTop__DOT___GEN_45;
        CData/*0:0*/ CpuTop__DOT___GEN_46;
        CData/*0:0*/ CpuTop__DOT___GEN_47;
        CData/*0:0*/ CpuTop__DOT___GEN_48;
        CData/*0:0*/ CpuTop__DOT___GEN_49;
        CData/*0:0*/ CpuTop__DOT___GEN_50;
        CData/*0:0*/ CpuTop__DOT___GEN_51;
        CData/*0:0*/ CpuTop__DOT___GEN_52;
        CData/*0:0*/ CpuTop__DOT___GEN_53;
        CData/*0:0*/ CpuTop__DOT___GEN_54;
        CData/*0:0*/ CpuTop__DOT___GEN_55;
        CData/*0:0*/ CpuTop__DOT___GEN_56;
        CData/*0:0*/ CpuTop__DOT___GEN_57;
        CData/*0:0*/ CpuTop__DOT___GEN_58;
        CData/*0:0*/ CpuTop__DOT___GEN_59;
        CData/*0:0*/ CpuTop__DOT___GEN_60;
        CData/*0:0*/ CpuTop__DOT___GEN_61;
        CData/*0:0*/ CpuTop__DOT____Vcellinp__csr__io_exception;
        CData/*0:0*/ CpuTop__DOT____Vcellinp__csr__io_csr_wen;
        CData/*0:0*/ CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6;
        CData/*0:0*/ CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9;
        CData/*3:0*/ CpuTop__DOT__alu__DOT__io_op;
        CData/*2:0*/ CpuTop__DOT__csr__DOT__io_csr_op;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ CpuTop__DOT__load_half;
        SData/*11:0*/ CpuTop__DOT__csr__DOT__io_csr_addr;
        VL_OUT(io_debug_pc,31,0);
        VL_OUT(io_debug_inst,31,0);
    };
    struct {
        VL_OUTW(io_debug_regs_flat,1023,0,32);
        IData/*31:0*/ CpuTop__DOT___instMemory_io_rdata;
        IData/*31:0*/ CpuTop__DOT__pc;
        IData/*31:0*/ CpuTop__DOT__instReg;
        IData/*31:0*/ CpuTop__DOT__regs_0;
        IData/*31:0*/ CpuTop__DOT__regs_1;
        IData/*31:0*/ CpuTop__DOT__regs_2;
        IData/*31:0*/ CpuTop__DOT__regs_3;
        IData/*31:0*/ CpuTop__DOT__regs_4;
        IData/*31:0*/ CpuTop__DOT__regs_5;
        IData/*31:0*/ CpuTop__DOT__regs_6;
        IData/*31:0*/ CpuTop__DOT__regs_7;
        IData/*31:0*/ CpuTop__DOT__regs_8;
        IData/*31:0*/ CpuTop__DOT__regs_9;
        IData/*31:0*/ CpuTop__DOT__regs_10;
        IData/*31:0*/ CpuTop__DOT__regs_11;
        IData/*31:0*/ CpuTop__DOT__regs_12;
        IData/*31:0*/ CpuTop__DOT__regs_13;
        IData/*31:0*/ CpuTop__DOT__regs_14;
        IData/*31:0*/ CpuTop__DOT__regs_15;
        IData/*31:0*/ CpuTop__DOT__casez_tmp;
        IData/*31:0*/ CpuTop__DOT__rs1_data;
        IData/*31:0*/ CpuTop__DOT__casez_tmp_0;
        IData/*31:0*/ CpuTop__DOT__rs2_data;
        IData/*31:0*/ CpuTop__DOT__immI;
        IData/*31:0*/ CpuTop__DOT___load_addr_T;
        IData/*31:0*/ CpuTop__DOT___GEN_39;
        IData/*31:0*/ CpuTop__DOT___wb_data_T_11;
        IData/*31:0*/ CpuTop__DOT___GEN_41;
        IData/*31:0*/ CpuTop__DOT__load_processed_data;
        IData/*31:0*/ CpuTop__DOT___GEN_44;
        IData/*31:0*/ CpuTop__DOT__wb_data;
        IData/*31:0*/ CpuTop__DOT__lsuMem__DOT___paddrRead_data;
        IData/*31:0*/ CpuTop__DOT__lsuMem__DOT__io_rdata_REG;
        IData/*31:0*/ CpuTop__DOT__alu__DOT__io_a;
        IData/*31:0*/ CpuTop__DOT__alu__DOT__io_b;
        IData/*31:0*/ CpuTop__DOT__alu__DOT__io_out;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__io_rs1_data;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__io_zimm;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__io_csr_rdata;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__mstatus;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__mstatush;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__mepc;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__mcause;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__mtvec;
        IData/*31:0*/ CpuTop__DOT__csr__DOT__casez_tmp;
        IData/*31:0*/ __Vfunc_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_CpuTop__DOT__lsuMem__DOT__paddrRead__DOT__paddr_read__1__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CpuTop__DOT__csr__DOT__mcycle_64;
        QData/*63:0*/ CpuTop__DOT__csr__DOT___mcycle_64_T;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VCpuTop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VCpuTop___024root(VCpuTop__Syms* symsp, const char* namep);
    ~VCpuTop___024root();
    VL_UNCOPYABLE(VCpuTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
