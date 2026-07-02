// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VCpuTop__Syms.h"


void VCpuTop___024root__trace_chg_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VCpuTop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_chg_0\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VCpuTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCpuTop___024root__trace_chg_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_chg_0_sub_0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgIData(oldp+2,(vlSelfRef.io_mem_rdata),32);
    bufp->chgIData(oldp+3,(vlSelfRef.io_mem_addr),32);
    bufp->chgIData(oldp+4,(vlSelfRef.io_mem_wdata),32);
    bufp->chgCData(oldp+5,(vlSelfRef.io_mem_wmask),4);
    bufp->chgBit(oldp+6,(vlSelfRef.io_mem_wen));
    bufp->chgBit(oldp+7,(vlSelfRef.io_mem_ren));
    bufp->chgIData(oldp+8,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+9,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+10,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+11,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+43,(vlSelfRef.CpuTop__DOT__pc),32);
    bufp->chgBit(oldp+44,(vlSelfRef.CpuTop__DOT__illegal_seen));
}

void VCpuTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
