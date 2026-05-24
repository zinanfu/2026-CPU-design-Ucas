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
    // Locals
    CData/*0:0*/ CpuTop__DOT___GEN_11;
    CpuTop__DOT___GEN_11 = 0;
    // Body
    vlSelfRef.io_pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.CpuTop__DOT___wb_data_T_9 = ((IData)(4U) 
                                           + vlSelfRef.CpuTop__DOT__pc);
    vlSelfRef.CpuTop__DOT___GEN_21 = (((- (IData)((vlSelfRef.io_inst 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | ((0x00000800U 
                                          & (vlSelfRef.io_inst 
                                             << 4U)) 
                                         | ((0x000007e0U 
                                             & (vlSelfRef.io_inst 
                                                >> 0x00000014U)) 
                                            | (0x0000001eU 
                                               & (vlSelfRef.io_inst 
                                                  >> 7U)))));
    vlSelfRef.CpuTop__DOT___GEN_2 = ((4U == (7U & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU))) 
                                     | ((6U == (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU))) 
                                        | (7U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_7 
        = ((~ (0U != (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) 
           & (0x33U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT__immI = (((- (IData)((vlSelfRef.io_inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.io_inst 
                                      >> 0x00000014U));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6 
        = ((0x6fU == (0x0000007fU & vlSelfRef.io_inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT__casez_tmp_0 = ((0x01000000U 
                                           & vlSelfRef.io_inst)
                                           ? ((0x00800000U 
                                               & vlSelfRef.io_inst)
                                               ? ((0x00400000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_31
                                                     : vlSelfRef.CpuTop__DOT__regs_30)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_29
                                                     : vlSelfRef.CpuTop__DOT__regs_28))
                                                   : 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_27
                                                     : vlSelfRef.CpuTop__DOT__regs_26)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_25
                                                     : vlSelfRef.CpuTop__DOT__regs_24)))
                                               : ((0x00400000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_23
                                                     : vlSelfRef.CpuTop__DOT__regs_22)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_21
                                                     : vlSelfRef.CpuTop__DOT__regs_20))
                                                   : 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_19
                                                     : vlSelfRef.CpuTop__DOT__regs_18)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_17
                                                     : vlSelfRef.CpuTop__DOT__regs_16))))
                                           : ((0x00800000U 
                                               & vlSelfRef.io_inst)
                                               ? ((0x00400000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_15
                                                     : vlSelfRef.CpuTop__DOT__regs_14)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_13
                                                     : vlSelfRef.CpuTop__DOT__regs_12))
                                                   : 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_11
                                                     : vlSelfRef.CpuTop__DOT__regs_10)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_9
                                                     : vlSelfRef.CpuTop__DOT__regs_8)))
                                               : ((0x00400000U 
                                                   & vlSelfRef.io_inst)
                                                   ? 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_7
                                                     : vlSelfRef.CpuTop__DOT__regs_6)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_5
                                                     : vlSelfRef.CpuTop__DOT__regs_4))
                                                   : 
                                                  ((0x00200000U 
                                                    & vlSelfRef.io_inst)
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_3
                                                     : vlSelfRef.CpuTop__DOT__regs_2)
                                                    : 
                                                   ((0x00100000U 
                                                     & vlSelfRef.io_inst)
                                                     ? vlSelfRef.CpuTop__DOT__regs_1
                                                     : vlSelfRef.CpuTop__DOT__regs_0)))));
    CpuTop__DOT___GEN_11 = ((0x13U == (0x0000007fU 
                                       & vlSelfRef.io_inst)) 
                            | ((0x37U == (0x0000007fU 
                                          & vlSelfRef.io_inst)) 
                               | ((0x17U == (0x0000007fU 
                                             & vlSelfRef.io_inst)) 
                                  | ((0x6fU == (0x0000007fU 
                                                & vlSelfRef.io_inst)) 
                                     | ((0x67U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                        | (0x63U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst)))))));
    vlSelfRef.CpuTop__DOT__casez_tmp = ((0x00080000U 
                                         & vlSelfRef.io_inst)
                                         ? ((0x00040000U 
                                             & vlSelfRef.io_inst)
                                             ? ((0x00020000U 
                                                 & vlSelfRef.io_inst)
                                                 ? 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_31
                                                   : vlSelfRef.CpuTop__DOT__regs_30)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_29
                                                   : vlSelfRef.CpuTop__DOT__regs_28))
                                                 : 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_27
                                                   : vlSelfRef.CpuTop__DOT__regs_26)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_25
                                                   : vlSelfRef.CpuTop__DOT__regs_24)))
                                             : ((0x00020000U 
                                                 & vlSelfRef.io_inst)
                                                 ? 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_23
                                                   : vlSelfRef.CpuTop__DOT__regs_22)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_21
                                                   : vlSelfRef.CpuTop__DOT__regs_20))
                                                 : 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_19
                                                   : vlSelfRef.CpuTop__DOT__regs_18)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_17
                                                   : vlSelfRef.CpuTop__DOT__regs_16))))
                                         : ((0x00040000U 
                                             & vlSelfRef.io_inst)
                                             ? ((0x00020000U 
                                                 & vlSelfRef.io_inst)
                                                 ? 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_15
                                                   : vlSelfRef.CpuTop__DOT__regs_14)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_13
                                                   : vlSelfRef.CpuTop__DOT__regs_12))
                                                 : 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_11
                                                   : vlSelfRef.CpuTop__DOT__regs_10)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_9
                                                   : vlSelfRef.CpuTop__DOT__regs_8)))
                                             : ((0x00020000U 
                                                 & vlSelfRef.io_inst)
                                                 ? 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_7
                                                   : vlSelfRef.CpuTop__DOT__regs_6)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_5
                                                   : vlSelfRef.CpuTop__DOT__regs_4))
                                                 : 
                                                ((0x00010000U 
                                                  & vlSelfRef.io_inst)
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_3
                                                   : vlSelfRef.CpuTop__DOT__regs_2)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSelfRef.io_inst)
                                                   ? vlSelfRef.CpuTop__DOT__regs_1
                                                   : vlSelfRef.CpuTop__DOT__regs_0)))));
    vlSelfRef.CpuTop__DOT___GEN_16 = ((0x37U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | ((0x17U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         | (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6)));
    vlSelfRef.CpuTop__DOT__rs2_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x00000014U)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp_0
                                        : 0U);
    vlSelfRef.io_mem_ren = ((~ (IData)(CpuTop__DOT___GEN_11)) 
                            & (3U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_14 = ((IData)(CpuTop__DOT___GEN_11) 
                                      | (3U == (0x0000007fU 
                                                & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT__rs1_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x0000000fU)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp
                                        : 0U);
    vlSelfRef.CpuTop__DOT___GEN_17 = (((0x13U == (0x0000007fU 
                                                  & vlSelfRef.io_inst))
                                        ? ((~ (0U != 
                                               (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))) 
                                           | (IData)(vlSelfRef.CpuTop__DOT___GEN_2))
                                        : ((IData)(vlSelfRef.CpuTop__DOT___GEN_16) 
                                           | ((0x63U 
                                               != (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                              & ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                                 | ((0x23U 
                                                     != 
                                                     (0x0000007fU 
                                                      & vlSelfRef.io_inst)) 
                                                    & (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_7)))))) 
                                      & (0U != (0x0000001fU 
                                                & (vlSelfRef.io_inst 
                                                   >> 7U))));
    vlSelfRef.io_mem_wen = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_14)) 
                            & (0x23U == (0x0000007fU 
                                         & vlSelfRef.io_inst)));
    vlSelfRef.io_mem_wdata = ((1U & ((~ ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         & (0U != (0x0000001fU 
                                                   & (vlSelfRef.io_inst 
                                                      >> 0x00000014U))))) 
                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_14)))
                               ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp_0);
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_8 
        = ((0x23U != (0x0000007fU & vlSelfRef.io_inst)) 
           | (IData)(vlSelfRef.CpuTop__DOT___GEN_14));
    vlSelfRef.CpuTop__DOT___GEN_20 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    vlSelfRef.CpuTop__DOT___next_pc_T_4 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                           + vlSelfRef.CpuTop__DOT__immI);
    vlSelfRef.CpuTop__DOT___GEN_18 = (1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_17)) 
                                            & ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                                               & ((0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.io_inst))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_2)) 
                                                   & (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU))))
                                                   : 
                                                  ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_16)) 
                                                   & ((0x63U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.io_inst))
                                                       ? 
                                                      ((~ 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU))) 
                                                         | ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.io_inst 
                                                                 >> 0x0000000cU))) 
                                                            | ((5U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.io_inst 
                                                                    >> 0x0000000cU))) 
                                                               | ((4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.io_inst 
                                                                       >> 0x0000000cU))) 
                                                                  | (1U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.io_inst 
                                                                         >> 0x0000000cU)))))))) 
                                                       & (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU))))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.io_inst))
                                                        ? 
                                                       (~ 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU))) 
                                                         | ((4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.io_inst 
                                                                 >> 0x0000000cU))) 
                                                            | ((~ 
                                                                (0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelfRef.io_inst 
                                                                     >> 0x0000000cU)))) 
                                                               | ((1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.io_inst 
                                                                       >> 0x0000000cU))) 
                                                                  | (2U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.io_inst 
                                                                         >> 0x0000000cU))))))))
                                                        : 
                                                       ((0x23U 
                                                         != 
                                                         (0x0000007fU 
                                                          & vlSelfRef.io_inst)) 
                                                        & (IData)(
                                                                  (0x00000033U 
                                                                   != 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.io_inst)))))))))));
    if (vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_8) {
        vlSelfRef.io_mem_wmask = 0U;
        vlSelfRef.CpuTop__DOT__io_mem_addr_0 = 0U;
    } else {
        vlSelfRef.io_mem_wmask = ((2U == (7U & (vlSelfRef.io_inst 
                                                >> 0x0000000cU)))
                                   ? 0x0fU : ((1U == 
                                               (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))
                                               ? 3U
                                               : (1U 
                                                  & (~ 
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU)))))));
        vlSelfRef.CpuTop__DOT__io_mem_addr_0 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.io_inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000fe0U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001fU 
                                                         & (vlSelfRef.io_inst 
                                                            >> 7U)))));
    }
    vlSelfRef.io_mem_addr = vlSelfRef.CpuTop__DOT__io_mem_addr_0;
    vlSelfRef.CpuTop__DOT__casez_tmp_1 = (0x000000ffU 
                                          & ((0U == 
                                              (3U & vlSelfRef.CpuTop__DOT__io_mem_addr_0))
                                              ? vlSelfRef.io_mem_rdata
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.CpuTop__DOT__io_mem_addr_0))
                                                  ? 
                                                 (vlSelfRef.io_mem_rdata 
                                                  >> 8U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.CpuTop__DOT__io_mem_addr_0))
                                                   ? 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000010U)
                                                   : 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__byte_1 = (0x0000ffffU & 
                                     ((2U == (3U & vlSelfRef.CpuTop__DOT__io_mem_addr_0))
                                       ? (vlSelfRef.io_mem_rdata 
                                          >> 0x00000010U)
                                       : ((0U == (3U 
                                                  & vlSelfRef.CpuTop__DOT__io_mem_addr_0))
                                           ? vlSelfRef.io_mem_rdata
                                           : 0U)));
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                       ? ((4U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              ^ vlSelfRef.CpuTop__DOT__immI)
                                           : ((6U == 
                                               (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))
                                               ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                                  | vlSelfRef.CpuTop__DOT__immI)
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.io_inst 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  (vlSelfRef.CpuTop__DOT__rs1_data 
                                                   & vlSelfRef.CpuTop__DOT__immI)
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelfRef.io_inst 
                                                        >> 0x0000000cU)))
                                                    ? 0U
                                                    : vlSelfRef.CpuTop__DOT___next_pc_T_4))))
                                       : ((0x37U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (0xfffff000U 
                                              & vlSelfRef.io_inst)
                                           : ((0x17U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                               ? (vlSelfRef.CpuTop__DOT__pc 
                                                  + 
                                                  (0xfffff000U 
                                                   & vlSelfRef.io_inst))
                                               : ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.CpuTop__DOT__pc)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.io_inst))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.io_inst))
                                                     ? 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU)))
                                                      ? (IData)(vlSelfRef.CpuTop__DOT__byte_1)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.io_inst 
                                                           >> 0x0000000cU)))
                                                       ? (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.io_inst 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.CpuTop__DOT__byte_1) 
                                                                        >> 7U)))) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.CpuTop__DOT__byte_1))
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.io_inst 
                                                             >> 0x0000000cU)))
                                                         ? 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU)))
                                                          ? vlSelfRef.io_mem_rdata
                                                          : 0U)
                                                         : 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1) 
                                                                         >> 7U)))) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1))))))
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_7)) 
                                                         | (0x23U 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.io_inst))))
                                                      ? 0U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (vlSelfRef.io_inst 
                                                        >> 0x00000019U))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__rs1_data 
                                                       - vlSelfRef.CpuTop__DOT__rs2_data)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSelfRef.io_inst 
                                                         >> 0x00000019U))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT__rs1_data 
                                                        + vlSelfRef.CpuTop__DOT__rs2_data)
                                                        : 0U)))))))));
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

bool VCpuTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VCpuTop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->io_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16668489171332404422ull);
    vlSelf->io_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13491569557311850474ull);
    vlSelf->io_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8569839728366482751ull);
    vlSelf->io_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16199432705588722490ull);
    vlSelf->io_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10204812265844307066ull);
    vlSelf->io_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12174778581957162976ull);
    vlSelf->io_mem_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13654371794600967819ull);
    vlSelf->io_mem_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2104534022309644727ull);
    vlSelf->CpuTop__DOT__io_mem_addr_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13039645937679571250ull);
    vlSelf->CpuTop__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4349561516140292754ull);
    vlSelf->CpuTop__DOT__regs_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7969662024450088941ull);
    vlSelf->CpuTop__DOT__regs_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13231715935778336167ull);
    vlSelf->CpuTop__DOT__regs_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8664748906158390821ull);
    vlSelf->CpuTop__DOT__regs_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5440118824839933745ull);
    vlSelf->CpuTop__DOT__regs_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 873151795220061567ull);
    vlSelf->CpuTop__DOT__regs_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4230652021707189979ull);
    vlSelf->CpuTop__DOT__regs_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15851348957476762606ull);
    vlSelf->CpuTop__DOT__regs_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6923270983796633508ull);
    vlSelf->CpuTop__DOT__regs_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11992140184715619184ull);
    vlSelf->CpuTop__DOT__regs_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9101610202553216899ull);
    vlSelf->CpuTop__DOT__regs_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9103559474649535907ull);
    vlSelf->CpuTop__DOT__regs_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8835492278327594139ull);
    vlSelf->CpuTop__DOT__regs_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 102192189114171087ull);
    vlSelf->CpuTop__DOT__regs_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16896619533467855195ull);
    vlSelf->CpuTop__DOT__regs_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8021211746321389538ull);
    vlSelf->CpuTop__DOT__regs_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16769108980266408918ull);
    vlSelf->CpuTop__DOT__regs_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3505350800732217353ull);
    vlSelf->CpuTop__DOT__regs_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 467052570357864464ull);
    vlSelf->CpuTop__DOT__regs_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 563802841471869092ull);
    vlSelf->CpuTop__DOT__regs_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12551628812955942747ull);
    vlSelf->CpuTop__DOT__regs_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14269589379901521276ull);
    vlSelf->CpuTop__DOT__regs_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16002870943463984751ull);
    vlSelf->CpuTop__DOT__regs_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7206207169762817851ull);
    vlSelf->CpuTop__DOT__regs_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4730125675928149816ull);
    vlSelf->CpuTop__DOT__regs_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6043672121089403577ull);
    vlSelf->CpuTop__DOT__regs_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16956893553953191037ull);
    vlSelf->CpuTop__DOT__regs_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8653746285732338465ull);
    vlSelf->CpuTop__DOT__regs_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10708122882218294543ull);
    vlSelf->CpuTop__DOT__regs_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2525632212175424200ull);
    vlSelf->CpuTop__DOT__regs_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6466928073250648964ull);
    vlSelf->CpuTop__DOT__regs_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12212513516983130368ull);
    vlSelf->CpuTop__DOT__regs_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5906898329143361403ull);
    vlSelf->CpuTop__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9610465508193273162ull);
    vlSelf->CpuTop__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7130891848989918424ull);
    vlSelf->CpuTop__DOT__casez_tmp_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4940401964705513062ull);
    vlSelf->CpuTop__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9150036124230812774ull);
    vlSelf->CpuTop__DOT__casez_tmp_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9870242713162288522ull);
    vlSelf->CpuTop__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10124654853587170331ull);
    vlSelf->CpuTop__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289409696604472291ull);
    vlSelf->CpuTop__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3375069104006225041ull);
    vlSelf->CpuTop__DOT__illegal_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11692240810425205617ull);
    vlSelf->CpuTop__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967349244393025002ull);
    vlSelf->CpuTop__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16057825239591963678ull);
    vlSelf->CpuTop__DOT__immI = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6821708986719847619ull);
    vlSelf->CpuTop__DOT___wb_data_T_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 466754929332844418ull);
    vlSelf->CpuTop__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1012863249984515187ull);
    vlSelf->CpuTop__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8412272424419104183ull);
    vlSelf->CpuTop__DOT__byte_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10385420781471972928ull);
    vlSelf->CpuTop__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1121762684598443505ull);
    vlSelf->CpuTop__DOT___next_pc_T_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1240177251555225014ull);
    vlSelf->CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6 = 0;
    vlSelf->CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_7 = 0;
    vlSelf->CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_8 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
