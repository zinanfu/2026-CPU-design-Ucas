// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAlu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class VAlu__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAlu___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_op,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    VL_IN(io_a,31,0);
    VL_IN(io_b,31,0);
    VL_OUT(io_out,31,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    VAlu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VAlu___024root(VAlu__Syms* symsp, const char* namep);
    ~VAlu___024root();
    VL_UNCOPYABLE(VAlu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
