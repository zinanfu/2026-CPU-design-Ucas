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
    vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp = (0x000000ffU 
                                                  & ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                      ? vlSelfRef.io_mem_rdata
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                       ? 
                                                      (vlSelfRef.io_mem_rdata 
                                                       >> 8U)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                        ? 
                                                       (vlSelfRef.io_mem_rdata 
                                                        >> 0x00000010U)
                                                        : 
                                                       (vlSelfRef.io_mem_rdata 
                                                        >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__mem__DOT__load_half = (0x0000ffffU 
                                                  & ((2U 
                                                      & vlSelfRef.CpuTop__DOT__reg_2_alu_result)
                                                      ? 
                                                     (vlSelfRef.io_mem_rdata 
                                                      >> 0x00000010U)
                                                      : vlSelfRef.io_mem_rdata));
    vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
            ? vlSelfRef.CpuTop__DOT__reg_2_alu_result
            : ((1U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
                ? ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                    ? ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                        ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                            ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                     ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                        : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                            ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                ? 0U : vlSelfRef.io_mem_rdata)
                            : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))
                    : 0U) : ((2U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
                              ? vlSelfRef.CpuTop__DOT__reg_2_pc_plus4
                              : vlSelfRef.CpuTop__DOT__reg_2_csr_rdata)));
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x0000000fU)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x0000000fU))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr))))
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
                    & (((IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x00000014U))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x00000014U))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2)))
            : 0U);
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b = 
        ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
          ? ((5U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                           >> 0x0000000cU))) ? (0x0000001fU 
                                                & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 0x00000014U))
              : ((1U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                               >> 0x0000000cU))) ? 
                 (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x00000014U)) : vlSelfRef.CpuTop__DOT__idu__DOT__immI))
          : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19)
              ? (0xfffff000U & vlSelfRef.CpuTop__DOT__reg_inst)
              : ((0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                  ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                  : ((0x67U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                      ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                      : ((0x63U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                          ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                          : ((3U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                              ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                              : ((0x23U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst))
                                  ? (((- (IData)((vlSelfRef.CpuTop__DOT__reg_inst 
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
                                          : ((1U == 
                                              (7U & 
                                               (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))
                                              ? (0x0000001fU 
                                                 & vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                              : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))
                                      : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1 = ((0x63U 
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
    vlSelfRef.CpuTop__DOT__redirect_valid = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid) 
                                             | ((~ 
                                                 ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                                  | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                                & ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | ((0x67U 
                                                       != 
                                                       (0x0000007fU 
                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)))));
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
    CData/*3:0*/ CpuTop__DOT__idu__DOT___GEN_3;
    CpuTop__DOT__idu__DOT___GEN_3 = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__ifu__DOT__pc;
    __Vdly__CpuTop__DOT__ifu__DOT__pc = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus = 0;
    // Body
    __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
        = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__ifu__DOT__pc = vlSelfRef.CpuTop__DOT__ifu__DOT__pc;
    vlSelfRef.CpuTop__DOT__reg_valid = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)) 
                                            & ((IData)(vlSelfRef.CpuTop__DOT__ifu_io_out_ready) 
                                               | ((~ 
                                                   ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__reg_valid)))));
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 = 0ULL;
        __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus = 0x00001800U;
        __Vdly__CpuTop__DOT__ifu__DOT__pc = 0x80000000U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc = 0U;
    } else {
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
            = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en)
                ? ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                    ? (((QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64)))
                    : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                        ? (((QData)((IData)((vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
                                             >> 0x20U))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp)))
                        : vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T))
                : vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T);
        if (vlSelfRef.CpuTop__DOT__reg_1_mret) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = (8U | vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus);
        } else if (vlSelfRef.CpuTop__DOT__reg_1_exception) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = (0xfffffff7U & vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus);
        } else if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                    & (0x0300U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (vlSelfRef.CpuTop__DOT__redirect_valid) {
            __Vdly__CpuTop__DOT__ifu__DOT__pc = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
                                                  ? 
                                                 ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                                   : 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                                    : 
                                                   ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                                     ? 
                                                    (0xfffffffeU 
                                                     & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                                     : 0U)))
                                                  : 
                                                 ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst))
                                                    ? 
                                                   (vlSelfRef.CpuTop__DOT__reg_pc 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                  >> 0x0000001fU))) 
                                                      << 0x00000014U) 
                                                     | ((((0x000001feU 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                >> 0x00000014U))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007feU 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x00000014U)))))
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)) 
                                                        | (0x67U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.CpuTop__DOT__reg_inst))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.CpuTop__DOT__reg_pc 
                                                     + 
                                                     (((- (IData)(
                                                                  (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000cU) 
                                                      | ((0x00000800U 
                                                          & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                             << 4U)) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                  >> 7U))))))))));
        } else if (vlSelfRef.CpuTop__DOT__ifu_io_out_ready) {
            __Vdly__CpuTop__DOT__ifu__DOT__pc = ((IData)(4U) 
                                                 + vlSelfRef.CpuTop__DOT__ifu__DOT__pc);
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
             & (0x0310U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0000001fU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0cU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0bU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0aU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0dU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0eU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0fU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (vlSelfRef.CpuTop__DOT__reg_1_exception) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause 
                = vlSelfRef.CpuTop__DOT__reg_1_exception_cause;
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc 
                = vlSelfRef.CpuTop__DOT__reg_1_pc;
        } else {
            if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                 & (0x0342U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
                vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause 
                    = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
            }
            if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                 & (0x0341U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
                vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc 
                    = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
            }
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
             & (0x0305U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
    }
    if (vlSelfRef.CpuTop__DOT__reg_valid_1) {
        vlSelfRef.CpuTop__DOT__reg_2_mem_addr = (0xfffffffcU 
                                                 & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out);
        if (vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0) {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = ((0x0000ffffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                   << (0x00000010U & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                      << 3U)));
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & ((2U & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                   ? 0x0cU : 3U));
        } else if (vlSelfRef.CpuTop__DOT__exu__DOT___GEN) {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = ((0x000000ffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                   << (0x00000018U & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                      << 3U)));
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & ((IData)(1U) << (3U 
                                                  & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)));
        } else {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = vlSelfRef.CpuTop__DOT__reg_1_mem_wdata;
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask));
        }
        vlSelfRef.CpuTop__DOT__reg_2_csr_rdata = vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata;
        vlSelfRef.CpuTop__DOT__reg_2_pc_plus4 = ((IData)(4U) 
                                                 + vlSelfRef.CpuTop__DOT__reg_1_pc);
        vlSelfRef.CpuTop__DOT__reg_2_alu_result = vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out;
        vlSelfRef.CpuTop__DOT__reg_2_mem_wen = vlSelfRef.CpuTop__DOT__reg_1_mem_wen;
        vlSelfRef.CpuTop__DOT__reg_2_mem_ren = vlSelfRef.CpuTop__DOT__reg_1_mem_ren;
        vlSelfRef.CpuTop__DOT__reg_2_mem_funct3 = vlSelfRef.CpuTop__DOT__reg_1_mem_funct3;
        vlSelfRef.CpuTop__DOT__reg_2_wb_sel = vlSelfRef.CpuTop__DOT__reg_1_wb_sel;
    }
    vlSelfRef.CpuTop__DOT__reg_valid_3 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2));
    if (vlSelfRef.CpuTop__DOT__reg_valid_2) {
        vlSelfRef.CpuTop__DOT__reg_3_wb_en = vlSelfRef.CpuTop__DOT__reg_2_wb_en;
        vlSelfRef.CpuTop__DOT__reg_3_wb_data = vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data;
        vlSelfRef.CpuTop__DOT__reg_3_wb_addr = vlSelfRef.CpuTop__DOT__reg_2_wb_addr;
    }
    if (vlSelfRef.CpuTop__DOT__reg_valid_1) {
        vlSelfRef.CpuTop__DOT__reg_2_wb_en = vlSelfRef.CpuTop__DOT__reg_1_wb_en;
        vlSelfRef.CpuTop__DOT__reg_2_wb_addr = vlSelfRef.CpuTop__DOT__reg_1_wb_addr;
    }
    if (vlSelfRef.CpuTop__DOT___idu_io_out_valid) {
        vlSelfRef.CpuTop__DOT__reg_1_csr_wdata = vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata;
        vlSelfRef.CpuTop__DOT__reg_1_alu_op = vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op;
        vlSelfRef.CpuTop__DOT__reg_1_alu_b = vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b;
        vlSelfRef.CpuTop__DOT__reg_1_csr_zimm = (0x0000001fU 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000fU));
        vlSelfRef.CpuTop__DOT__reg_1_csr_op = (7U & 
                                               (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU));
        if ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))) {
            vlSelfRef.CpuTop__DOT__reg_1_alu_a = vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata;
            vlSelfRef.CpuTop__DOT__reg_1_wb_en = vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9;
        } else {
            vlSelfRef.CpuTop__DOT__reg_1_alu_a = ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst))
                                                    ? vlSelfRef.CpuTop__DOT__reg_pc
                                                    : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata));
            vlSelfRef.CpuTop__DOT__reg_1_wb_en = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                                                  | ((0x63U 
                                                      != 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                     & ((3U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                        | ((0x23U 
                                                            != 
                                                            (0x0000007fU 
                                                             & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                           & ((0x33U 
                                                               == 
                                                               (0x0000007fU 
                                                                & vlSelfRef.CpuTop__DOT__reg_inst))
                                                               ? 
                                                              ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27) 
                                                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9))
                                                               : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_35))))));
        }
        vlSelfRef.CpuTop__DOT__reg_1_mret = (((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                                              & (0x30000073U 
                                                 == 
                                                 (0xfe00007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst))) 
                                             & (~ (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU)))));
        vlSelfRef.CpuTop__DOT__reg_1_is_jalr = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)) 
                                                & (0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
        vlSelfRef.CpuTop__DOT__reg_1_mem_wdata = vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata;
        vlSelfRef.CpuTop__DOT__reg_1_mem_wen = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                                                & (0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
        vlSelfRef.CpuTop__DOT__reg_1_mem_wmask = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & (- (IData)((IData)(
                                                                        (0x00002023U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSelfRef.CpuTop__DOT__reg_inst)))))));
        vlSelfRef.CpuTop__DOT__reg_1_mem_ren = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                                                & (3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
        vlSelfRef.CpuTop__DOT__reg_1_mem_funct3 = (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                                       | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU)));
        vlSelfRef.CpuTop__DOT__reg_1_wb_sel = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                                ? 0U
                                                : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16)
                                                    ? 2U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.CpuTop__DOT__reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst))
                                                      ? 1U
                                                      : 
                                                     (((0x73U 
                                                        != 
                                                        (0x0000007fU 
                                                         & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                       | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))
                                                       ? 0U
                                                       : 
                                                      (3U 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (7U 
                                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                         >> 0x0000000cU)))))))))));
        vlSelfRef.CpuTop__DOT__reg_1_exception_cause 
            = ((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                      | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)))
                ? 0U : ((1U == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x00000014U)))
                         ? 3U : ((0U == (0x0000001fU 
                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000014U)))
                                  ? 0x0bU : 0U)));
        vlSelfRef.CpuTop__DOT__reg_1_csr_en = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_35));
        vlSelfRef.CpuTop__DOT__reg_1_pc = vlSelfRef.CpuTop__DOT__reg_pc;
        vlSelfRef.CpuTop__DOT__reg_1_exception = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                                                  & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32) 
                                                     & ((1U 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                             >> 0x00000014U))) 
                                                        | (0U 
                                                           == 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                               >> 0x00000014U))))));
        vlSelfRef.CpuTop__DOT__reg_1_csr_addr = (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U);
        vlSelfRef.CpuTop__DOT__reg_1_wb_addr = (0x0000001fU 
                                                & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 7U));
    }
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
        = __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T 
        = (1ULL + vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64);
    vlSelfRef.io_mem_addr = vlSelfRef.CpuTop__DOT__reg_2_mem_addr;
    vlSelfRef.io_mem_wdata = vlSelfRef.CpuTop__DOT__reg_2_mem_wdata;
    vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp = (0x000000ffU 
                                                  & ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                      ? vlSelfRef.io_mem_rdata
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                       ? 
                                                      (vlSelfRef.io_mem_rdata 
                                                       >> 8U)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.CpuTop__DOT__reg_2_alu_result))
                                                        ? 
                                                       (vlSelfRef.io_mem_rdata 
                                                        >> 0x00000010U)
                                                        : 
                                                       (vlSelfRef.io_mem_rdata 
                                                        >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__mem__DOT__load_half = (0x0000ffffU 
                                                  & ((2U 
                                                      & vlSelfRef.CpuTop__DOT__reg_2_alu_result)
                                                      ? 
                                                     (vlSelfRef.io_mem_rdata 
                                                      >> 0x00000010U)
                                                      : vlSelfRef.io_mem_rdata));
    vlSelfRef.io_debug_valid = vlSelfRef.CpuTop__DOT__reg_valid_3;
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
    vlSelfRef.io_mem_wmask = vlSelfRef.CpuTop__DOT__reg_2_mem_wmask;
    vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen = ((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_en) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_3));
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
    vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
            ? vlSelfRef.CpuTop__DOT__reg_2_alu_result
            : ((1U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
                ? ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                    ? ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                        ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                            ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                     ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                        : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                            ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                ? 0U : vlSelfRef.io_mem_rdata)
                            : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))
                    : 0U) : ((2U == (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_sel))
                              ? vlSelfRef.CpuTop__DOT__reg_2_pc_plus4
                              : vlSelfRef.CpuTop__DOT__reg_2_csr_rdata)));
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                             & (0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)));
    vlSelfRef.CpuTop__DOT__reg_valid_2 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    if (vlSelfRef.CpuTop__DOT__ifu_io_out_ready) {
        vlSelfRef.CpuTop__DOT__reg_pc = vlSelfRef.CpuTop__DOT__ifu__DOT__pc;
        vlSelfRef.CpuTop__DOT__reg_inst = vlSelfRef.io_inst;
    }
    vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata 
        = ((0x0341U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
            ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
            : ((0x0305U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                : ((0x0342U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause
                    : ((0x0f12U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                        ? 0x000e2cf9U : ((0x0f11U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
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
    vlSelfRef.io_mem_wen = ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen) 
                            & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2));
    vlSelfRef.io_mem_ren = ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren) 
                            & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2));
    vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen 
        = ((IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_en) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2));
    vlSelfRef.CpuTop__DOT__reg_valid_1 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && ((~ (IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)) 
                                              & (IData)(vlSelfRef.CpuTop__DOT___idu_io_out_valid)));
    vlSelfRef.CpuTop__DOT__ifu__DOT__pc = __Vdly__CpuTop__DOT__ifu__DOT__pc;
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
    vlSelfRef.io_pc = vlSelfRef.CpuTop__DOT__ifu__DOT__pc;
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__reg_pc;
    vlSelfRef.CpuTop__DOT___exu_io_redirect_valid = 
        ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_1) 
         & ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception) 
            | ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr) 
               | (IData)(vlSelfRef.CpuTop__DOT__reg_1_mret))));
    vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T 
        = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_en) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en = 
        ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
         & (1U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)));
    vlSelfRef.io_debug_inst = vlSelfRef.CpuTop__DOT__reg_inst;
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
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32 = (IData)(
                                                       ((0x00000073U 
                                                         == 
                                                         (0xfe00007fU 
                                                          & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                        & (~ 
                                                           (0U 
                                                            != 
                                                            (7U 
                                                             & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                >> 0x0000000cU))))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_35 = ((0x73U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33 = ((0x23U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT__immI = (((- (IData)(
                                                         (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x00000014U));
    CpuTop__DOT__idu__DOT___GEN_3 = ((1U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 0x0000000cU)))
                                      ? 6U : ((4U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 0x0000000cU)))
                                               ? 4U
                                               : ((6U 
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
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10 
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
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16 = ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
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
    vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x00000014U)));
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
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10) 
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
    vlSelfRef.CpuTop__DOT__idu__DOT__stall = ((IData)(vlSelfRef.CpuTop__DOT__reg_valid) 
                                              & (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))) 
                                                 & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2))));
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x0000000fU)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x0000000fU))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr))))
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
                    & (((IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x00000014U))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_2_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x00000014U))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2)))
            : 0U);
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22) 
                                                | (3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
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
                                     ? 7U : (IData)(CpuTop__DOT__idu__DOT___GEN_3)))
                        : (IData)(CpuTop__DOT__idu__DOT___GEN_3))));
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
    vlSelfRef.CpuTop__DOT__ifu_io_out_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                                | (~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall))));
    vlSelfRef.CpuTop__DOT___idu_io_out_valid = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                                & (IData)(vlSelfRef.CpuTop__DOT__reg_valid));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1 = ((0x63U 
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
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33));
    vlSelfRef.CpuTop__DOT__redirect_valid = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid) 
                                             | ((~ 
                                                 ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                                  | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                                & ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | ((0x67U 
                                                       != 
                                                       (0x0000007fU 
                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)))));
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
            VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
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
            VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCpuTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
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
