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
        bufp->chgIData(oldp+0,(vlSelfRef.CpuTop__DOT__reg_pc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.CpuTop__DOT__reg_inst),32);
        bufp->chgBit(oldp+2,(vlSelfRef.CpuTop__DOT__reg_valid));
        bufp->chgIData(oldp+3,(vlSelfRef.CpuTop__DOT__reg_1_pc),32);
        bufp->chgIData(oldp+4,(vlSelfRef.CpuTop__DOT__reg_1_inst),32);
        bufp->chgCData(oldp+5,(vlSelfRef.CpuTop__DOT__reg_1_alu_op),4);
        bufp->chgIData(oldp+6,(vlSelfRef.CpuTop__DOT__reg_1_alu_a),32);
        bufp->chgIData(oldp+7,(vlSelfRef.CpuTop__DOT__reg_1_alu_b),32);
        bufp->chgCData(oldp+8,(vlSelfRef.CpuTop__DOT__reg_1_wb_addr),5);
        bufp->chgBit(oldp+9,(vlSelfRef.CpuTop__DOT__reg_1_wb_en));
        bufp->chgCData(oldp+10,(vlSelfRef.CpuTop__DOT__reg_1_wb_sel),2);
        bufp->chgBit(oldp+11,(vlSelfRef.CpuTop__DOT__reg_1_mem_ren));
        bufp->chgBit(oldp+12,(vlSelfRef.CpuTop__DOT__reg_1_mem_wen));
        bufp->chgCData(oldp+13,(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3),3);
        bufp->chgCData(oldp+14,(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask),4);
        bufp->chgIData(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
        bufp->chgBit(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
        bufp->chgSData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
        bufp->chgCData(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
        bufp->chgIData(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
        bufp->chgBit(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
        bufp->chgBit(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_exception));
        bufp->chgCData(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
        bufp->chgBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_1_mret));
        bufp->chgBit(oldp+25,(vlSelfRef.CpuTop__DOT__reg_valid_1));
        bufp->chgIData(oldp+26,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
        bufp->chgIData(oldp+27,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
        bufp->chgIData(oldp+28,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
        bufp->chgBit(oldp+29,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
        bufp->chgBit(oldp+30,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
        bufp->chgCData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
        bufp->chgIData(oldp+32,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
        bufp->chgCData(oldp+33,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
        bufp->chgIData(oldp+34,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
        bufp->chgCData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
        bufp->chgBit(oldp+36,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
        bufp->chgCData(oldp+37,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
        bufp->chgIData(oldp+38,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
        bufp->chgIData(oldp+39,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
        bufp->chgBit(oldp+40,(vlSelfRef.CpuTop__DOT__reg_valid_2));
        bufp->chgIData(oldp+41,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
        bufp->chgIData(oldp+42,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
        bufp->chgCData(oldp+43,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
        bufp->chgBit(oldp+44,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
        bufp->chgIData(oldp+45,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
        bufp->chgBit(oldp+46,(vlSelfRef.CpuTop__DOT__reg_valid_3));
        bufp->chgIData(oldp+47,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+48,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)
                                  ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                  : 0U)),32);
        bufp->chgBit(oldp+49,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid));
        bufp->chgBit(oldp+50,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready));
        bufp->chgIData(oldp+51,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1)
                                  ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_addr)),32);
        bufp->chgBit(oldp+52,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid));
        bufp->chgIData(oldp+53,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1)
                                  ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_wdata)),32);
        bufp->chgCData(oldp+54,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1)
                                  ? 0U : (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask))),4);
        bufp->chgBit(oldp+55,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready));
        bufp->chgCData(oldp+56,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state),2);
        bufp->chgIData(oldp+57,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg),32);
        bufp->chgIData(oldp+58,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
        bufp->chgIData(oldp+59,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
        bufp->chgCData(oldp+60,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
        bufp->chgIData(oldp+61,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
        bufp->chgIData(oldp+62,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
        bufp->chgIData(oldp+63,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
        bufp->chgIData(oldp+64,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                  ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                  : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                      ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                      : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                          ? (0xfffffffeU 
                                             & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                          : 0U)))),32);
        bufp->chgBit(oldp+65,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
        bufp->chgIData(oldp+66,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                               & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
        bufp->chgIData(oldp+68,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+69,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+70,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+71,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+72,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
        bufp->chgIData(oldp+74,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+75,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
        bufp->chgBit(oldp+76,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))));
        bufp->chgCData(oldp+77,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgCData(oldp+78,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 7U))),5);
        bufp->chgBit(oldp+79,(((0x13U == (0x0000007fU 
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
                                                : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33)))))))));
        bufp->chgCData(oldp+80,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
                                                      | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31))
                                                      ? 0U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                        >> 0x0000000cU)))))))))))),2);
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                               & (3U == (0x0000007fU 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                               & (0x23U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgCData(oldp+83,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                  ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))),3);
        bufp->chgCData(oldp+84,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                  ? 0U : (0x0000000fU 
                                          & (- (IData)((IData)(
                                                               (0x00002023U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
        bufp->chgBit(oldp+85,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))));
        bufp->chgSData(oldp+86,((vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x00000014U)),12);
        bufp->chgCData(oldp+87,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                       >> 0x0000000cU))),3);
        bufp->chgIData(oldp+88,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000fU))),32);
        bufp->chgBit(oldp+89,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                               & (0x67U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10))));
        bufp->chgCData(oldp+91,(((1U & ((~ ((~ (0U 
                                                != 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000cU)))) 
                                            & ((0x73U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)))) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)))
                                  ? 0U : 0x0bU)),4);
        bufp->chgBit(oldp+92,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                               & (0x18U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000019U)))));
        bufp->chgBit(oldp+93,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
        bufp->chgCData(oldp+94,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr),5);
        bufp->chgIData(oldp+95,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+96,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+97,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+98,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+99,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+100,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+101,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+102,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+103,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+104,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+105,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+106,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+107,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+108,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+109,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+110,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+111,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+112,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+113,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+114,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+115,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+116,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+117,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+118,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+119,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+120,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+121,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+122,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+123,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+124,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+125,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+126,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
        bufp->chgCData(oldp+127,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
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
        bufp->chgBit(oldp+128,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
        bufp->chgCData(oldp+129,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgIData(oldp+130,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
        bufp->chgCData(oldp+131,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+132,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
        bufp->chgBit(oldp+133,((2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state))));
        bufp->chgIData(oldp+134,(vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg),32);
        bufp->chgIData(oldp+135,(vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg),32);
        bufp->chgIData(oldp+136,(vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg),32);
        bufp->chgCData(oldp+137,(vlSelfRef.CpuTop__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+138,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   ? vlSelfRef.CpuTop__DOT__reg_2_pc
                                   : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc)),32);
        bufp->chgIData(oldp+139,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   ? vlSelfRef.CpuTop__DOT__reg_2_inst
                                   : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst)),32);
        bufp->chgBit(oldp+140,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en));
        bufp->chgCData(oldp+141,(vlSelfRef.CpuTop__DOT__mem__DOT__state),2);
        bufp->chgIData(oldp+142,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc),32);
        bufp->chgIData(oldp+143,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst),32);
        bufp->chgIData(oldp+144,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result),32);
        bufp->chgBit(oldp+145,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren));
        bufp->chgCData(oldp+146,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3),3);
        bufp->chgCData(oldp+147,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr),5);
        bufp->chgBit(oldp+148,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en));
        bufp->chgCData(oldp+149,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel),2);
        bufp->chgIData(oldp+150,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4),32);
        bufp->chgIData(oldp+151,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata),32);
        bufp->chgCData(oldp+152,(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr),2);
        bufp->chgCData(oldp+153,(vlSelfRef.CpuTop__DOT__xbar__DOT__wstrbReg),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+154,(((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid))) 
                                & ((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                   & ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                      & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid))))));
        bufp->chgIData(oldp+155,((((1U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                   | (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))
                                   ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
        bufp->chgBit(oldp+156,(((0U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                & ((1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid)))));
        bufp->chgIData(oldp+157,((((2U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3))
                                   ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
        bufp->chgIData(oldp+158,(((0x13U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__reg_inst))
                                   ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata
                                   : ((0x37U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                       ? 0U : ((0x17U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                                ? vlSelfRef.CpuTop__DOT__reg_pc
                                                : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata)))),32);
        bufp->chgBit(oldp+159,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT___reg_T_1)) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                & ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                   | ((0x67U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0))))));
        bufp->chgIData(oldp+160,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                   ? 0U : ((0x6fU == 
                                            (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__reg_inst))
                                            ? (vlSelfRef.CpuTop__DOT__reg_pc 
                                               + ((
                                                   (- (IData)(
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
                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0)) 
                                                   | (0x67U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst))))
                                                ? 0U
                                                : (vlSelfRef.CpuTop__DOT__reg_pc 
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
                                                                >> 7U)))))))))),32);
        bufp->chgIData(oldp+161,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
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
                                                == 
                                                (0x0000007fU 
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
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0)) 
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
        bufp->chgIData(oldp+162,(((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                   ? ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                                ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                                : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                                   : ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                       ? ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                           ? 0U : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata)
                                       : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
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
                                               << 8U) 
                                              | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+163,(vlSelfRef.CpuTop__DOT__redirect_valid));
        bufp->chgBit(oldp+164,(vlSelfRef.CpuTop__DOT__ifu_io_out_ready));
        bufp->chgBit(oldp+165,(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
        bufp->chgBit(oldp+166,(vlSelfRef.CpuTop__DOT___exu_io_in_ready));
        bufp->chgBit(oldp+167,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid));
        bufp->chgBit(oldp+168,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready));
        bufp->chgBit(oldp+169,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_ready));
        bufp->chgBit(oldp+170,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid));
        bufp->chgBit(oldp+171,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_ready));
        bufp->chgBit(oldp+172,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid));
        bufp->chgIData(oldp+173,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr),32);
        bufp->chgBit(oldp+174,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id));
        bufp->chgBit(oldp+175,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_valid));
        bufp->chgBit(oldp+176,((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))));
        bufp->chgIData(oldp+177,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data),32);
        bufp->chgBit(oldp+178,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid));
        bufp->chgBit(oldp+179,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready));
        bufp->chgIData(oldp+180,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr),32);
        bufp->chgBit(oldp+181,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_id));
        bufp->chgBit(oldp+182,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid));
        bufp->chgIData(oldp+183,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_data),32);
        bufp->chgCData(oldp+184,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_strb),4);
        bufp->chgBit(oldp+185,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_valid));
        bufp->chgBit(oldp+186,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready));
        bufp->chgIData(oldp+187,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((1U & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid) 
                                             | ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_valid)) 
                                                | (0x10000000U 
                                                   == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr))))
                                       ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                   : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                       ? vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg
                                       : 0U))),32);
        bufp->chgBit(oldp+188,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                    & ((0x10000000U 
                                        != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                                 : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                    & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__idReg)))));
        bufp->chgBit(oldp+189,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid));
        bufp->chgBit(oldp+190,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg));
        bufp->chgBit(oldp+191,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7)) 
                                & ((3U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
        bufp->chgIData(oldp+192,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                                       ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr)
                                   : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                                       ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg))),32);
        bufp->chgBit(oldp+193,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid) 
                                    & ((0x10000000U 
                                        != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_id)))
                                 : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_3) 
                                    & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__idReg)))));
        bufp->chgBit(oldp+194,(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire));
        bufp->chgIData(oldp+195,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                                       ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_data)
                                   : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                                       ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg))),32);
        bufp->chgCData(oldp+196,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb),4);
        bufp->chgBit(oldp+197,(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg));
        bufp->chgBit(oldp+198,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16)) 
                                & ((7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
        bufp->chgIData(oldp+199,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid)
                                   ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                       ? ((1U & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid) 
                                                 | ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_valid)) 
                                                    | (0x10000000U 
                                                       == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr))))
                                           ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                       : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                           ? vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg
                                           : 0U)) : 0U)),32);
        bufp->chgBit(oldp+200,(((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                     ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                        & ((0x10000000U 
                                            != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr) 
                                           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                                     : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                        & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__idReg)))) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid))));
        bufp->chgIData(oldp+201,(vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+202,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                   ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                       ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                                           ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr)
                                       : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                                           ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg))
                                   : 0U)),32);
        bufp->chgIData(oldp+203,(vlSelfRef.CpuTop__DOT__axiSram__DOT____Vcellinp__paddrWrite__len),32);
        bufp->chgIData(oldp+204,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                   ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb)
                                   : 0U)),32);
        bufp->chgBit(oldp+205,(((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                     ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid) 
                                        & ((0x10000000U 
                                            != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr) 
                                           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_id)))
                                     : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_3) 
                                        & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__idReg)))) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire))));
        bufp->chgBit(oldp+206,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_ar_valid));
        bufp->chgBit(oldp+207,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg)))));
        bufp->chgBit(oldp+208,(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg));
        bufp->chgBit(oldp+209,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_4)) 
                                & ((4U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
        bufp->chgIData(oldp+210,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1)
                                       ? vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr
                                       : 0U) : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_14)
                                                 ? 0U
                                                 : vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg))),32);
        bufp->chgBit(oldp+211,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid));
        bufp->chgBit(oldp+212,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg)))));
        bufp->chgIData(oldp+213,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1)
                                       ? vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_data
                                       : 0U) : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_14)
                                                 ? 0U
                                                 : vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg))),32);
        bufp->chgBit(oldp+214,(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg));
        bufp->chgBit(oldp+215,(((~ ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16) 
                                    | (7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))) 
                                & ((8U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
        bufp->chgBit(oldp+216,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18))));
        bufp->chgBit(oldp+217,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
        bufp->chgBit(oldp+218,(vlSelfRef.CpuTop__DOT___idu_io_in_ready));
        bufp->chgIData(oldp+219,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgIData(oldp+220,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
        bufp->chgIData(oldp+221,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
        bufp->chgBit(oldp+222,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
        bufp->chgIData(oldp+223,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
        bufp->chgBit(oldp+224,(vlSelfRef.CpuTop__DOT___mem_io_in_ready));
        bufp->chgBit(oldp+225,(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
        bufp->chgIData(oldp+226,(vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata),32);
        bufp->chgCData(oldp+227,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp),8);
        bufp->chgSData(oldp+228,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
        bufp->chgCData(oldp+229,(vlSelfRef.CpuTop__DOT__xbar__DOT__state),4);
        bufp->chgIData(oldp+230,(vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg),32);
        bufp->chgBit(oldp+231,(vlSelfRef.CpuTop__DOT__xbar__DOT__idReg));
        bufp->chgIData(oldp+232,(vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg),32);
    }
    bufp->chgBit(oldp+233,(vlSelfRef.clock));
    bufp->chgBit(oldp+234,(vlSelfRef.reset));
    bufp->chgIData(oldp+235,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+236,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+237,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+238,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+270,(vlSelfRef.io_si_pc),32);
    bufp->chgIData(oldp+271,(vlSelfRef.io_si_inst),32);
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
