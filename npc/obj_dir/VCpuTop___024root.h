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
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_mem_wmask,3,0);
    VL_OUT8(io_mem_wen,0,0);
    VL_OUT8(io_mem_ren,0,0);
    VL_OUT8(io_debug_valid,0,0);
    CData/*0:0*/ CpuTop__DOT__illegal_seen;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN(io_mem_rdata,31,0);
    VL_OUT(io_mem_addr,31,0);
    VL_OUT(io_mem_wdata,31,0);
    VL_OUT(io_debug_pc,31,0);
    VL_OUT(io_debug_inst,31,0);
    VL_OUTW(io_debug_regs_flat,1023,0,32);
    IData/*31:0*/ CpuTop__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

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
