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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.CpuTop__DOT__pc),32);
        bufp->chgCData(oldp+1,(vlSelfRef.CpuTop__DOT__load_offset_reg),2);
        bufp->chgCData(oldp+2,(vlSelfRef.CpuTop__DOT__load_funct3_reg),3);
        bufp->chgCData(oldp+3,(vlSelfRef.CpuTop__DOT__state),2);
        bufp->chgIData(oldp+4,(vlSelfRef.CpuTop__DOT__instReg),32);
        bufp->chgIData(oldp+5,(vlSelfRef.CpuTop__DOT__regs_0),32);
        bufp->chgIData(oldp+6,(vlSelfRef.CpuTop__DOT__regs_1),32);
        bufp->chgIData(oldp+7,(vlSelfRef.CpuTop__DOT__regs_2),32);
        bufp->chgIData(oldp+8,(vlSelfRef.CpuTop__DOT__regs_3),32);
        bufp->chgIData(oldp+9,(vlSelfRef.CpuTop__DOT__regs_4),32);
        bufp->chgIData(oldp+10,(vlSelfRef.CpuTop__DOT__regs_5),32);
        bufp->chgIData(oldp+11,(vlSelfRef.CpuTop__DOT__regs_6),32);
        bufp->chgIData(oldp+12,(vlSelfRef.CpuTop__DOT__regs_7),32);
        bufp->chgIData(oldp+13,(vlSelfRef.CpuTop__DOT__regs_8),32);
        bufp->chgIData(oldp+14,(vlSelfRef.CpuTop__DOT__regs_9),32);
        bufp->chgIData(oldp+15,(vlSelfRef.CpuTop__DOT__regs_10),32);
        bufp->chgIData(oldp+16,(vlSelfRef.CpuTop__DOT__regs_11),32);
        bufp->chgIData(oldp+17,(vlSelfRef.CpuTop__DOT__regs_12),32);
        bufp->chgIData(oldp+18,(vlSelfRef.CpuTop__DOT__regs_13),32);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__regs_14),32);
        bufp->chgIData(oldp+20,(vlSelfRef.CpuTop__DOT__regs_15),32);
        bufp->chgIData(oldp+21,(vlSelfRef.CpuTop__DOT__casez_tmp),32);
        bufp->chgIData(oldp+22,(vlSelfRef.CpuTop__DOT__rs1_data),32);
        bufp->chgIData(oldp+23,(vlSelfRef.CpuTop__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+24,(vlSelfRef.CpuTop__DOT__rs2_data),32);
        bufp->chgIData(oldp+25,(vlSelfRef.CpuTop__DOT__immI),32);
        bufp->chgIData(oldp+26,((0xfffff000U & vlSelfRef.CpuTop__DOT__instReg)),32);
        bufp->chgBit(oldp+27,(vlSelfRef.CpuTop__DOT__is_load));
        bufp->chgCData(oldp+28,(vlSelfRef.CpuTop__DOT__casez_tmp_1),8);
        bufp->chgIData(oldp+29,(((4U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                  ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                      ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                               ? (IData)(vlSelfRef.CpuTop__DOT__load_half)
                                               : (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1)))
                                  : ((2U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                      ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                          ? 0U : vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG)
                                      : ((1U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.CpuTop__DOT__load_half) 
                                                             >> 0x0000000fU)))) 
                                              << 0x00000010U) 
                                             | (IData)(vlSelfRef.CpuTop__DOT__load_half))
                                          : (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1) 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1)))))),32);
        bufp->chgSData(oldp+30,(vlSelfRef.CpuTop__DOT__load_half),16);
        bufp->chgBit(oldp+31,(vlSelfRef.CpuTop__DOT__illegal));
        bufp->chgBit(oldp+32,(vlSelfRef.CpuTop__DOT__illegal_seen));
        bufp->chgCData(oldp+33,(((0U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                  ? 1U : ((1U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                           ? ((IData)(vlSelfRef.CpuTop__DOT__is_load) 
                                              << 1U)
                                           : ((2U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                               ? 0U
                                               : (IData)(vlSelfRef.CpuTop__DOT__state))))),2);
        bufp->chgIData(oldp+34,(vlSelfRef.CpuTop__DOT__load_processed_data),32);
        bufp->chgIData(oldp+35,(vlSelfRef.CpuTop__DOT__wb_data),32);
        bufp->chgIData(oldp+36,(vlSelfRef.CpuTop__DOT__alu__DOT__io_a),32);
        bufp->chgIData(oldp+37,(vlSelfRef.CpuTop__DOT__alu__DOT__io_b),32);
        bufp->chgCData(oldp+38,(vlSelfRef.CpuTop__DOT__alu__DOT__io_op),4);
        bufp->chgIData(oldp+39,(vlSelfRef.CpuTop__DOT__alu__DOT__io_out),32);
        bufp->chgSData(oldp+40,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr),12);
        bufp->chgCData(oldp+41,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op),3);
        bufp->chgIData(oldp+42,(vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data),32);
        bufp->chgIData(oldp+43,(vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm),32);
        bufp->chgBit(oldp+44,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen));
        bufp->chgIData(oldp+45,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata),32);
        bufp->chgIData(oldp+46,(vlSelfRef.CpuTop__DOT__csr__DOT__mtvec),32);
        bufp->chgBit(oldp+47,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception));
        bufp->chgCData(oldp+48,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_30)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_32)))
                                  ? 0U : ((1U == (0x0000000fU 
                                                  & (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x00000014U)))
                                           ? 3U : (
                                                   (0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 0x00000014U)))
                                                    ? 0U
                                                    : 0x0bU)))),4);
        bufp->chgIData(oldp+49,(((1U & ((~ ((IData)(vlSelfRef.CpuTop__DOT___GEN_30) 
                                            & ((~ (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x00000014U)))) 
                                               | (1U 
                                                  == 
                                                  (0x0000000fU 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x00000014U)))))) 
                                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_32)))
                                  ? 0U : vlSelfRef.CpuTop__DOT__pc)),32);
        bufp->chgBit(oldp+50,(((~ (0U != (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU)))) 
                               & ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9) 
                                  & ((0x18U == (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x00000019U)) 
                                     & (1U == (IData)(vlSelfRef.CpuTop__DOT__state)))))));
        bufp->chgIData(oldp+51,(vlSelfRef.CpuTop__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+52,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+53,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+54,(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64),64);
        bufp->chgIData(oldp+56,(vlSelfRef.CpuTop__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+57,(vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp),32);
        bufp->chgIData(oldp+58,(vlSelfRef.CpuTop__DOT___instMemory_io_rdata),32);
        bufp->chgIData(oldp+59,(((IData)(vlSelfRef.CpuTop__DOT___GEN_18)
                                  ? 0U : (0xfffffffcU 
                                          & vlSelfRef.CpuTop__DOT___load_addr_T))),32);
        bufp->chgIData(oldp+60,(vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG),32);
        bufp->chgBit(oldp+61,(((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_20)) 
                               & ((0x23U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  & (1U == (IData)(vlSelfRef.CpuTop__DOT__state))))));
        bufp->chgCData(oldp+62,((((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                  ? 0U : ((2U == (7U 
                                                  & (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x0000000cU)))
                                           ? 0x0000000fU
                                           : (0x0000000fU 
                                              & ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU)))
                                                  ? 
                                                 ((2U 
                                                   & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 0x0000001fU))) 
                                                        << 0x0000000cU) 
                                                       | ((0x00000fe0U 
                                                           & (vlSelfRef.CpuTop__DOT__instReg 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001fU 
                                                             & (vlSelfRef.CpuTop__DOT__instReg 
                                                                >> 7U))))))
                                                   ? 0x0cU
                                                   : 3U)
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x0000000cU)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                       + 
                                                       (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 7U)))))))))),4);
        bufp->chgIData(oldp+63,((((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                  ? 0U : (0xfffffffcU 
                                          & (vlSelfRef.CpuTop__DOT__rs1_data 
                                             + (((- (IData)(
                                                            (vlSelfRef.CpuTop__DOT__instReg 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | ((0x00000fe0U 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 7U)))))))),32);
        bufp->chgIData(oldp+64,((((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                  ? 0U : ((2U == (7U 
                                                  & (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x0000000cU)))
                                           ? vlSelfRef.CpuTop__DOT__rs2_data
                                           : ((1U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? (vlSelfRef.CpuTop__DOT__rs2_data 
                                                  << 
                                                  (0x00000010U 
                                                   & ((vlSelfRef.CpuTop__DOT__rs1_data 
                                                       + 
                                                       (((- (IData)(
                                                                    (vlSelfRef.CpuTop__DOT__instReg 
                                                                     >> 0x0000001fU))) 
                                                         << 0x0000000cU) 
                                                        | ((0x00000fe0U 
                                                            & (vlSelfRef.CpuTop__DOT__instReg 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.CpuTop__DOT__instReg 
                                                                 >> 7U))))) 
                                                      << 3U)))
                                               : ((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x0000000cU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.CpuTop__DOT__rs2_data 
                                                   << 
                                                   (0x00000018U 
                                                    & ((vlSelfRef.CpuTop__DOT__rs1_data 
                                                        + 
                                                        (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 7U)) 
                                                       << 3U)))))))),32);
        bufp->chgIData(oldp+65,(vlSelfRef.CpuTop__DOT__lsuMem__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+66,((((~ ((0x23U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))) 
                                  & ((2U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))) 
                                     | (0x0000000fU 
                                        == (0x0000000fU 
                                            & ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                    >> 0x0000000cU)))
                                                ? (
                                                   (2U 
                                                    & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                       + 
                                                       (((- (IData)(
                                                                    (vlSelfRef.CpuTop__DOT__instReg 
                                                                     >> 0x0000001fU))) 
                                                         << 0x0000000cU) 
                                                        | ((0x00000fe0U 
                                                            & (vlSelfRef.CpuTop__DOT__instReg 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.CpuTop__DOT__instReg 
                                                                 >> 7U))))))
                                                    ? 0x0cU
                                                    : 3U)
                                                : (
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 0x0000000cU)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                        + 
                                                        (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 7U))))))))))
                                  ? 4U : (((0x0cU == 
                                            (((0x23U 
                                               != (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)) 
                                              | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? 0x0000000fU
                                               : (0x0000000fU 
                                                  & ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     ((2U 
                                                       & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                          + 
                                                          (((- (IData)(
                                                                       (vlSelfRef.CpuTop__DOT__instReg 
                                                                        >> 0x0000001fU))) 
                                                            << 0x0000000cU) 
                                                           | ((0x00000fe0U 
                                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                                  >> 0x00000014U)) 
                                                              | (0x0000001fU 
                                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 7U))))))
                                                       ? 0x0cU
                                                       : 3U)
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU)))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                           + 
                                                           (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 7U)))))))))) 
                                           | (3U == 
                                              (((0x23U 
                                                 != 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__instReg)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 0x0000000cU)))
                                                    ? 0x0000000fU
                                                    : 
                                                   (0x0000000fU 
                                                    & ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       ((2U 
                                                         & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                            + 
                                                            (((- (IData)(
                                                                         (vlSelfRef.CpuTop__DOT__instReg 
                                                                          >> 0x0000001fU))) 
                                                              << 0x0000000cU) 
                                                             | ((0x00000fe0U 
                                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 0x00000014U)) 
                                                                | (0x0000001fU 
                                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                                      >> 7U))))))
                                                         ? 0x0cU
                                                         : 3U)
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                                             >> 0x0000000cU)))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                             + 
                                                             (vlSelfRef.CpuTop__DOT__instReg 
                                                              >> 7U)))))))))))
                                           ? 2U : (
                                                   ((8U 
                                                     == 
                                                     (((0x23U 
                                                        != 
                                                        (0x0000007fU 
                                                         & vlSelfRef.CpuTop__DOT__instReg)) 
                                                       | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 0x0000000cU)))
                                                        ? 0x0000000fU
                                                        : 
                                                       (0x0000000fU 
                                                        & ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.CpuTop__DOT__instReg 
                                                                >> 0x0000000cU)))
                                                            ? 
                                                           ((2U 
                                                             & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                + 
                                                                (((- (IData)(
                                                                             (vlSelfRef.CpuTop__DOT__instReg 
                                                                              >> 0x0000001fU))) 
                                                                  << 0x0000000cU) 
                                                                 | ((0x00000fe0U 
                                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                                        >> 0x00000014U)) 
                                                                    | (0x0000001fU 
                                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                                          >> 7U))))))
                                                             ? 0x0cU
                                                             : 3U)
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelfRef.CpuTop__DOT__instReg 
                                                                 >> 0x0000000cU)))
                                                             ? 0U
                                                             : 
                                                            ((IData)(1U) 
                                                             << 
                                                             (3U 
                                                              & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                 + 
                                                                 (vlSelfRef.CpuTop__DOT__instReg 
                                                                  >> 7U)))))))))) 
                                                    | ((4U 
                                                        == 
                                                        (((0x23U 
                                                           != 
                                                           (0x0000007fU 
                                                            & vlSelfRef.CpuTop__DOT__instReg)) 
                                                          | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.CpuTop__DOT__instReg 
                                                               >> 0x0000000cU)))
                                                           ? 0x0000000fU
                                                           : 
                                                          (0x0000000fU 
                                                           & ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                   >> 0x0000000cU)))
                                                               ? 
                                                              ((2U 
                                                                & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                   + 
                                                                   (((- (IData)(
                                                                                (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000001fU))) 
                                                                     << 0x0000000cU) 
                                                                    | ((0x00000fe0U 
                                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                                           >> 0x00000014U)) 
                                                                       | (0x0000001fU 
                                                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                                                             >> 7U))))))
                                                                ? 0x0cU
                                                                : 3U)
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 0x0000000cU)))
                                                                ? 0U
                                                                : 
                                                               ((IData)(1U) 
                                                                << 
                                                                (3U 
                                                                 & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                    + 
                                                                    (vlSelfRef.CpuTop__DOT__instReg 
                                                                     >> 7U)))))))))) 
                                                       | ((2U 
                                                           == 
                                                           (((0x23U 
                                                              != 
                                                              (0x0000007fU 
                                                               & vlSelfRef.CpuTop__DOT__instReg)) 
                                                             | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                                             ? 0U
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                                  >> 0x0000000cU)))
                                                              ? 0x0000000fU
                                                              : 
                                                             (0x0000000fU 
                                                              & ((1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                                      >> 0x0000000cU)))
                                                                  ? 
                                                                 ((2U 
                                                                   & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                      + 
                                                                      (((- (IData)(
                                                                                (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000001fU))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000fe0U 
                                                                           & (vlSelfRef.CpuTop__DOT__instReg 
                                                                              >> 0x00000014U)) 
                                                                          | (0x0000001fU 
                                                                             & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 7U))))))
                                                                   ? 0x0cU
                                                                   : 3U)
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                                       >> 0x0000000cU)))
                                                                   ? 0U
                                                                   : 
                                                                  ((IData)(1U) 
                                                                   << 
                                                                   (3U 
                                                                    & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                       + 
                                                                       (vlSelfRef.CpuTop__DOT__instReg 
                                                                        >> 7U)))))))))) 
                                                          | (1U 
                                                             == 
                                                             (((0x23U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                                               | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 0x0000000cU)))
                                                                ? 0x0000000fU
                                                                : 
                                                               (0x0000000fU 
                                                                & ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                                        >> 0x0000000cU)))
                                                                    ? 
                                                                   ((2U 
                                                                     & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                        + 
                                                                        (((- (IData)(
                                                                                (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000001fU))) 
                                                                          << 0x0000000cU) 
                                                                         | ((0x00000fe0U 
                                                                             & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x00000014U)) 
                                                                            | (0x0000001fU 
                                                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 7U))))))
                                                                     ? 0x0cU
                                                                     : 3U)
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (7U 
                                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                                         >> 0x0000000cU)))
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(1U) 
                                                                     << 
                                                                     (3U 
                                                                      & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                                         + 
                                                                         (vlSelfRef.CpuTop__DOT__instReg 
                                                                          >> 7U)))))))))))))
                                                    ? 1U
                                                    : 4U)))),32);
        bufp->chgIData(oldp+67,((((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_20)) 
                                  & ((0x23U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg)) 
                                     & (1U == (IData)(vlSelfRef.CpuTop__DOT__state))))
                                  ? (((0x23U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_20))
                                      ? 0U : ((2U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? 0x0000000fU
                                               : (0x0000000fU 
                                                  & ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                          >> 0x0000000cU)))
                                                      ? 
                                                     ((2U 
                                                       & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                          + 
                                                          (((- (IData)(
                                                                       (vlSelfRef.CpuTop__DOT__instReg 
                                                                        >> 0x0000001fU))) 
                                                            << 0x0000000cU) 
                                                           | ((0x00000fe0U 
                                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                                  >> 0x00000014U)) 
                                                              | (0x0000001fU 
                                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 7U))))))
                                                       ? 0x0cU
                                                       : 3U)
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU)))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                           + 
                                                           (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 7U)))))))))
                                  : 0U)),32);
    }
    bufp->chgBit(oldp+68,(vlSelfRef.clock));
    bufp->chgBit(oldp+69,(vlSelfRef.reset));
    bufp->chgIData(oldp+70,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+71,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+72,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+73,(vlSelfRef.io_debug_regs_flat),1024);
}

void VCpuTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_cleanup\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
