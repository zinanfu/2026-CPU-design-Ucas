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
        VL_OUT8(io_mem_wmask,3,0);
        VL_OUT8(io_mem_wen,0,0);
        VL_OUT8(io_mem_ren,0,0);
        CData/*0:0*/ CpuTop__DOT___GEN_2;
        CData/*7:0*/ CpuTop__DOT__casez_tmp_1;
        CData/*0:0*/ CpuTop__DOT___GEN_15;
        CData/*0:0*/ CpuTop__DOT___GEN_17;
        CData/*0:0*/ CpuTop__DOT___GEN_18;
        CData/*0:0*/ CpuTop__DOT__illegal_seen;
        CData/*0:0*/ CpuTop__DOT___GEN_19;
        CData/*0:0*/ CpuTop__DOT___GEN_21;
        CData/*0:0*/ CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5;
        CData/*0:0*/ CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ CpuTop__DOT__byte_1;
        VL_IN(io_inst,31,0);
        VL_OUT(io_pc,31,0);
        VL_IN(io_mem_rdata,31,0);
        VL_OUT(io_mem_addr,31,0);
        VL_OUT(io_mem_wdata,31,0);
        IData/*31:0*/ CpuTop__DOT__pc;
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
        IData/*31:0*/ CpuTop__DOT__regs_16;
        IData/*31:0*/ CpuTop__DOT__regs_17;
        IData/*31:0*/ CpuTop__DOT__regs_18;
        IData/*31:0*/ CpuTop__DOT__regs_19;
        IData/*31:0*/ CpuTop__DOT__regs_20;
        IData/*31:0*/ CpuTop__DOT__regs_21;
        IData/*31:0*/ CpuTop__DOT__regs_22;
        IData/*31:0*/ CpuTop__DOT__regs_23;
        IData/*31:0*/ CpuTop__DOT__regs_24;
        IData/*31:0*/ CpuTop__DOT__regs_25;
        IData/*31:0*/ CpuTop__DOT__regs_26;
        IData/*31:0*/ CpuTop__DOT__regs_27;
        IData/*31:0*/ CpuTop__DOT__regs_28;
        IData/*31:0*/ CpuTop__DOT__regs_29;
        IData/*31:0*/ CpuTop__DOT__regs_30;
        IData/*31:0*/ CpuTop__DOT__regs_31;
        IData/*31:0*/ CpuTop__DOT__casez_tmp;
        IData/*31:0*/ CpuTop__DOT__rs1_data;
        IData/*31:0*/ CpuTop__DOT__casez_tmp_0;
    };
    struct {
        IData/*31:0*/ CpuTop__DOT__rs2_data;
        IData/*31:0*/ CpuTop__DOT__immI;
        IData/*31:0*/ CpuTop__DOT___wb_data_T_9;
        IData/*31:0*/ CpuTop__DOT___GEN_22;
        IData/*31:0*/ CpuTop__DOT__wb_data;
        IData/*31:0*/ CpuTop__DOT___next_pc_T_4;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
