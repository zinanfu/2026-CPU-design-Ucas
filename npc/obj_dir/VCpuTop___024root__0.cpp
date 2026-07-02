// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

void VCpuTop___024root___eval_triggers_vec__act(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_triggers_vec__act\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clock) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

bool VCpuTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VCpuTop___024root___nba_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___nba_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"illegal inst = 0x00000000 pc = 0x%x\n",0,
                      32,vlSelfRef.CpuTop__DOT__pc);
    }
    vlSelfRef.CpuTop__DOT__pc = ((IData)(vlSelfRef.reset)
                                  ? 0x80000000U : ((IData)(4U) 
                                                   + vlSelfRef.CpuTop__DOT__pc));
    vlSelfRef.CpuTop__DOT__illegal_seen = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__pc;
}

void VCpuTop___024root___eval_nba(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_nba\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCpuTop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VCpuTop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VCpuTop___024root___eval_phase__act(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__act\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCpuTop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCpuTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VCpuTop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VCpuTop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VCpuTop___024root___eval_phase__nba(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__nba\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VCpuTop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VCpuTop___024root___eval_nba(vlSelf);
        VCpuTop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VCpuTop___024root___eval(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCpuTop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("build/CpuTop.sv", 55, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCpuTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("build/CpuTop.sv", 55, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VCpuTop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VCpuTop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VCpuTop___024root___eval_debug_assertions(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_debug_assertions\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
