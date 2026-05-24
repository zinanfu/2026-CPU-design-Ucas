// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

void VCpuTop___024root___eval_triggers_vec__ico(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_triggers_vec__ico\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VCpuTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_anySet__ico\n"); );
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

void VCpuTop___024root___ico_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___ico_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.CpuTop__DOT___GEN_15 = (((- (IData)((vlSelfRef.io_inst 
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
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5 
        = ((0x6fU == (0x0000007fU & vlSelfRef.io_inst)) 
           | (0x67U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6 
        = ((~ (0U != (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) 
           & (0x33U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_8 = ((0x13U == (0x0000007fU 
                                                & vlSelfRef.io_inst)) 
                                     | ((0x37U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                        | ((0x17U == 
                                            (0x0000007fU 
                                             & vlSelfRef.io_inst)) 
                                           | ((0x6fU 
                                               == (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                              | ((0x67U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                                 | (0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.io_inst)))))));
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
    vlSelfRef.CpuTop__DOT___GEN_13 = (((0x13U == (0x0000007fU 
                                                  & vlSelfRef.io_inst))
                                        ? (~ (0U != 
                                              (7U & 
                                               (vlSelfRef.io_inst 
                                                >> 0x0000000cU))))
                                        : (((0x37U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                            | ((0x17U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                               | (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5))) 
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
                                                    & (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6)))))) 
                                      & (0U != (0x0000001fU 
                                                & (vlSelfRef.io_inst 
                                                   >> 7U))));
    vlSelfRef.io_mem_ren = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_8)) 
                            & (3U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_10 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_8) 
                                      | (3U == (0x0000007fU 
                                                & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT__rs2_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x00000014U)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp_0
                                        : 0U);
    vlSelfRef.CpuTop__DOT__rs1_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x0000000fU)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp
                                        : 0U);
    vlSelfRef.io_mem_wen = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_10)) 
                            & (0x23U == (0x0000007fU 
                                         & vlSelfRef.io_inst)));
    vlSelfRef.io_mem_wdata = ((1U & ((~ ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         & (0U != (0x0000001fU 
                                                   & (vlSelfRef.io_inst 
                                                      >> 0x00000014U))))) 
                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_10)))
                               ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp_0);
    vlSelfRef.CpuTop__DOT___GEN_14 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    vlSelfRef.CpuTop__DOT___next_pc_T_4 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                           + (((- (IData)(
                                                          (vlSelfRef.io_inst 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.io_inst 
                                                 >> 0x00000014U)));
    vlSelfRef.io_mem_addr = ((IData)(vlSelfRef.CpuTop__DOT___GEN_8)
                              ? 0U : ((3U == (0x0000007fU 
                                              & vlSelfRef.io_inst))
                                       ? vlSelfRef.CpuTop__DOT___next_pc_T_4
                                       : ((0x23U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              + (((- (IData)(
                                                             (vlSelfRef.io_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.io_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.io_inst 
                                                          >> 7U)))))
                                           : 0U)));
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                       ? ((0U != (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))
                                           ? 0U : vlSelfRef.CpuTop__DOT___next_pc_T_4)
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
                                               : ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5)
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
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU)))
                                                      ? vlSelfRef.io_mem_rdata
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6)) 
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

void VCpuTop___024root___eval_ico(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_ico\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VCpuTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VCpuTop___024root___eval_phase__ico(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__ico\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VCpuTop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCpuTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VCpuTop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VCpuTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

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
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_13)) 
                             & ((0x13U == (0x0000007fU 
                                           & vlSelfRef.io_inst))
                                 ? (0U != (7U & (vlSelfRef.io_inst 
                                                 >> 0x0cU)))
                                 : ((~ ((0x37U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)) 
                                        | ((0x17U == 
                                            (0x0000007fU 
                                             & vlSelfRef.io_inst)) 
                                           | (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5)))) 
                                    & ((0x63U == (0x0000007fU 
                                                  & vlSelfRef.io_inst))
                                        ? ((1U != (7U 
                                                   & (vlSelfRef.io_inst 
                                                      >> 0x0000000cU))) 
                                           & (0U != 
                                              (7U & 
                                               (vlSelfRef.io_inst 
                                                >> 0x0cU))))
                                        : ((~ ((3U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                               | (0x23U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst)))) 
                                           & ((~ (0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst))) 
                                              | (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0cU))))))))) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"illegal inst = 0x%x pc = 0x%x\n",0,
                      32,vlSelfRef.io_inst,32,vlSelfRef.CpuTop__DOT__pc);
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__pc = 0x80000000U;
        vlSelfRef.CpuTop__DOT__regs_31 = 0U;
        vlSelfRef.CpuTop__DOT__regs_30 = 0U;
        vlSelfRef.CpuTop__DOT__regs_29 = 0U;
        vlSelfRef.CpuTop__DOT__regs_28 = 0U;
        vlSelfRef.CpuTop__DOT__regs_27 = 0U;
        vlSelfRef.CpuTop__DOT__regs_7 = 0U;
        vlSelfRef.CpuTop__DOT__regs_10 = 0U;
        vlSelfRef.CpuTop__DOT__regs_9 = 0U;
        vlSelfRef.CpuTop__DOT__regs_5 = 0U;
        vlSelfRef.CpuTop__DOT__regs_8 = 0U;
        vlSelfRef.CpuTop__DOT__regs_3 = 0U;
        vlSelfRef.CpuTop__DOT__regs_6 = 0U;
        vlSelfRef.CpuTop__DOT__regs_1 = 0U;
        vlSelfRef.CpuTop__DOT__regs_4 = 0U;
        vlSelfRef.CpuTop__DOT__regs_2 = 0U;
        vlSelfRef.CpuTop__DOT__regs_0 = 0U;
        vlSelfRef.CpuTop__DOT__regs_11 = 0U;
        vlSelfRef.CpuTop__DOT__regs_12 = 0U;
        vlSelfRef.CpuTop__DOT__regs_13 = 0U;
        vlSelfRef.CpuTop__DOT__regs_14 = 0U;
        vlSelfRef.CpuTop__DOT__regs_15 = 0U;
        vlSelfRef.CpuTop__DOT__regs_16 = 0U;
        vlSelfRef.CpuTop__DOT__regs_17 = 0U;
        vlSelfRef.CpuTop__DOT__regs_18 = 0U;
        vlSelfRef.CpuTop__DOT__regs_19 = 0U;
        vlSelfRef.CpuTop__DOT__regs_20 = 0U;
        vlSelfRef.CpuTop__DOT__regs_21 = 0U;
        vlSelfRef.CpuTop__DOT__regs_22 = 0U;
        vlSelfRef.CpuTop__DOT__regs_23 = 0U;
        vlSelfRef.CpuTop__DOT__regs_24 = 0U;
        vlSelfRef.CpuTop__DOT__regs_25 = 0U;
        vlSelfRef.CpuTop__DOT__regs_26 = 0U;
    } else {
        vlSelfRef.CpuTop__DOT__pc = ((((0x13U == (0x0000007fU 
                                                  & vlSelfRef.io_inst)) 
                                       | (0x37U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst))) 
                                      | (0x17U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)))
                                      ? vlSelfRef.CpuTop__DOT___wb_data_T_6
                                      : ((0x6fU == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst))
                                          ? (vlSelfRef.CpuTop__DOT__pc 
                                             + (((- (IData)(
                                                            (vlSelfRef.io_inst 
                                                             >> 0x1fU))) 
                                                 << 0x00000014U) 
                                                | ((((0x000001feU 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.io_inst 
                                                           >> 0x14U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x00000014U)))))
                                          : ((0x67U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.io_inst))
                                              ? (0xfffffffeU 
                                                 & vlSelfRef.CpuTop__DOT___next_pc_T_4)
                                              : ((0x63U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                                  ? 
                                                 ((IData)(
                                                          ((0x00001000U 
                                                            != 
                                                            (0x00007000U 
                                                             & vlSelfRef.io_inst)) 
                                                           | (IData)(vlSelfRef.CpuTop__DOT___GEN_14)))
                                                   ? 
                                                  ((1U 
                                                    & ((0U 
                                                        != 
                                                        (0x00007000U 
                                                         & vlSelfRef.io_inst)) 
                                                       | (~ (IData)(vlSelfRef.CpuTop__DOT___GEN_14))))
                                                    ? vlSelfRef.CpuTop__DOT___wb_data_T_6
                                                    : 
                                                   (vlSelfRef.CpuTop__DOT__pc 
                                                    + vlSelfRef.CpuTop__DOT___GEN_15))
                                                   : 
                                                  (vlSelfRef.CpuTop__DOT__pc 
                                                   + vlSelfRef.CpuTop__DOT___GEN_15))
                                                  : vlSelfRef.CpuTop__DOT___wb_data_T_6))));
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000f80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_31 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000f00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_30 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000e80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_29 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000e00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_28 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000d80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_27 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000380U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_7 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000500U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_10 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000480U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_9 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000280U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_5 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000400U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_8 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000180U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_3 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000300U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_6 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000080U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_1 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000200U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_4 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000100U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_2 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        vlSelfRef.CpuTop__DOT__regs_0 = (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
                                          & (~ (0U 
                                                != 
                                                (0x0000001fU 
                                                 & (vlSelfRef.io_inst 
                                                    >> 7U)))))
                                          ? vlSelfRef.CpuTop__DOT__wb_data
                                          : 0U);
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000580U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_11 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000600U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_12 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000680U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_13 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000700U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_14 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000780U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_15 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000800U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_16 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000880U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_17 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000900U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_18 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000980U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_19 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000a00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_20 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000a80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_21 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000b00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_22 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000b80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_23 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000c00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_24 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000c80U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_25 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_13) 
             & (0x00000d00U == (0x00000f80U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_26 = vlSelfRef.CpuTop__DOT__wb_data;
        }
    }
    vlSelfRef.io_pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.CpuTop__DOT___wb_data_T_6 = ((IData)(4U) 
                                           + vlSelfRef.CpuTop__DOT__pc);
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
    vlSelfRef.io_mem_wdata = ((1U & ((~ ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         & (0U != (0x0000001fU 
                                                   & (vlSelfRef.io_inst 
                                                      >> 0x00000014U))))) 
                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_10)))
                               ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp_0);
    vlSelfRef.CpuTop__DOT__rs2_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x00000014U)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp_0
                                        : 0U);
    vlSelfRef.CpuTop__DOT__rs1_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x0000000fU)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp
                                        : 0U);
    vlSelfRef.CpuTop__DOT___GEN_14 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    vlSelfRef.CpuTop__DOT___next_pc_T_4 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                           + (((- (IData)(
                                                          (vlSelfRef.io_inst 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.io_inst 
                                                 >> 0x00000014U)));
    vlSelfRef.io_mem_addr = ((IData)(vlSelfRef.CpuTop__DOT___GEN_8)
                              ? 0U : ((3U == (0x0000007fU 
                                              & vlSelfRef.io_inst))
                                       ? vlSelfRef.CpuTop__DOT___next_pc_T_4
                                       : ((0x23U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              + (((- (IData)(
                                                             (vlSelfRef.io_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.io_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.io_inst 
                                                          >> 7U)))))
                                           : 0U)));
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                       ? ((0U != (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))
                                           ? 0U : vlSelfRef.CpuTop__DOT___next_pc_T_4)
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
                                               : ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5)
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
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU)))
                                                      ? vlSelfRef.io_mem_rdata
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6)) 
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

void VCpuTop___024root___eval_nba(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_nba\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCpuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VCpuTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("build/CpuTop.sv", 55, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VCpuTop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
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
