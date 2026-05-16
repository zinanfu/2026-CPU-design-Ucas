// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VAlu__Syms.h"


void VAlu___024root__trace_chg_0_sub_0(VAlu___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VAlu___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_chg_0\n"); );
    // Body
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VAlu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VAlu___024root__trace_chg_0_sub_0(VAlu___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_chg_0_sub_0\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgIData(oldp+2,(vlSelfRef.io_a),32);
    bufp->chgIData(oldp+3,(vlSelfRef.io_b),32);
    bufp->chgCData(oldp+4,(vlSelfRef.io_op),4);
    bufp->chgIData(oldp+5,(vlSelfRef.io_out),32);
}

void VAlu___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
