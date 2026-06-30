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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.CpuTop__DOT__redirect_valid));
        bufp->chgIData(oldp+1,(((0x13U == (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__reg_inst))
                                 ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata
                                 : ((0x37U == (0x0000007fU 
                                               & vlSelfRef.CpuTop__DOT__reg_inst))
                                     ? 0U : ((0x17U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst))
                                              ? vlSelfRef.CpuTop__DOT__reg_pc
                                              : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata)))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgIData(oldp+3,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
        bufp->chgIData(oldp+4,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
        bufp->chgIData(oldp+5,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
        bufp->chgBit(oldp+6,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                              & ((0x6fU == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                 | ((0x67U != (0x0000007fU 
                                               & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                    & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1))))));
        bufp->chgIData(oldp+7,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                 ? 0U : ((0x6fU == 
                                          (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__reg_inst))
                                          ? (vlSelfRef.CpuTop__DOT__reg_pc 
                                             + (((- (IData)(
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
                                          : ((1U & 
                                              ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)) 
                                               | (0x67U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__reg_inst))))
                                              ? 0U : 
                                             (vlSelfRef.CpuTop__DOT__reg_pc 
                                              + (((- (IData)(
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
                                                             >> 7U)))))))))),32);
        bufp->chgIData(oldp+8,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                     ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                     : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                         ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                         : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                             ? (0xfffffffeU 
                                                & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                             : 0U)))
                                 : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                     ? 0U : ((0x6fU 
                                              == (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst))
                                              ? (vlSelfRef.CpuTop__DOT__reg_pc 
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
                                              : ((1U 
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
                                                               >> 7U))))))))))),32);
        bufp->chgCData(oldp+9,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp),8);
        bufp->chgSData(oldp+10,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+11,(vlSelfRef.CpuTop__DOT__reg_pc),32);
        bufp->chgIData(oldp+12,(vlSelfRef.CpuTop__DOT__reg_inst),32);
        bufp->chgBit(oldp+13,(vlSelfRef.CpuTop__DOT__reg_valid));
        bufp->chgBit(oldp+14,(vlSelfRef.CpuTop__DOT__ifu_io_out_ready));
        bufp->chgIData(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_pc),32);
        bufp->chgIData(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_inst),32);
        bufp->chgCData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_alu_op),4);
        bufp->chgIData(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_alu_a),32);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_alu_b),32);
        bufp->chgCData(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_wb_addr),5);
        bufp->chgBit(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_wb_en));
        bufp->chgCData(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_wb_sel),2);
        bufp->chgBit(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_mem_ren));
        bufp->chgBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_1_mem_wen));
        bufp->chgCData(oldp+25,(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3),3);
        bufp->chgCData(oldp+26,(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask),4);
        bufp->chgIData(oldp+27,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
        bufp->chgBit(oldp+28,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
        bufp->chgSData(oldp+29,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
        bufp->chgCData(oldp+30,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
        bufp->chgIData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
        bufp->chgIData(oldp+32,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
        bufp->chgBit(oldp+33,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
        bufp->chgBit(oldp+34,(vlSelfRef.CpuTop__DOT__reg_1_exception));
        bufp->chgCData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
        bufp->chgBit(oldp+36,(vlSelfRef.CpuTop__DOT__reg_1_mret));
        bufp->chgBit(oldp+37,(vlSelfRef.CpuTop__DOT__reg_valid_1));
        bufp->chgIData(oldp+38,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
        bufp->chgIData(oldp+39,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
        bufp->chgIData(oldp+40,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
        bufp->chgBit(oldp+41,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
        bufp->chgBit(oldp+42,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
        bufp->chgCData(oldp+43,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
        bufp->chgIData(oldp+44,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
        bufp->chgCData(oldp+45,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
        bufp->chgIData(oldp+46,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
        bufp->chgCData(oldp+47,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
        bufp->chgBit(oldp+48,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
        bufp->chgCData(oldp+49,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
        bufp->chgIData(oldp+50,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
        bufp->chgIData(oldp+51,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
        bufp->chgBit(oldp+52,(vlSelfRef.CpuTop__DOT__reg_valid_2));
        bufp->chgIData(oldp+53,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
        bufp->chgIData(oldp+54,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
        bufp->chgCData(oldp+55,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
        bufp->chgBit(oldp+56,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
        bufp->chgIData(oldp+57,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
        bufp->chgBit(oldp+58,(vlSelfRef.CpuTop__DOT__reg_valid_3));
        bufp->chgIData(oldp+59,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
        bufp->chgIData(oldp+60,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
        bufp->chgCData(oldp+61,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
                                                 ? 
                                                ((2U 
                                                  & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                                  ? 0x0cU
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN)
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out))
                                                  : (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask))))),4);
        bufp->chgIData(oldp+62,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
                                  ? ((0x0000ffffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                                     << (0x00000010U 
                                         & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                            << 3U)))
                                  : ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN)
                                      ? ((0x000000ffU 
                                          & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                                         << (0x00000018U 
                                             & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                                << 3U)))
                                      : vlSelfRef.CpuTop__DOT__reg_1_mem_wdata))),32);
        bufp->chgIData(oldp+63,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
        bufp->chgIData(oldp+64,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
        bufp->chgBit(oldp+65,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
        bufp->chgIData(oldp+66,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                  ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                  : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                      ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                      : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                          ? (0xfffffffeU 
                                             & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                          : 0U)))),32);
        bufp->chgBit(oldp+67,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
        bufp->chgIData(oldp+68,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
        bufp->chgBit(oldp+69,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                               & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
        bufp->chgIData(oldp+70,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+71,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+72,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+73,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+74,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
        bufp->chgIData(oldp+76,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+77,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
        bufp->chgBit(oldp+78,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)))));
        bufp->chgBit(oldp+79,(vlSelfRef.CpuTop__DOT___idu_io_out_valid));
        bufp->chgCData(oldp+80,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgCData(oldp+81,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 7U))),5);
        bufp->chgBit(oldp+82,(((0x13U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst))
                                ? (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9)
                                : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                                   | ((0x63U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                      & ((3U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                         | ((0x23U 
                                             != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                            & ((0x33U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                                ? ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9))
                                                : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_35)))))))));
        bufp->chgCData(oldp+83,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                  ? 0U : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16)
                                           ? 2U : (
                                                   (0x63U 
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
                                                                        >> 0x0000000cU)))))))))))),2);
        bufp->chgBit(oldp+84,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                               & (3U == (0x0000007fU 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+85,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                               & (0x23U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgCData(oldp+86,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                  ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))),3);
        bufp->chgCData(oldp+87,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                  ? 0U : (0x0000000fU 
                                          & (- (IData)((IData)(
                                                               (0x00002023U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
        bufp->chgBit(oldp+88,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_35))));
        bufp->chgSData(oldp+89,((vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x00000014U)),12);
        bufp->chgCData(oldp+90,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                       >> 0x0000000cU))),3);
        bufp->chgIData(oldp+91,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000fU))),32);
        bufp->chgBit(oldp+92,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)) 
                               & (0x67U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+93,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                               & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32) 
                                  & ((1U == (0x0000001fU 
                                             & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x00000014U))) 
                                     | (0U == (0x0000001fU 
                                               & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                  >> 0x00000014U))))))));
        bufp->chgCData(oldp+94,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)))
                                  ? 0U : ((1U == (0x0000001fU 
                                                  & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                     >> 0x00000014U)))
                                           ? 3U : (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                        >> 0x00000014U)))
                                                    ? 0x0bU
                                                    : 0U)))),4);
        bufp->chgBit(oldp+95,((((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_34)) 
                                & (0x30000073U == (0xfe00007fU 
                                                   & vlSelfRef.CpuTop__DOT__reg_inst))) 
                               & (~ (0U != (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                  >> 0x0000000cU)))))));
        bufp->chgBit(oldp+96,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
        bufp->chgBit(oldp+97,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
        bufp->chgIData(oldp+98,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+99,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+100,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+101,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+102,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+103,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+104,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+105,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+106,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+107,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+108,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+109,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+110,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+111,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+112,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+113,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+114,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+115,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+116,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+117,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+118,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+119,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+120,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+121,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+122,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+123,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+124,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+125,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+126,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+127,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+128,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+129,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
        bufp->chgCData(oldp+130,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                   ? ((0x00002000U 
                                       & vlSelfRef.CpuTop__DOT__reg_inst)
                                       ? ((0x00001000U 
                                           & vlSelfRef.CpuTop__DOT__reg_inst)
                                           ? 2U : 3U)
                                       : ((0x00001000U 
                                           & vlSelfRef.CpuTop__DOT__reg_inst)
                                           ? ((0x40000000U 
                                               & vlSelfRef.CpuTop__DOT__reg_inst)
                                               ? 8U
                                               : 7U)
                                           : 4U)) : 
                                  ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                    ? ((0x00001000U 
                                        & vlSelfRef.CpuTop__DOT__reg_inst)
                                        ? 9U : 5U) : 
                                   ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                     ? 6U : (1U & (
                                                   (~ 
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                         >> 0x0000000cU)))) 
                                                   & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                      >> 0x0000001eU))))))),4);
        bufp->chgBit(oldp+131,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
        bufp->chgCData(oldp+132,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgIData(oldp+133,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
        bufp->chgCData(oldp+134,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+135,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
        bufp->chgIData(oldp+136,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+137,(vlSelfRef.CpuTop__DOT__ifu__DOT__io_si_pc_REG),32);
        bufp->chgIData(oldp+138,(vlSelfRef.CpuTop__DOT__ifu__DOT__io_si_inst_REG),32);
    }
    bufp->chgBit(oldp+139,(vlSelfRef.clock));
    bufp->chgBit(oldp+140,(vlSelfRef.reset));
    bufp->chgIData(oldp+141,(vlSelfRef.io_inst),32);
    bufp->chgIData(oldp+142,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+143,(vlSelfRef.io_mem_rdata),32);
    bufp->chgIData(oldp+144,(vlSelfRef.io_mem_addr),32);
    bufp->chgIData(oldp+145,(vlSelfRef.io_mem_wdata),32);
    bufp->chgCData(oldp+146,(vlSelfRef.io_mem_wmask),4);
    bufp->chgBit(oldp+147,(vlSelfRef.io_mem_wen));
    bufp->chgBit(oldp+148,(vlSelfRef.io_mem_ren));
    bufp->chgIData(oldp+149,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+150,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+151,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+152,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+184,(vlSelfRef.io_si_pc),32);
    bufp->chgIData(oldp+185,(vlSelfRef.io_si_inst),32);
    bufp->chgIData(oldp+186,(((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                               ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                   ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                            ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                            : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                               : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                   ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                       ? 0U : vlSelfRef.io_mem_rdata)
                                   : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))),32);
}

void VCpuTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_cleanup\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
