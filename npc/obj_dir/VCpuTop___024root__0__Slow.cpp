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
    vlSelfRef.__Vtrigprevexpr___TOP__CpuTop__DOT__axiSram__DOT__writeFire__0 
        = vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire;
}

VL_ATTR_COLD void VCpuTop___024root___eval_initial(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_initial\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
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

void VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, CData/*0:0*/ is_inst, IData/*31:0*/ &paddr_read__Vfuncrtn);

VL_ATTR_COLD void VCpuTop___024root___stl_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___stl_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__reg_3_pc;
    vlSelfRef.io_debug_inst = vlSelfRef.CpuTop__DOT__reg_3_inst;
    vlSelfRef.io_debug_valid = vlSelfRef.CpuTop__DOT__reg_valid_3;
    vlSelfRef.CpuTop__DOT__ifu__DOT__io_out_valid = 
        (2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready 
        = ((0U != (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
           & (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready 
        = ((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
               | (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN = (0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN = (1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_0 = (0U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN = 
        (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1 
        = (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9 = (1U & 
                                               ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                     >> 0x0000000cU))) 
                                                | ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                        >> 0x0000000cU))) 
                                                   | ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                           >> 0x0000000cU))) 
                                                      | ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x0000000cU))) 
                                                         | ((4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                 >> 0x0000000cU))) 
                                                            | ((6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                    >> 0x0000000cU))) 
                                                               | ((~ 
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                        >> 0x0000000cU)))) 
                                                                  | (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                         >> 0x0000000cU)))))))))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33 = ((0x73U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10 
        = (IData)((0U == (0xfff00000U & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T 
        = (1ULL + vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64);
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_2 = (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_2 
        = (2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_3 = (2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.io_si_pc = vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg;
    vlSelfRef.io_si_inst = vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg;
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                             & (0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__idu__DOT__immI = (((- (IData)(
                                                         (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x00000014U));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3 = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000cU)))
                                                ? 6U
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                        >> 0x0000000cU)))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000000cU))) 
                                                     << 1U))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25 = ((3U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31 = ((0x23U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13 
        = ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
           | ((0x37U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
              | ((0x17U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
                 | (0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27 = ((0U 
                                                 == 
                                                 (vlSelfRef.CpuTop__DOT__reg_inst 
                                                  >> 0x00000019U)) 
                                                | (0x20U 
                                                   == 
                                                   (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x00000019U)));
    vlSelfRef.io_debug_regs_flat[0U] = 0U;
    vlSelfRef.io_debug_regs_flat[1U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debug_regs_flat[2U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2))));
    vlSelfRef.io_debug_regs_flat[3U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[4U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debug_regs_flat[5U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debug_regs_flat[6U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6))));
    vlSelfRef.io_debug_regs_flat[7U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[8U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debug_regs_flat[9U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debug_regs_flat[10U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10))));
    vlSelfRef.io_debug_regs_flat[11U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[12U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_debug_regs_flat[13U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_debug_regs_flat[14U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14))));
    vlSelfRef.io_debug_regs_flat[15U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[16U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_debug_regs_flat[17U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_debug_regs_flat[18U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18))));
    vlSelfRef.io_debug_regs_flat[19U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[20U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_debug_regs_flat[21U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_debug_regs_flat[22U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22))));
    vlSelfRef.io_debug_regs_flat[23U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[24U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_debug_regs_flat[25U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_debug_regs_flat[26U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26))));
    vlSelfRef.io_debug_regs_flat[27U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[28U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_debug_regs_flat[29U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_debug_regs_flat[30U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30))));
    vlSelfRef.io_debug_regs_flat[31U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30))) 
                                                 >> 0x00000020U));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16 = ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1 
        = ((0x00080000U & vlSelfRef.CpuTop__DOT__reg_inst)
            ? ((0x00040000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24)))
                : ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16))))
            : ((0x00040000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8)))
                : ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1
                            : 0U)))));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2 
        = ((0x01000000U & vlSelfRef.CpuTop__DOT__reg_inst)
            ? ((0x00800000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24)))
                : ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16))))
            : ((0x00800000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8)))
                : ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1
                            : 0U)))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19 = ((0x37U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x17U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000fU)));
    vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen = ((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_en) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_3));
    vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x00000014U)));
    vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
        = ((8U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
            ? ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                ? 0U : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                         ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                                  ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                                     < vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                                  : VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__reg_1_alu_a, 
                                                   (0x0000001fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_1_alu_b)))))
            : ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           >> (0x0000001fU & vlSelfRef.CpuTop__DOT__reg_1_alu_b))
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           << (0x0000001fU & vlSelfRef.CpuTop__DOT__reg_1_alu_b)))
                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? VL_LTS_III(32, vlSelfRef.CpuTop__DOT__reg_1_alu_a, vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           ^ vlSelfRef.CpuTop__DOT__reg_1_alu_b)))
                : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           | vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           & vlSelfRef.CpuTop__DOT__reg_1_alu_b))
                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? ((IData)(1U) + ((~ vlSelfRef.CpuTop__DOT__reg_1_alu_b) 
                                          + vlSelfRef.CpuTop__DOT__reg_1_alu_a))
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           + vlSelfRef.CpuTop__DOT__reg_1_alu_b)))));
    vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata 
        = ((0x0341U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
            ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
            : ((0x0305U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                : ((0x0342U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause
                    : ((0x0f12U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                        ? 0x018d7e72U : ((0x0f11U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                          ? 0x79737978U
                                          : ((0x0b80U 
                                              == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                              ? (IData)(
                                                        (vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
                                                         >> 0x00000020U))
                                              : ((0x0b00U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                  ? (IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64)
                                                  : 
                                                 ((0x0310U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush
                                                   : 
                                                  ((0x0300U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus
                                                    : 0U)))))))));
    vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T 
        = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_en) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0 = ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
           | (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13) 
                                                | ((0x67U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | (0x63U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28 = ((0x33U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20 = ((0x13U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)));
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp 
        = ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
            ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? 0U : ((~ vlSelfRef.CpuTop__DOT__reg_1_csr_zimm) 
                            & vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata))
                : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? (vlSelfRef.CpuTop__DOT__reg_1_csr_zimm 
                       | vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)
                    : vlSelfRef.CpuTop__DOT__reg_1_csr_zimm))
            : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? ((~ vlSelfRef.CpuTop__DOT__reg_1_csr_wdata) 
                       & vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)
                    : (vlSelfRef.CpuTop__DOT__reg_1_csr_wdata 
                       | vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata))
                : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? vlSelfRef.CpuTop__DOT__reg_1_csr_wdata
                    : 0U)));
    vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
            ? vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out
            : ((1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
                ? 0U : ((2U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
                         ? ((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)
                         : vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)));
    vlSelfRef.CpuTop__DOT__idu__DOT__stall = ((IData)(vlSelfRef.CpuTop__DOT__reg_valid) 
                                              & (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))) 
                                                 & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2))));
    vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en = 
        ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
         & (1U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1 = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)) 
                                                | ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren))));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
           & ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)) 
              & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3)) 
           & ((2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
              & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1 
        = ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3) 
               | (2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))) 
           & (3U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata = ((
                                                   (1U 
                                                    != (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))
                                                   ? 0U
                                                   : 
                                                  (((2U 
                                                     != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                    | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3))
                                                    ? 0U
                                                    : vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22) 
                                                | (3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid)) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg));
    if ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))) {
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_addr;
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_en;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.CpuTop__DOT__reg_2_mem_funct3;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = vlSelfRef.CpuTop__DOT__reg_2_wb_sel;
        vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr 
            = (3U & vlSelfRef.CpuTop__DOT__reg_2_alu_result);
        vlSelfRef.CpuTop__DOT___mem_io_out_valid = 
            ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_2) 
             & ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)) 
                & (~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen))));
    } else {
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr 
            = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr;
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en 
            = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel;
        vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr 
            = (3U & vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result);
        vlSelfRef.CpuTop__DOT___mem_io_out_valid = 
            ((1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
              ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid)
              : ((2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                 & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid)));
    }
    vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp = (0x000000ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                      ? vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                       >> 8U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                        >> 0x00000010U)
                                                        : 
                                                       (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                        >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__mem__DOT__load_half = (0x0000ffffU 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                      >> 0x00000010U)
                                                      : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31));
    if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready) {
        vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire 
            = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid;
        vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb 
            = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1)
                ? 0U : (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask));
    } else {
        vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire = 0U;
        vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb = 0U;
    }
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5 = ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen) 
                                               & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid));
    vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data 
        = ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
            ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                ? vlSelfRef.CpuTop__DOT__reg_2_alu_result
                : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result)
            : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                ? (((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                     ? (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren))
                    ? ((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                        ? ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                            ? 0U : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                     ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                        : ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                            ? ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                ? 0U : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata)
                            : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))
                    : 0U) : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                              ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                  ? vlSelfRef.CpuTop__DOT__reg_2_pc_plus4
                                  : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4)
                              : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                  ? vlSelfRef.CpuTop__DOT__reg_2_csr_rdata
                                  : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata))));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
           & ((~ (0U != (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                               >> 0x0000000cU)))) & 
              (0x73U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4 = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready));
    vlSelfRef.CpuTop__DOT___mem_io_in_ready = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
                                               & ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                                                   ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready)
                                                   : 
                                                  ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready))));
    vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen 
        = ((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_valid) 
           & (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en));
    vlSelfRef.CpuTop__DOT___exu_io_in_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___mem_io_in_ready)));
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x0000000fU)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x0000000fU))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x0000000fU))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1)))
            : 0U);
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x00000014U)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x00000014U))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x00000014U))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2)))
            : 0U);
    if ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))) {
        vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op 
            = ((3U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                             >> 0x0000000cU))) ? 9U
                : ((2U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x0000000cU))) ? 5U
                    : ((5U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                     >> 0x0000000cU)))
                        ? ((0x20U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                      >> 0x00000019U))
                            ? 8U : ((0U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000019U))
                                     ? 7U : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3)))
                        : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3))));
        vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b 
            = ((5U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                             >> 0x0000000cU))) ? (0x0000001fU 
                                                  & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                     >> 0x00000014U))
                : ((1U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x0000000cU))) ? 
                   (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                   >> 0x00000014U))
                    : vlSelfRef.CpuTop__DOT__idu__DOT__immI));
    } else {
        vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op 
            = ((1U & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                      | ((0x63U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
                         | ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28)) 
                            | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)))))
                ? 0U : ((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
                         ? ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                             ? ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                 ? 2U : 3U) : ((0x00001000U 
                                                & vlSelfRef.CpuTop__DOT__reg_inst)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)
                                                    ? 8U
                                                    : 7U)
                                                : 4U))
                         : ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                             ? ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                 ? 9U : 5U) : ((0x00001000U 
                                                & vlSelfRef.CpuTop__DOT__reg_inst)
                                                ? 6U
                                                : (1U 
                                                   & ((~ 
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                            >> 0x0000000cU)))) 
                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                         >> 0x0000001eU)))))));
        vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b 
            = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19)
                ? (0xfffff000U & vlSelfRef.CpuTop__DOT__reg_inst)
                : ((0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                    ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                    : ((0x67U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                        ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                        : ((0x63U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                            ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                            : ((3U == (0x0000007fU 
                                       & vlSelfRef.CpuTop__DOT__reg_inst))
                                ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                                : ((0x23U == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst))
                                    ? (((- (IData)(
                                                   (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | ((0x00000fe0U 
                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x00000014U)) 
                                          | (0x0000001fU 
                                             & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 7U))))
                                    : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28)
                                        ? ((5U == (7U 
                                                   & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                      >> 0x0000000cU)))
                                            ? (0x0000001fU 
                                               & vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000cU)))
                                                ? (0x0000001fU 
                                                   & vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))
                                        : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)))))));
    }
    vlSelfRef.CpuTop__DOT___reg_T_2 = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    vlSelfRef.CpuTop__DOT___exu_io_redirect_valid = 
        ((IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready) 
         & ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_1) 
            & ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception) 
               | ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr) 
                  | (IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)))));
    vlSelfRef.CpuTop__DOT__idu_io_out_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_0 = ((0x63U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & ((~ 
                                                    ((0x13U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                     | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17))) 
                                                   & ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                        != vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                             >> 0x0000000cU)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata, vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x0000000cU)))
                                                          ? 
                                                         VL_GTES_III(32, vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata, vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                               >> 0x0000000cU)))
                                                           ? 
                                                          (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                           < vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                           : (IData)(
                                                                     ((0x00007000U 
                                                                       == 
                                                                       (0x00007000U 
                                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                                      & (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                                         >= vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)))))))
                                                       : 
                                                      (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                       == vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))));
    vlSelfRef.CpuTop__DOT___idu_io_in_ready = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
    vlSelfRef.CpuTop__DOT___reg_T_1 = ((IData)(vlSelfRef.CpuTop__DOT__idu_io_out_ready) 
                                       & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                          & (IData)(vlSelfRef.CpuTop__DOT__reg_valid)));
    vlSelfRef.CpuTop__DOT__ifu_io_out_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___idu_io_in_ready)));
    vlSelfRef.CpuTop__DOT__redirect_valid = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid) 
                                             | ((~ 
                                                 ((~ (IData)(vlSelfRef.CpuTop__DOT___reg_T_1)) 
                                                  | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                                & ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | ((0x67U 
                                                       != 
                                                       (0x0000007fU 
                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0)))));
    vlSelfRef.CpuTop__DOT___reg_T = ((IData)(vlSelfRef.CpuTop__DOT__ifu_io_out_ready) 
                                     & (2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1 = ((IData)(vlSelfRef.CpuTop__DOT__redirect_valid) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1)) 
           & ((1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
              | ((2U != (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                 & (3U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)))));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_2 = (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid))));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2) 
           & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
              | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid)));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4 = (((0U 
                                                 != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg))) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_3 = ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_2));
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read_TOP(
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)
                                                                                 ? 
                                                                                (((0U 
                                                                                != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                                                | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid)
                                                                                 ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                                                                 : 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid)
                                                                                 ? vlSelfRef.CpuTop__DOT__ifu__DOT__pc
                                                                                 : 0U)))
                                                                                 : 0U), 4U, 0U, vlSelfRef.__Vfunc_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read__0__Vfuncout);
    vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data 
        = vlSelfRef.__Vfunc_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read__0__Vfuncout;
}

VL_ATTR_COLD void VCpuTop___024root____Vm_traceActivitySetAll(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop___024root___eval_stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VCpuTop___024root___stl_sequent__TOP__0(vlSelf);
        VCpuTop___024root____Vm_traceActivitySetAll(vlSelf);
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
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge CpuTop.axiSram.writeFire)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCpuTop___024root____Vm_traceActivitySetAll(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root____Vm_traceActivitySetAll\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VCpuTop___024root___ctor_var_reset(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___ctor_var_reset\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10350072731982309968ull);
    vlSelf->io_debug_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15041432708164082798ull);
    vlSelf->io_debug_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5400205057606432418ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->io_debug_regs_flat, __VscopeHash, 13513379243061101752ull);
    vlSelf->io_si_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14987329663524963101ull);
    vlSelf->io_si_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16217823695115645843ull);
    vlSelf->CpuTop__DOT___mem_io_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16858006763274430109ull);
    vlSelf->CpuTop__DOT___mem_io_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10055527492284043170ull);
    vlSelf->CpuTop__DOT___mem_io_out_bits_wb_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6122000027195582296ull);
    vlSelf->CpuTop__DOT___mem_io_out_bits_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17089561304266294235ull);
    vlSelf->CpuTop__DOT___mem_io_out_bits_wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10154520869137113901ull);
    vlSelf->CpuTop__DOT___exu_io_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6110079892890508726ull);
    vlSelf->CpuTop__DOT___exu_io_out_bits_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8261811996255755305ull);
    vlSelf->CpuTop__DOT___exu_io_redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12501500960846164842ull);
    vlSelf->CpuTop__DOT___idu_io_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673305283368553768ull);
    vlSelf->CpuTop__DOT___idu_io_out_bits_alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 922311835071257717ull);
    vlSelf->CpuTop__DOT___idu_io_out_bits_alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 51142602422844472ull);
    vlSelf->CpuTop__DOT___idu_io_out_bits_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4620559869440825452ull);
    vlSelf->CpuTop__DOT___idu_io_out_bits_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7697392276741948665ull);
    vlSelf->CpuTop__DOT__redirect_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17519730373229862346ull);
    vlSelf->CpuTop__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15808247671448732763ull);
    vlSelf->CpuTop__DOT__reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2854743182315890398ull);
    vlSelf->CpuTop__DOT__reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9400943200691365051ull);
    vlSelf->CpuTop__DOT__ifu_io_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17949421423860790726ull);
    vlSelf->CpuTop__DOT__reg_1_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9054562159893469380ull);
    vlSelf->CpuTop__DOT__reg_1_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10641015117418685779ull);
    vlSelf->CpuTop__DOT__reg_1_alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1680612214240883400ull);
    vlSelf->CpuTop__DOT__reg_1_alu_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7672826763605428826ull);
    vlSelf->CpuTop__DOT__reg_1_alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7358308141540199488ull);
    vlSelf->CpuTop__DOT__reg_1_wb_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9060844621305221151ull);
    vlSelf->CpuTop__DOT__reg_1_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10187576659524378675ull);
    vlSelf->CpuTop__DOT__reg_1_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4033610991457946028ull);
    vlSelf->CpuTop__DOT__reg_1_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15110734490890967584ull);
    vlSelf->CpuTop__DOT__reg_1_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8100080267557488153ull);
    vlSelf->CpuTop__DOT__reg_1_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16155204039221784009ull);
    vlSelf->CpuTop__DOT__reg_1_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8696239512793621298ull);
    vlSelf->CpuTop__DOT__reg_1_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11426965684338439400ull);
    vlSelf->CpuTop__DOT__reg_1_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9312333636570302730ull);
    vlSelf->CpuTop__DOT__reg_1_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11786612668268908282ull);
    vlSelf->CpuTop__DOT__reg_1_csr_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11368959180765846197ull);
    vlSelf->CpuTop__DOT__reg_1_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12763396888105026623ull);
    vlSelf->CpuTop__DOT__reg_1_csr_zimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10275889959356471636ull);
    vlSelf->CpuTop__DOT__reg_1_is_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8033241854157990739ull);
    vlSelf->CpuTop__DOT__reg_1_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11066698459484435309ull);
    vlSelf->CpuTop__DOT__reg_1_exception_cause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4914378112303620946ull);
    vlSelf->CpuTop__DOT__reg_1_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9740383031787316618ull);
    vlSelf->CpuTop__DOT__reg_valid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15031632041007399561ull);
    vlSelf->CpuTop__DOT__idu_io_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1459052100577627668ull);
    vlSelf->CpuTop__DOT__reg_2_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15208997057424915897ull);
    vlSelf->CpuTop__DOT__reg_2_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3772946660351525433ull);
    vlSelf->CpuTop__DOT__reg_2_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8200391185038287633ull);
    vlSelf->CpuTop__DOT__reg_2_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4163402504624689694ull);
    vlSelf->CpuTop__DOT__reg_2_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2046284879071609496ull);
    vlSelf->CpuTop__DOT__reg_2_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13679297723976401773ull);
    vlSelf->CpuTop__DOT__reg_2_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12558705244405523672ull);
    vlSelf->CpuTop__DOT__reg_2_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6951305256987261797ull);
    vlSelf->CpuTop__DOT__reg_2_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7135628100084419767ull);
    vlSelf->CpuTop__DOT__reg_2_wb_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8908932909575684565ull);
    vlSelf->CpuTop__DOT__reg_2_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11776454835983905332ull);
    vlSelf->CpuTop__DOT__reg_2_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15730036705015501790ull);
    vlSelf->CpuTop__DOT__reg_2_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17859710348637575885ull);
    vlSelf->CpuTop__DOT__reg_2_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9018396760837314429ull);
    vlSelf->CpuTop__DOT__reg_valid_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13910170400199451355ull);
    vlSelf->CpuTop__DOT__reg_3_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9837545801597670952ull);
    vlSelf->CpuTop__DOT__reg_3_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18106285671069548105ull);
    vlSelf->CpuTop__DOT__reg_3_wb_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5876823305726374996ull);
    vlSelf->CpuTop__DOT__reg_3_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3968388094877639718ull);
    vlSelf->CpuTop__DOT__reg_3_wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4902591092582155094ull);
    vlSelf->CpuTop__DOT__reg_valid_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16019421496348727209ull);
    vlSelf->CpuTop__DOT___reg_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4232424265161062365ull);
    vlSelf->CpuTop__DOT___reg_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5489735326640250560ull);
    vlSelf->CpuTop__DOT___reg_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638248148219577411ull);
    vlSelf->CpuTop__DOT__ifu__DOT__io_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13974683900827057800ull);
    vlSelf->CpuTop__DOT__ifu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12954478272035512755ull);
    vlSelf->CpuTop__DOT__ifu__DOT__reqPcReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13473976587196594615ull);
    vlSelf->CpuTop__DOT__ifu__DOT__outPcReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18014577208055186772ull);
    vlSelf->CpuTop__DOT__ifu__DOT__outInstReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5661385251864043408ull);
    vlSelf->CpuTop__DOT__ifu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7421476540296629962ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16439940225450109983ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936783176220962172ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3720863726034891039ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17703298524168294123ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13426580609954721384ull);
    vlSelf->CpuTop__DOT__ifu__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 813274732827466818ull);
    vlSelf->CpuTop__DOT__idu__DOT__io_reg_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2425385950184000407ull);
    vlSelf->CpuTop__DOT__idu__DOT__io_fwd_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14724473461198382100ull);
    vlSelf->CpuTop__DOT__idu__DOT___stall_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4941427899529975513ull);
    vlSelf->CpuTop__DOT__idu__DOT___stall_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7052974940715204812ull);
    vlSelf->CpuTop__DOT__idu__DOT__immI = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3293307470279830644ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1994661520459516626ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3019777457515358492ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12884021596625013927ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3944062070309153946ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17315582252777068019ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629247144899797297ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9738413408444943701ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2694247372442255435ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5354773780936270872ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10131244281636653135ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5746318525951629941ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1850955048130198939ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9478382800137741146ull);
    vlSelf->CpuTop__DOT__idu__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3121248539529528771ull);
    vlSelf->CpuTop__DOT__idu__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18257777217112994871ull);
    vlSelf->CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10 = 0;
    vlSelf->CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11 = 0;
    vlSelf->CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13 = 0;
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4670365752605197447ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8356366673877183887ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 519831360145698343ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8310682120419236392ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17002691171324002525ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14953212163252531747ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3762490333203101775ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10328967329253850424ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3042027503262050842ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4313510479258647006ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3397123078704990751ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16080585887471523618ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4682287882124012569ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4991971593625216860ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4762063201688703694ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16732501570646056030ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15099931711562577067ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11810460018222619573ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9297723605775722214ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2001511087138151758ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14106091104853875222ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12646570029268051283ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16487246145148944585ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6330666355248660588ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7904664732952084409ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15130805477440775597ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9811120213173336988ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2435691243544590239ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16995061391840565475ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16157644289703829883ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4748532548595217522ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 979254595059627450ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT__regs_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3205125948480964322ull);
    vlSelf->CpuTop__DOT__idu__DOT__regfile__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18441574713069969359ull);
    vlSelf->CpuTop__DOT__exu__DOT__io_fwd_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17998619528513351858ull);
    vlSelf->CpuTop__DOT__exu__DOT__io_fwd_wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12121214468137152415ull);
    vlSelf->CpuTop__DOT__exu__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5044073901989636380ull);
    vlSelf->CpuTop__DOT__exu__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10075513979502171860ull);
    vlSelf->CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419707755355275127ull);
    vlSelf->CpuTop__DOT__exu__DOT__alu__DOT__io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14591995166209167718ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14602001777366230709ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mstatush = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6737559055802651451ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5123378903362052181ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4045739379166483465ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8723095874629500327ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14528176377834359885ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9778431970779787203ull);
    vlSelf->CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6648430422315755928ull);
    vlSelf->CpuTop__DOT__mem__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2599158012493390730ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14167841512577704210ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 629251000951603769ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7016512237872500606ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776448613197184812ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4441149257316551124ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_wb_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13658691180001604404ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8118040738761860450ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16411804475464523459ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15862920055373808095ull);
    vlSelf->CpuTop__DOT__mem__DOT__reqReg_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7405733321156198845ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8727135475758777184ull);
    vlSelf->CpuTop__DOT__mem__DOT__req_load_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6098009548043794612ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16103761756101469895ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2026501891229313986ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8506145386449464395ull);
    vlSelf->CpuTop__DOT__mem__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15596169008356451695ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5988236385515924564ull);
    vlSelf->CpuTop__DOT__mem__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2189234501407860400ull);
    vlSelf->CpuTop__DOT__mem__DOT__load_half = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14783960502348692788ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18031065085598782826ull);
    vlSelf->CpuTop__DOT__mem__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049360502882721220ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10394805562412700694ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6619364163261239539ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8786109752907533162ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486136177313620939ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335605340969769060ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4171952236784727369ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 75505252538071191ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10640295780499961896ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13940111172308911789ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3061657642200342918ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236599534992212534ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3285102698245736106ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18181615937987565464ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4767150253714538716ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1771404082209883312ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11197729650868336671ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2466171036570813615ull);
    vlSelf->CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1 = 0;
    vlSelf->CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2 = 0;
    vlSelf->CpuTop__DOT__axiSram__DOT___paddrRead_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10009864861752779783ull);
    vlSelf->CpuTop__DOT__axiSram__DOT__rvalidReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8994004085852441292ull);
    vlSelf->CpuTop__DOT__axiSram__DOT__rdataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13991611164609104001ull);
    vlSelf->CpuTop__DOT__axiSram__DOT__writeFire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9591958043695735714ull);
    vlSelf->CpuTop__DOT__axiSram__DOT__bvalidreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16630393714814903648ull);
    vlSelf->__VdfgRegularize_he50b618e_0_0 = 0;
    vlSelf->__Vfunc_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read__0__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__Vdly__CpuTop__DOT__ifu__DOT__state = 0;
    vlSelf->__Vdly__CpuTop__DOT__axiArbiter__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CpuTop__DOT__axiSram__DOT__writeFire__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
