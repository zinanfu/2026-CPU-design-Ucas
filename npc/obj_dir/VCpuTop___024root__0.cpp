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
    // Locals
    CData/*0:0*/ CpuTop__DOT___GEN_8;
    CpuTop__DOT___GEN_8 = 0;
    CData/*0:0*/ CpuTop__DOT___GEN_9;
    CpuTop__DOT___GEN_9 = 0;
    IData/*31:0*/ CpuTop__DOT___load_addr_T;
    CpuTop__DOT___load_addr_T = 0;
    IData/*31:0*/ CpuTop__DOT___store_addr_T;
    CpuTop__DOT___store_addr_T = 0;
    CData/*0:0*/ CpuTop__DOT___GEN_18;
    CpuTop__DOT___GEN_18 = 0;
    CData/*0:0*/ CpuTop__DOT___GEN_31;
    CpuTop__DOT___GEN_31 = 0;
    IData/*31:0*/ CpuTop__DOT___GEN_36;
    CpuTop__DOT___GEN_36 = 0;
    CData/*0:0*/ CpuTop__DOT___GEN_38;
    CpuTop__DOT___GEN_38 = 0;
    IData/*31:0*/ CpuTop__DOT___GEN_41;
    CpuTop__DOT___GEN_41 = 0;
    // Body
    vlSelfRef.io_debug_inst = vlSelfRef.io_inst;
    vlSelfRef.CpuTop__DOT___GEN_40 = (((- (IData)((vlSelfRef.io_inst 
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
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9 
        = (IData)(((0x00000073U == (0xfe00007fU & vlSelfRef.io_inst)) 
                   & ((~ (0U != (7U & (vlSelfRef.io_inst 
                                       >> 0x0000000cU)))) 
                      & ((~ (0U != (0x0000000fU & (vlSelfRef.io_inst 
                                                   >> 0x00000014U)))) 
                         | (1U == (0x0000000fU & (vlSelfRef.io_inst 
                                                  >> 0x00000014U)))))));
    CpuTop__DOT___GEN_8 = ((3U == (7U & (vlSelfRef.io_inst 
                                         >> 0x0000000cU))) 
                           | ((2U == (7U & (vlSelfRef.io_inst 
                                            >> 0x0000000cU))) 
                              | ((5U == (7U & (vlSelfRef.io_inst 
                                               >> 0x0000000cU))) 
                                 | ((1U == (7U & (vlSelfRef.io_inst 
                                                  >> 0x0000000cU))) 
                                    | ((4U == (7U & 
                                               (vlSelfRef.io_inst 
                                                >> 0x0000000cU))) 
                                       | ((6U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU))) 
                                          | (7U == 
                                             (7U & 
                                              (vlSelfRef.io_inst 
                                               >> 0x0000000cU)))))))));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5 
        = ((7U == (7U & (vlSelfRef.io_inst >> 0x0000000cU))) 
           | (6U == (7U & (vlSelfRef.io_inst >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT___GEN_25 = ((0x37U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | (0x17U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_24 = ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | (0x67U == (0x0000007fU 
                                                   & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_28 = ((3U == (0x0000007fU 
                                              & vlSelfRef.io_inst)) 
                                      | ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         | (0x33U == 
                                            (0x0000007fU 
                                             & vlSelfRef.io_inst))));
    vlSelfRef.CpuTop__DOT___GEN_32 = ((0x73U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      & (0U != (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT___GEN_23 = ((0U == (vlSelfRef.io_inst 
                                              >> 0x00000019U)) 
                                      | (0x20U == (vlSelfRef.io_inst 
                                                   >> 0x00000019U)));
    vlSelfRef.CpuTop__DOT__immI = (((- (IData)((vlSelfRef.io_inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.io_inst 
                                      >> 0x00000014U));
    vlSelfRef.CpuTop__DOT__casez_tmp_0 = ((0x00800000U 
                                           & vlSelfRef.io_inst)
                                           ? ((0x00400000U 
                                               & vlSelfRef.io_inst)
                                               ? ((0x00200000U 
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
                                               : ((0x00200000U 
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
                                               ? ((0x00200000U 
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
                                               : ((0x00200000U 
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
                                                    : vlSelfRef.CpuTop__DOT__regs_0))));
    vlSelfRef.CpuTop__DOT___GEN_16 = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | ((0x37U == 
                                          (0x0000007fU 
                                           & vlSelfRef.io_inst)) 
                                         | ((0x17U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                            | ((0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.io_inst)) 
                                                  | (0x63U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.io_inst)))))));
    vlSelfRef.CpuTop__DOT___GEN_22 = ((0x63U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | ((3U == (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                         | (0x23U == 
                                            (0x0000007fU 
                                             & vlSelfRef.io_inst))));
    vlSelfRef.CpuTop__DOT__casez_tmp = ((0x00040000U 
                                         & vlSelfRef.io_inst)
                                         ? ((0x00020000U 
                                             & vlSelfRef.io_inst)
                                             ? ((0x00010000U 
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
                                             : ((0x00010000U 
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
                                             ? ((0x00010000U 
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
                                             : ((0x00010000U 
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
                                                  : vlSelfRef.CpuTop__DOT__regs_0))));
    CpuTop__DOT___GEN_38 = (1U & ((~ (0U != (7U & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))) 
                                  | (IData)(CpuTop__DOT___GEN_8)));
    CpuTop__DOT___GEN_9 = ((~ (IData)(CpuTop__DOT___GEN_8)) 
                           & (0U != (7U & (vlSelfRef.io_inst 
                                           >> 0x0000000cU))));
    CpuTop__DOT___GEN_31 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_25) 
                            | (IData)(vlSelfRef.CpuTop__DOT___GEN_24));
    vlSelfRef.CpuTop__DOT__rs2_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x00000014U)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp_0
                                        : 0U);
    vlSelfRef.io_mem_ren = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_16)) 
                            & (3U == (0x0000007fU & vlSelfRef.io_inst)));
    CpuTop__DOT___GEN_18 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_16) 
                            | (3U == (0x0000007fU & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_29 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_16) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_28));
    vlSelfRef.CpuTop__DOT__rs1_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.io_inst 
                                                  >> 0x0000000fU)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp
                                        : 0U);
    vlSelfRef.CpuTop__DOT___GEN_42 = (((0x13U == (0x0000007fU 
                                                  & vlSelfRef.io_inst))
                                        ? (IData)(CpuTop__DOT___GEN_38)
                                        : ((IData)(CpuTop__DOT___GEN_31) 
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
                                                    & ((0x33U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.io_inst))
                                                        ? 
                                                       ((IData)(vlSelfRef.CpuTop__DOT___GEN_23) 
                                                        & (IData)(CpuTop__DOT___GEN_38))
                                                        : (IData)(vlSelfRef.CpuTop__DOT___GEN_32))))))) 
                                      & (0U != (0x0000001fU 
                                                & (vlSelfRef.io_inst 
                                                   >> 7U))));
    vlSelfRef.io_mem_wen = ((~ (IData)(CpuTop__DOT___GEN_18)) 
                            & (0x23U == (0x0000007fU 
                                         & vlSelfRef.io_inst)));
    vlSelfRef.CpuTop__DOT___GEN_20 = ((0x23U != (0x0000007fU 
                                                 & vlSelfRef.io_inst)) 
                                      | (IData)(CpuTop__DOT___GEN_18));
    vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_29)) 
           & (IData)(vlSelfRef.CpuTop__DOT___GEN_32));
    vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_29)) 
           & (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.CpuTop__DOT___GEN_32) 
                                                     & (0U 
                                                        != 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.io_inst 
                                                            >> 0x0000000fU))))) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT___GEN_29)));
    vlSelfRef.CpuTop__DOT___GEN_33 = (1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_32)) 
                                            | (IData)(vlSelfRef.CpuTop__DOT___GEN_29)));
    vlSelfRef.CpuTop__DOT___GEN_39 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    CpuTop__DOT___store_addr_T = (vlSelfRef.CpuTop__DOT__rs1_data 
                                  + (((- (IData)((vlSelfRef.io_inst 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSelfRef.io_inst 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.io_inst 
                                              >> 7U)))));
    CpuTop__DOT___load_addr_T = (vlSelfRef.CpuTop__DOT__rs1_data 
                                 + vlSelfRef.CpuTop__DOT__immI);
    if ((0x13U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = vlSelfRef.CpuTop__DOT__immI;
        vlSelfRef.CpuTop__DOT__illegal = (1U & (IData)(CpuTop__DOT___GEN_9));
    } else {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = ((0x37U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.io_inst))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.io_inst)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.io_inst))
                                                     ? vlSelfRef.CpuTop__DOT__immI
                                                     : 
                                                    ((1U 
                                                      & ((~ 
                                                          ((0x33U 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.io_inst)) 
                                                           & (0U 
                                                              != 
                                                              (0x0000001fU 
                                                               & (vlSelfRef.io_inst 
                                                                  >> 0x00000014U))))) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_22)))
                                                      ? 0U
                                                      : vlSelfRef.CpuTop__DOT__casez_tmp_0)))));
        vlSelfRef.CpuTop__DOT__illegal = (1U & ((~ (IData)(CpuTop__DOT___GEN_31)) 
                                                & ((0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.io_inst))
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5) 
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
                                                                   >> 0x0000000cU))))))) 
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
                                                     & ((0x33U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.io_inst))
                                                         ? 
                                                        ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_23)) 
                                                         | (IData)(CpuTop__DOT___GEN_9))
                                                         : 
                                                        ((0x73U 
                                                          != 
                                                          (0x0000007fU 
                                                           & vlSelfRef.io_inst)) 
                                                         | ((~ 
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelfRef.io_inst 
                                                                  >> 0x0000000cU)))) 
                                                            & ((0x18U 
                                                                != 
                                                                (vlSelfRef.io_inst 
                                                                 >> 0x00000019U)) 
                                                               & ((0U 
                                                                   != 
                                                                   (vlSelfRef.io_inst 
                                                                    >> 0x00000019U)) 
                                                                  | ((1U 
                                                                      != 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.io_inst 
                                                                          >> 0x00000014U))) 
                                                                     & (0U 
                                                                        != 
                                                                        (0x0000000fU 
                                                                         & (vlSelfRef.io_inst 
                                                                            >> 0x00000014U))))))))))))));
    }
    vlSelfRef.io_debug_valid = (1U & (~ (IData)(vlSelfRef.CpuTop__DOT__illegal)));
    vlSelfRef.CpuTop__DOT___GEN_34 = ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                                      & (IData)(vlSelfRef.CpuTop__DOT__illegal));
    vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
          ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp);
    if (vlSelfRef.CpuTop__DOT___GEN_33) {
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op = 0U;
        vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm = 0U;
        vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr = 0U;
    } else {
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op 
            = (7U & (vlSelfRef.io_inst >> 0x0000000cU));
        vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm = 
            (0xfffff000U & vlSelfRef.io_inst);
        vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr 
            = (vlSelfRef.io_inst >> 0x00000014U);
    }
    if (vlSelfRef.CpuTop__DOT___GEN_20) {
        vlSelfRef.io_mem_wmask = 0U;
        vlSelfRef.io_mem_wdata = 0U;
    } else if ((2U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = 0x0000000fU;
        vlSelfRef.io_mem_wdata = vlSelfRef.CpuTop__DOT__rs2_data;
    } else if ((1U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = (0x0000000fU & ((2U 
                                                  & CpuTop__DOT___store_addr_T)
                                                  ? 0x0cU
                                                  : 3U));
        vlSelfRef.io_mem_wdata = (vlSelfRef.CpuTop__DOT__rs2_data 
                                  << (0x00000010U & 
                                      (CpuTop__DOT___store_addr_T 
                                       << 3U)));
    } else if ((0U != (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = (0x0000000fU & 0U);
        vlSelfRef.io_mem_wdata = 0U;
    } else {
        vlSelfRef.io_mem_wmask = (0x0000000fU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & CpuTop__DOT___store_addr_T)));
        vlSelfRef.io_mem_wdata = (vlSelfRef.CpuTop__DOT__rs2_data 
                                  << (0x00000018U & 
                                      (CpuTop__DOT___store_addr_T 
                                       << 3U)));
    }
    vlSelfRef.io_mem_addr = ((IData)(vlSelfRef.CpuTop__DOT___GEN_16)
                              ? 0U : ((3U == (0x0000007fU 
                                              & vlSelfRef.io_inst))
                                       ? (0xfffffffcU 
                                          & CpuTop__DOT___load_addr_T)
                                       : ((0x23U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (0xfffffffcU 
                                              & CpuTop__DOT___store_addr_T)
                                           : 0U)));
    vlSelfRef.CpuTop__DOT__casez_tmp_1 = (0x000000ffU 
                                          & ((0U == 
                                              (3U & CpuTop__DOT___load_addr_T))
                                              ? vlSelfRef.io_mem_rdata
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & CpuTop__DOT___load_addr_T))
                                                  ? 
                                                 (vlSelfRef.io_mem_rdata 
                                                  >> 8U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & CpuTop__DOT___load_addr_T))
                                                   ? 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000010U)
                                                   : 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__byte_1 = (0x0000ffffU & 
                                     ((2U == (3U & CpuTop__DOT___load_addr_T))
                                       ? (vlSelfRef.io_mem_rdata 
                                          >> 0x00000010U)
                                       : ((0U == (3U 
                                                  & CpuTop__DOT___load_addr_T))
                                           ? vlSelfRef.io_mem_rdata
                                           : 0U)));
    if ((0x13U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_op = ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.io_inst 
                                                       >> 0x0000000cU)))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.io_inst 
                                                        >> 0x0000000cU)))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU))) 
                                                     << 1U))));
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__rs1_data;
    } else {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_op = ((1U 
                                                   & ((IData)(CpuTop__DOT___GEN_31) 
                                                      | ((~ 
                                                          ((0x33U 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.io_inst)) 
                                                           & (IData)(vlSelfRef.CpuTop__DOT___GEN_23))) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_22))))
                                                   ? 0U
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.io_inst 
                                                        >> 0x0000000cU)))
                                                    ? 2U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.io_inst 
                                                          >> 0x0000000cU)))
                                                      ? 4U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.io_inst 
                                                           >> 0x0000000cU)))
                                                       ? 5U
                                                       : 
                                                      ((~ 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.io_inst 
                                                             >> 0x0000000cU)))) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelfRef.io_inst 
                                                           >> 0x00000019U))))))));
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = ((0x37U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.io_inst))
                                                   ? vlSelfRef.CpuTop__DOT__pc
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.io_inst))
                                                     ? vlSelfRef.CpuTop__DOT__rs1_data
                                                     : 
                                                    ((1U 
                                                      & ((~ 
                                                          ((0x33U 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.io_inst)) 
                                                           & (0U 
                                                              != 
                                                              (0x0000001fU 
                                                               & (vlSelfRef.io_inst 
                                                                  >> 0x0000000fU))))) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_22)))
                                                      ? 0U
                                                      : vlSelfRef.CpuTop__DOT__casez_tmp)))));
    }
    vlSelfRef.CpuTop__DOT__alu__DOT__io_out = ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                ? (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                   + vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ vlSelfRef.CpuTop__DOT__alu__DOT__io_b) 
                                                     + vlSelfRef.CpuTop__DOT__alu__DOT__io_a))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                     & vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      | vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                       ^ vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                        ? 
                                                       VL_LTS_III(32, vlSelfRef.CpuTop__DOT__alu__DOT__io_a, vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                        : 0U))))));
    vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata = 
        ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
          ? (IData)((vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 
                     >> 0x00000020U)) : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                          ? (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64)
                                          : ((0x0310U 
                                              == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                              ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatush
                                              : ((0x0300U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                                  ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatus
                                                  : 0U))));
    if ((1U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        CpuTop__DOT___GEN_36 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                << (0x0000001fU & (vlSelfRef.io_inst 
                                                   >> 0x00000014U)));
        CpuTop__DOT___GEN_41 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                << (0x0000001fU & vlSelfRef.CpuTop__DOT__rs2_data));
    } else {
        CpuTop__DOT___GEN_36 = ((1U & ((4U == (7U & 
                                               (vlSelfRef.io_inst 
                                                >> 0x0000000cU))) 
                                       | ((6U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU))) 
                                          | ((~ (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))) 
                                             | (7U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.io_inst 
                                                    >> 0x0000000cU)))))))
                                 ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                 : 0U);
        CpuTop__DOT___GEN_41 = (((~ (0U != (7U & (vlSelfRef.io_inst 
                                                  >> 0x0000000cU)))) 
                                 & (IData)(vlSelfRef.CpuTop__DOT___GEN_23))
                                 ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                 : 0U);
    }
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                       ? ((3U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              < vlSelfRef.CpuTop__DOT__immI)
                                           : ((2U == 
                                               (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.io_inst 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.io_inst 
                                                     >> 0x00000019U))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.io_inst 
                                                                      >> 0x00000014U)))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.io_inst 
                                                      >> 0x00000019U))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__rs1_data 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x00000014U)))
                                                     : CpuTop__DOT___GEN_36))
                                                   : CpuTop__DOT___GEN_36)))
                                       : ((0x37U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (0xfffff000U 
                                              & vlSelfRef.io_inst)
                                           : ((0x17U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((IData)(vlSelfRef.CpuTop__DOT___GEN_24)
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
                                                                        >> 0x0000000fU)))) 
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
                                                    ((0x23U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.io_inst))
                                                       ? 
                                                      ((IData)(vlSelfRef.CpuTop__DOT___GEN_23)
                                                        ? 
                                                       (((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5) 
                                                         | ((4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.io_inst 
                                                                 >> 0x0000000cU))) 
                                                            | (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.io_inst 
                                                                   >> 0x0000000cU)))))
                                                         ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU)))
                                                          ? 
                                                         (vlSelfRef.CpuTop__DOT__rs1_data 
                                                          < vlSelfRef.CpuTop__DOT__rs2_data)
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.io_inst 
                                                               >> 0x0000000cU)))
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelfRef.io_inst 
                                                             >> 0x00000019U))
                                                            ? 
                                                           VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                          (0x0000001fU 
                                                                           & vlSelfRef.CpuTop__DOT__rs2_data))
                                                            : 
                                                           ((0U 
                                                             == 
                                                             (vlSelfRef.io_inst 
                                                              >> 0x00000019U))
                                                             ? 
                                                            (vlSelfRef.CpuTop__DOT__rs1_data 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.CpuTop__DOT__rs2_data))
                                                             : CpuTop__DOT___GEN_41))
                                                           : CpuTop__DOT___GEN_41)))
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelfRef.CpuTop__DOT___GEN_32)
                                                        ? vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata
                                                        : 0U)))))))));
    vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp = ((4U 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelfRef.CpuTop__DOT___GEN_33)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ 
                                                       (0xfffff000U 
                                                        & vlSelfRef.io_inst))) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ vlSelfRef.CpuTop__DOT__casez_tmp)) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data
                                                     : 0U)));
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
    // Locals
    IData/*31:0*/ CpuTop__DOT___load_addr_T;
    CpuTop__DOT___load_addr_T = 0;
    IData/*31:0*/ CpuTop__DOT___store_addr_T;
    CpuTop__DOT___store_addr_T = 0;
    IData/*31:0*/ CpuTop__DOT___GEN_36;
    CpuTop__DOT___GEN_36 = 0;
    IData/*31:0*/ CpuTop__DOT___GEN_41;
    CpuTop__DOT___GEN_41 = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__pc;
    __Vdly__CpuTop__DOT__pc = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__csr__DOT__mstatus = 0;
    // Body
    if (VL_UNLIKELY(((1U & (((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                             & (IData)(vlSelfRef.CpuTop__DOT__illegal)) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"illegal inst = 0x%x pc = 0x%x\n",0,
                      32,vlSelfRef.io_inst,32,vlSelfRef.CpuTop__DOT__pc);
    }
    __Vdly__CpuTop__DOT__csr__DOT__mstatus = vlSelfRef.CpuTop__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.CpuTop__DOT__illegal_seen = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                           && ((IData)(vlSelfRef.CpuTop__DOT___GEN_34) 
                                               | (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)));
    if (vlSelfRef.reset) {
        __Vdly__CpuTop__DOT__csr__DOT__mstatus = 0x00001800U;
        vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 = 0ULL;
        __Vdly__CpuTop__DOT__pc = 0x80000000U;
        vlSelfRef.CpuTop__DOT__csr__DOT__mstatush = 0U;
        vlSelfRef.CpuTop__DOT__regs_0 = 0U;
        vlSelfRef.CpuTop__DOT__regs_10 = 0U;
        vlSelfRef.CpuTop__DOT__regs_8 = 0U;
        vlSelfRef.CpuTop__DOT__regs_6 = 0U;
        vlSelfRef.CpuTop__DOT__regs_15 = 0U;
        vlSelfRef.CpuTop__DOT__regs_14 = 0U;
        vlSelfRef.CpuTop__DOT__regs_13 = 0U;
        vlSelfRef.CpuTop__DOT__regs_12 = 0U;
        vlSelfRef.CpuTop__DOT__regs_11 = 0U;
        vlSelfRef.CpuTop__DOT__regs_7 = 0U;
        vlSelfRef.CpuTop__DOT__regs_1 = 0U;
        vlSelfRef.CpuTop__DOT__regs_2 = 0U;
        vlSelfRef.CpuTop__DOT__regs_3 = 0U;
        vlSelfRef.CpuTop__DOT__regs_4 = 0U;
        vlSelfRef.CpuTop__DOT__regs_5 = 0U;
        vlSelfRef.CpuTop__DOT__regs_9 = 0U;
        vlSelfRef.CpuTop__DOT__csr__DOT__mepc = 0U;
    } else {
        vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 
            = ((IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen)
                ? ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                    ? (((QData)((IData)(vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64)))
                    : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                        ? (((QData)((IData)((vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 
                                             >> 0x20U))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp)))
                        : vlSelfRef.CpuTop__DOT__csr__DOT___mcycle_64_T))
                : vlSelfRef.CpuTop__DOT__csr__DOT___mcycle_64_T);
        __Vdly__CpuTop__DOT__pc = (((0x13U == (0x0000007fU 
                                               & vlSelfRef.io_inst)) 
                                    | (IData)(vlSelfRef.CpuTop__DOT___GEN_25))
                                    ? vlSelfRef.CpuTop__DOT___wb_data_T_11
                                    : ((0x6fU == (0x0000007fU 
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
                                        : ((0x67U == 
                                            (0x0000007fU 
                                             & vlSelfRef.io_inst))
                                            ? (0xfffffffeU 
                                               & vlSelfRef.CpuTop__DOT__alu__DOT__io_out)
                                            : ((0x63U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                                ? ((IData)(
                                                           ((0x00007000U 
                                                             == 
                                                             (0x00007000U 
                                                              & vlSelfRef.io_inst)) 
                                                            & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                               >= vlSelfRef.CpuTop__DOT__rs2_data)))
                                                    ? 
                                                   (vlSelfRef.CpuTop__DOT__pc 
                                                    + vlSelfRef.CpuTop__DOT___GEN_40)
                                                    : 
                                                   ((IData)(
                                                            ((0x00006000U 
                                                              == 
                                                              (0x00007000U 
                                                               & vlSelfRef.io_inst)) 
                                                             & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                < vlSelfRef.CpuTop__DOT__rs2_data)))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__pc 
                                                     + vlSelfRef.CpuTop__DOT___GEN_40)
                                                     : 
                                                    ((IData)(
                                                             ((0x00005000U 
                                                               == 
                                                               (0x00007000U 
                                                                & vlSelfRef.io_inst)) 
                                                              & VL_GTES_III(32, vlSelfRef.CpuTop__DOT__rs1_data, vlSelfRef.CpuTop__DOT__rs2_data)))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__pc 
                                                      + vlSelfRef.CpuTop__DOT___GEN_40)
                                                      : 
                                                     ((IData)(
                                                              ((0x00004000U 
                                                                == 
                                                                (0x00007000U 
                                                                 & vlSelfRef.io_inst)) 
                                                               & VL_LTS_III(32, vlSelfRef.CpuTop__DOT__rs1_data, vlSelfRef.CpuTop__DOT__rs2_data)))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__pc 
                                                       + vlSelfRef.CpuTop__DOT___GEN_40)
                                                       : 
                                                      ((IData)(
                                                               ((0x00001000U 
                                                                 != 
                                                                 (0x00007000U 
                                                                  & vlSelfRef.io_inst)) 
                                                                | (IData)(vlSelfRef.CpuTop__DOT___GEN_39)))
                                                        ? 
                                                       (((~ 
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelfRef.io_inst 
                                                               >> 0x0cU)))) 
                                                         & (IData)(vlSelfRef.CpuTop__DOT___GEN_39))
                                                         ? 
                                                        (vlSelfRef.CpuTop__DOT__pc 
                                                         + vlSelfRef.CpuTop__DOT___GEN_40)
                                                         : vlSelfRef.CpuTop__DOT___wb_data_T_11)
                                                        : 
                                                       (vlSelfRef.CpuTop__DOT__pc 
                                                        + vlSelfRef.CpuTop__DOT___GEN_40))))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.CpuTop__DOT___GEN_28) 
                                                       | (~ (IData)(
                                                                    ((0x30000073U 
                                                                      == 
                                                                      (0xfe00007fU 
                                                                       & vlSelfRef.io_inst)) 
                                                                     & (~ 
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelfRef.io_inst 
                                                                             >> 0x0cU)))))))))
                                                    ? vlSelfRef.CpuTop__DOT___wb_data_T_11
                                                    : vlSelfRef.CpuTop__DOT__csr__DOT__mepc)))));
        if (vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception) {
            __Vdly__CpuTop__DOT__csr__DOT__mstatus 
                = (0xfffffff7U & vlSelfRef.CpuTop__DOT__csr__DOT__mstatus);
            vlSelfRef.CpuTop__DOT__csr__DOT__mepc = 
                ((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9)) 
                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_29)))
                  ? 0U : vlSelfRef.CpuTop__DOT__pc);
        } else {
            if (((IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen) 
                 & (0x0300U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr)))) {
                __Vdly__CpuTop__DOT__csr__DOT__mstatus 
                    = vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp;
            }
            if (((IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen) 
                 & (0x0341U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr)))) {
                vlSelfRef.CpuTop__DOT__csr__DOT__mepc 
                    = vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp;
            }
        }
        if (((IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen) 
             & (0x0310U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__csr__DOT__mstatush 
                = vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp;
        }
        vlSelfRef.CpuTop__DOT__regs_0 = (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
                                          & (0U == 
                                             (0x00000780U 
                                              & vlSelfRef.io_inst)))
                                          ? vlSelfRef.CpuTop__DOT__wb_data
                                          : 0U);
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000500U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_10 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000400U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_8 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000300U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_6 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000780U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_15 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000700U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_14 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000680U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_13 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000600U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_12 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000580U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_11 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000380U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_7 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000080U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_1 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000100U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_2 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000180U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_3 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000200U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_4 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000280U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_5 = vlSelfRef.CpuTop__DOT__wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT___GEN_42) 
             & (0x00000480U == (0x00000780U & vlSelfRef.io_inst)))) {
            vlSelfRef.CpuTop__DOT__regs_9 = vlSelfRef.CpuTop__DOT__wb_data;
        }
    }
    vlSelfRef.CpuTop__DOT__csr__DOT__mstatus = __Vdly__CpuTop__DOT__csr__DOT__mstatus;
    vlSelfRef.CpuTop__DOT___GEN_34 = ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                                      & (IData)(vlSelfRef.CpuTop__DOT__illegal));
    vlSelfRef.CpuTop__DOT__csr__DOT___mcycle_64_T = 
        (1ULL + vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64);
    vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata = 
        ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
          ? (IData)((vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 
                     >> 0x00000020U)) : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                          ? (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64)
                                          : ((0x0310U 
                                              == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                              ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatush
                                              : ((0x0300U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr))
                                                  ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatus
                                                  : 0U))));
    vlSelfRef.io_debug_regs_flat[0U] = 0U;
    vlSelfRef.io_debug_regs_flat[1U] = vlSelfRef.CpuTop__DOT__regs_1;
    vlSelfRef.io_debug_regs_flat[2U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_3)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_2))));
    vlSelfRef.io_debug_regs_flat[3U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_3)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_2))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[4U] = vlSelfRef.CpuTop__DOT__regs_4;
    vlSelfRef.io_debug_regs_flat[5U] = vlSelfRef.CpuTop__DOT__regs_5;
    vlSelfRef.io_debug_regs_flat[6U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_7)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_6))));
    vlSelfRef.io_debug_regs_flat[7U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_7)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_6))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[8U] = vlSelfRef.CpuTop__DOT__regs_8;
    vlSelfRef.io_debug_regs_flat[9U] = vlSelfRef.CpuTop__DOT__regs_9;
    vlSelfRef.io_debug_regs_flat[10U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_11)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_10))));
    vlSelfRef.io_debug_regs_flat[11U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_11)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_10))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[12U] = vlSelfRef.CpuTop__DOT__regs_12;
    vlSelfRef.io_debug_regs_flat[13U] = vlSelfRef.CpuTop__DOT__regs_13;
    vlSelfRef.io_debug_regs_flat[14U] = vlSelfRef.CpuTop__DOT__regs_14;
    vlSelfRef.io_debug_regs_flat[15U] = vlSelfRef.CpuTop__DOT__regs_15;
    vlSelfRef.io_debug_regs_flat[16U] = 0U;
    vlSelfRef.io_debug_regs_flat[17U] = 0U;
    vlSelfRef.io_debug_regs_flat[18U] = 0U;
    vlSelfRef.io_debug_regs_flat[19U] = 0U;
    vlSelfRef.io_debug_regs_flat[20U] = 0U;
    vlSelfRef.io_debug_regs_flat[21U] = 0U;
    vlSelfRef.io_debug_regs_flat[22U] = 0U;
    vlSelfRef.io_debug_regs_flat[23U] = 0U;
    vlSelfRef.io_debug_regs_flat[24U] = 0U;
    vlSelfRef.io_debug_regs_flat[25U] = 0U;
    vlSelfRef.io_debug_regs_flat[26U] = 0U;
    vlSelfRef.io_debug_regs_flat[27U] = 0U;
    vlSelfRef.io_debug_regs_flat[28U] = 0U;
    vlSelfRef.io_debug_regs_flat[29U] = 0U;
    vlSelfRef.io_debug_regs_flat[30U] = 0U;
    vlSelfRef.io_debug_regs_flat[31U] = 0U;
    vlSelfRef.CpuTop__DOT__casez_tmp_0 = ((0x00800000U 
                                           & vlSelfRef.io_inst)
                                           ? ((0x00400000U 
                                               & vlSelfRef.io_inst)
                                               ? ((0x00200000U 
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
                                               : ((0x00200000U 
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
                                               ? ((0x00200000U 
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
                                               : ((0x00200000U 
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
                                                    : vlSelfRef.CpuTop__DOT__regs_0))));
    vlSelfRef.CpuTop__DOT__casez_tmp = ((0x00040000U 
                                         & vlSelfRef.io_inst)
                                         ? ((0x00020000U 
                                             & vlSelfRef.io_inst)
                                             ? ((0x00010000U 
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
                                             : ((0x00010000U 
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
                                             ? ((0x00010000U 
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
                                             : ((0x00010000U 
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
                                                  : vlSelfRef.CpuTop__DOT__regs_0))));
    vlSelfRef.CpuTop__DOT__pc = __Vdly__CpuTop__DOT__pc;
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
    vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
          ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp);
    vlSelfRef.io_pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.CpuTop__DOT___wb_data_T_11 = ((IData)(4U) 
                                            + vlSelfRef.CpuTop__DOT__pc);
    vlSelfRef.CpuTop__DOT___GEN_39 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    CpuTop__DOT___store_addr_T = (vlSelfRef.CpuTop__DOT__rs1_data 
                                  + (((- (IData)((vlSelfRef.io_inst 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSelfRef.io_inst 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.io_inst 
                                              >> 7U)))));
    CpuTop__DOT___load_addr_T = (vlSelfRef.CpuTop__DOT__rs1_data 
                                 + vlSelfRef.CpuTop__DOT__immI);
    vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp = ((4U 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelfRef.CpuTop__DOT___GEN_33)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ 
                                                       (0xfffff000U 
                                                        & vlSelfRef.io_inst))) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ vlSelfRef.CpuTop__DOT__casez_tmp)) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data
                                                     : 0U)));
    if (vlSelfRef.CpuTop__DOT___GEN_20) {
        vlSelfRef.io_mem_wmask = 0U;
        vlSelfRef.io_mem_wdata = 0U;
    } else if ((2U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = 0x0000000fU;
        vlSelfRef.io_mem_wdata = vlSelfRef.CpuTop__DOT__rs2_data;
    } else if ((1U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = (0x0000000fU & ((2U 
                                                  & CpuTop__DOT___store_addr_T)
                                                  ? 0x0cU
                                                  : 3U));
        vlSelfRef.io_mem_wdata = (vlSelfRef.CpuTop__DOT__rs2_data 
                                  << (0x00000010U & 
                                      (CpuTop__DOT___store_addr_T 
                                       << 3U)));
    } else if ((0U != (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        vlSelfRef.io_mem_wmask = (0x0000000fU & 0U);
        vlSelfRef.io_mem_wdata = 0U;
    } else {
        vlSelfRef.io_mem_wmask = (0x0000000fU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & CpuTop__DOT___store_addr_T)));
        vlSelfRef.io_mem_wdata = (vlSelfRef.CpuTop__DOT__rs2_data 
                                  << (0x00000018U & 
                                      (CpuTop__DOT___store_addr_T 
                                       << 3U)));
    }
    vlSelfRef.io_mem_addr = ((IData)(vlSelfRef.CpuTop__DOT___GEN_16)
                              ? 0U : ((3U == (0x0000007fU 
                                              & vlSelfRef.io_inst))
                                       ? (0xfffffffcU 
                                          & CpuTop__DOT___load_addr_T)
                                       : ((0x23U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (0xfffffffcU 
                                              & CpuTop__DOT___store_addr_T)
                                           : 0U)));
    vlSelfRef.CpuTop__DOT__casez_tmp_1 = (0x000000ffU 
                                          & ((0U == 
                                              (3U & CpuTop__DOT___load_addr_T))
                                              ? vlSelfRef.io_mem_rdata
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & CpuTop__DOT___load_addr_T))
                                                  ? 
                                                 (vlSelfRef.io_mem_rdata 
                                                  >> 8U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & CpuTop__DOT___load_addr_T))
                                                   ? 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000010U)
                                                   : 
                                                  (vlSelfRef.io_mem_rdata 
                                                   >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__byte_1 = (0x0000ffffU & 
                                     ((2U == (3U & CpuTop__DOT___load_addr_T))
                                       ? (vlSelfRef.io_mem_rdata 
                                          >> 0x00000010U)
                                       : ((0U == (3U 
                                                  & CpuTop__DOT___load_addr_T))
                                           ? vlSelfRef.io_mem_rdata
                                           : 0U)));
    if ((0x13U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = vlSelfRef.CpuTop__DOT__immI;
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__rs1_data;
    } else if ((0x37U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 0U;
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = 0U;
    } else if ((0x17U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = (0xfffff000U 
                                                 & vlSelfRef.io_inst);
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__pc;
    } else if ((0x6fU == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 0U;
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = 0U;
    } else if ((0x67U == (0x0000007fU & vlSelfRef.io_inst))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = vlSelfRef.CpuTop__DOT__immI;
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__rs1_data;
    } else {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = ((1U 
                                                  & ((~ 
                                                      ((0x33U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.io_inst)) 
                                                       & (0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x00000014U))))) 
                                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_22)))
                                                  ? 0U
                                                  : vlSelfRef.CpuTop__DOT__casez_tmp_0);
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = ((1U 
                                                  & ((~ 
                                                      ((0x33U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.io_inst)) 
                                                       & (0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000fU))))) 
                                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_22)))
                                                  ? 0U
                                                  : vlSelfRef.CpuTop__DOT__casez_tmp);
    }
    vlSelfRef.CpuTop__DOT__alu__DOT__io_out = ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                ? (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                   + vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ vlSelfRef.CpuTop__DOT__alu__DOT__io_b) 
                                                     + vlSelfRef.CpuTop__DOT__alu__DOT__io_a))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                     & vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      | vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                       ^ vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                        ? 
                                                       VL_LTS_III(32, vlSelfRef.CpuTop__DOT__alu__DOT__io_a, vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                        : 0U))))));
    if ((1U == (7U & (vlSelfRef.io_inst >> 0x0000000cU)))) {
        CpuTop__DOT___GEN_36 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                << (0x0000001fU & (vlSelfRef.io_inst 
                                                   >> 0x00000014U)));
        CpuTop__DOT___GEN_41 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                << (0x0000001fU & vlSelfRef.CpuTop__DOT__rs2_data));
    } else {
        CpuTop__DOT___GEN_36 = ((1U & ((4U == (7U & 
                                               (vlSelfRef.io_inst 
                                                >> 0x0000000cU))) 
                                       | ((6U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU))) 
                                          | ((~ (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))) 
                                             | (7U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.io_inst 
                                                    >> 0x0000000cU)))))))
                                 ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                 : 0U);
        CpuTop__DOT___GEN_41 = (((~ (0U != (7U & (vlSelfRef.io_inst 
                                                  >> 0x0000000cU)))) 
                                 & (IData)(vlSelfRef.CpuTop__DOT___GEN_23))
                                 ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                 : 0U);
    }
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.io_inst))
                                       ? ((3U == (7U 
                                                  & (vlSelfRef.io_inst 
                                                     >> 0x0000000cU)))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              < vlSelfRef.CpuTop__DOT__immI)
                                           : ((2U == 
                                               (7U 
                                                & (vlSelfRef.io_inst 
                                                   >> 0x0000000cU)))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.io_inst 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.io_inst 
                                                     >> 0x00000019U))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.io_inst 
                                                                      >> 0x00000014U)))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.io_inst 
                                                      >> 0x00000019U))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__rs1_data 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.io_inst 
                                                         >> 0x00000014U)))
                                                     : CpuTop__DOT___GEN_36))
                                                   : CpuTop__DOT___GEN_36)))
                                       : ((0x37U == 
                                           (0x0000007fU 
                                            & vlSelfRef.io_inst))
                                           ? (0xfffff000U 
                                              & vlSelfRef.io_inst)
                                           : ((0x17U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.io_inst))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((IData)(vlSelfRef.CpuTop__DOT___GEN_24)
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
                                                                        >> 0x0000000fU)))) 
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
                                                    ((0x23U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.io_inst))
                                                       ? 
                                                      ((IData)(vlSelfRef.CpuTop__DOT___GEN_23)
                                                        ? 
                                                       (((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_5) 
                                                         | ((4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.io_inst 
                                                                 >> 0x0000000cU))) 
                                                            | (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.io_inst 
                                                                   >> 0x0000000cU)))))
                                                         ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.io_inst 
                                                              >> 0x0000000cU)))
                                                          ? 
                                                         (vlSelfRef.CpuTop__DOT__rs1_data 
                                                          < vlSelfRef.CpuTop__DOT__rs2_data)
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.io_inst 
                                                               >> 0x0000000cU)))
                                                           ? 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelfRef.io_inst 
                                                             >> 0x00000019U))
                                                            ? 
                                                           VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                          (0x0000001fU 
                                                                           & vlSelfRef.CpuTop__DOT__rs2_data))
                                                            : 
                                                           ((0U 
                                                             == 
                                                             (vlSelfRef.io_inst 
                                                              >> 0x00000019U))
                                                             ? 
                                                            (vlSelfRef.CpuTop__DOT__rs1_data 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.CpuTop__DOT__rs2_data))
                                                             : CpuTop__DOT___GEN_41))
                                                           : CpuTop__DOT___GEN_41)))
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelfRef.CpuTop__DOT___GEN_32)
                                                        ? vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata
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
