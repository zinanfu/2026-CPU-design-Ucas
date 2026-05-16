// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu__pch.h"

void VAlu___024root___eval_triggers_vec__ico(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_triggers_vec__ico\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VAlu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___trigger_anySet__ico\n"); );
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

void VAlu___024root___ico_sequent__TOP__0(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ico_sequent__TOP__0\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_out = ((0U == (IData)(vlSelfRef.io_op))
                         ? (vlSelfRef.io_a + vlSelfRef.io_b)
                         : ((1U == (IData)(vlSelfRef.io_op))
                             ? (vlSelfRef.io_a - vlSelfRef.io_b)
                             : ((2U == (IData)(vlSelfRef.io_op))
                                 ? (vlSelfRef.io_a 
                                    & vlSelfRef.io_b)
                                 : ((3U == (IData)(vlSelfRef.io_op))
                                     ? (vlSelfRef.io_a 
                                        | vlSelfRef.io_b)
                                     : ((4U == (IData)(vlSelfRef.io_op))
                                         ? (vlSelfRef.io_a 
                                            ^ vlSelfRef.io_b)
                                         : ((5U == (IData)(vlSelfRef.io_op))
                                             ? VL_LTS_III(32, vlSelfRef.io_a, vlSelfRef.io_b)
                                             : 0U))))));
}

void VAlu___024root___eval_ico(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_ico\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VAlu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VAlu___024root___eval_phase__ico(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_phase__ico\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VAlu___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAlu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VAlu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VAlu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VAlu___024root___eval(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VAlu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("build/Alu.sv", 2, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VAlu___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_debug_assertions\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_op & 0xf0U)))) {
        Verilated::overWidthError("io_op");
    }
}
#endif  // VL_DEBUG
