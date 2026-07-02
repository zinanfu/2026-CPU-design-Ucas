// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

VL_ATTR_COLD void VCpuTop___024root___eval_static(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_static\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VCpuTop___024root___eval_initial__TOP(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop___024root___eval_initial(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_initial\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCpuTop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<32>/*1023:0*/ VCpuTop__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void VCpuTop___024root___eval_initial__TOP(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_initial__TOP\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_mem_addr = 0U;
    vlSelfRef.io_mem_wdata = 0U;
    vlSelfRef.io_mem_wmask = 0U;
    vlSelfRef.io_mem_wen = 0U;
    vlSelfRef.io_mem_ren = 0U;
    vlSelfRef.io_debug_inst = 0U;
    vlSelfRef.io_debug_valid = 0U;
    VL_ASSIGN_W(1024, vlSelfRef.io_debug_regs_flat, VCpuTop__ConstPool__CONST_hd6b7ba52_0);
}

VL_ATTR_COLD void VCpuTop___024root___eval_final(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_final\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCpuTop___024root___eval_phase__stl(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop___024root___eval_settle(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_settle\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCpuTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("build/CpuTop.sv", 55, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VCpuTop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VCpuTop___024root___eval_triggers_vec__stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_triggers_vec__stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VCpuTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VCpuTop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VCpuTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VCpuTop___024root___stl_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___stl_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__pc;
}

VL_ATTR_COLD void VCpuTop___024root___eval_stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VCpuTop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VCpuTop___024root___eval_phase__stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VCpuTop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCpuTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VCpuTop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VCpuTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VCpuTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VCpuTop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCpuTop___024root___ctor_var_reset(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___ctor_var_reset\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8569839728366482751ull);
    vlSelf->io_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16199432705588722490ull);
    vlSelf->io_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10204812265844307066ull);
    vlSelf->io_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12174778581957162976ull);
    vlSelf->io_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13654371794600967819ull);
    vlSelf->io_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2104534022309644727ull);
    vlSelf->io_debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10350072731982309968ull);
    vlSelf->io_debug_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15041432708164082798ull);
    vlSelf->io_debug_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5400205057606432418ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->io_debug_regs_flat, __VscopeHash, 13513379243061101752ull);
    vlSelf->CpuTop__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4349561516140292754ull);
    vlSelf->CpuTop__DOT__illegal_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11692240810425205617ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
