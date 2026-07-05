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
        bufp->chgBit(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
        bufp->chgSData(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
        bufp->chgCData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
        bufp->chgIData(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
        bufp->chgBit(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
        bufp->chgBit(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_exception));
        bufp->chgCData(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
        bufp->chgBit(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_mret));
        bufp->chgBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_valid_1));
        bufp->chgBit(oldp+25,(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
        bufp->chgIData(oldp+26,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
        bufp->chgIData(oldp+27,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
        bufp->chgIData(oldp+28,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
        bufp->chgBit(oldp+29,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
        bufp->chgBit(oldp+30,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
        bufp->chgCData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
        bufp->chgCData(oldp+32,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
        bufp->chgCData(oldp+33,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
        bufp->chgBit(oldp+34,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
        bufp->chgCData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
        bufp->chgIData(oldp+36,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
        bufp->chgIData(oldp+37,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
        bufp->chgBit(oldp+38,(vlSelfRef.CpuTop__DOT__reg_valid_2));
        bufp->chgBit(oldp+39,(vlSelfRef.CpuTop__DOT___exu_io_in_ready));
        bufp->chgIData(oldp+40,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
        bufp->chgIData(oldp+41,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
        bufp->chgCData(oldp+42,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
        bufp->chgBit(oldp+43,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
        bufp->chgIData(oldp+44,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
        bufp->chgBit(oldp+45,(vlSelfRef.CpuTop__DOT__reg_valid_3));
        bufp->chgIData(oldp+46,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
        bufp->chgIData(oldp+47,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
        bufp->chgBit(oldp+48,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
        bufp->chgBit(oldp+49,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
        bufp->chgBit(oldp+50,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                               & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
        bufp->chgIData(oldp+51,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+52,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+53,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+54,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+55,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
        bufp->chgIData(oldp+57,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+58,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
        bufp->chgBit(oldp+59,(vlSelfRef.CpuTop__DOT___idu_io_in_ready));
        bufp->chgBit(oldp+60,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))));
        bufp->chgCData(oldp+61,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgCData(oldp+62,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 7U))),5);
        bufp->chgBit(oldp+63,(((0x13U == (0x0000007fU 
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
        bufp->chgCData(oldp+64,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
        bufp->chgBit(oldp+65,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                               & (3U == (0x0000007fU 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                               & (0x23U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgCData(oldp+67,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                  ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))),3);
        bufp->chgCData(oldp+68,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                  ? 0U : (0x0000000fU 
                                          & (- (IData)((IData)(
                                                               (0x00002023U 
                                                                == 
                                                                (0x0000707fU 
                                                                 & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
        bufp->chgBit(oldp+69,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))));
        bufp->chgSData(oldp+70,((vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x00000014U)),12);
        bufp->chgCData(oldp+71,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                       >> 0x0000000cU))),3);
        bufp->chgIData(oldp+72,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000fU))),32);
        bufp->chgBit(oldp+73,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                               & (0x67U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10))));
        bufp->chgCData(oldp+75,(((1U & ((~ ((~ (0U 
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
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                               & (0x18U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000019U)))));
        bufp->chgBit(oldp+77,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
        bufp->chgBit(oldp+78,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
        bufp->chgIData(oldp+79,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
        bufp->chgIData(oldp+80,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+81,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+82,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+83,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+84,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+85,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+86,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+87,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+88,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+89,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+90,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+91,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+92,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+93,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+94,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+95,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+96,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+97,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+98,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+99,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+100,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+101,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+102,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+103,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+104,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+105,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+106,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+107,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+108,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+109,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+110,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+111,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
        bufp->chgCData(oldp+112,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
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
        bufp->chgBit(oldp+113,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
        bufp->chgCData(oldp+114,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgIData(oldp+115,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
        bufp->chgCData(oldp+116,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+117,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
        bufp->chgBit(oldp+118,(vlSelfRef.CpuTop__DOT__ifuSram__DOT__rvalidReg));
        bufp->chgIData(oldp+119,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc_reg),32);
        bufp->chgIData(oldp+120,(vlSelfRef.CpuTop__DOT__ifuSram__DOT__rdataReg),32);
        bufp->chgIData(oldp+121,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+122,((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))));
        bufp->chgBit(oldp+123,(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
        bufp->chgBit(oldp+124,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_ar_valid));
        bufp->chgIData(oldp+125,(vlSelfRef.CpuTop__DOT__memSram__DOT__rdataReg),32);
        bufp->chgBit(oldp+126,(vlSelfRef.CpuTop__DOT__memSram__DOT__rvalidReg));
        bufp->chgBit(oldp+127,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_r_ready));
        bufp->chgBit(oldp+128,(vlSelfRef.CpuTop__DOT__memSram__DOT__bvalidreg));
        bufp->chgBit(oldp+129,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_b_ready));
        bufp->chgCData(oldp+130,(vlSelfRef.CpuTop__DOT__mem__DOT__state),2);
        bufp->chgIData(oldp+131,(vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata),32);
        bufp->chgCData(oldp+132,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp),8);
        bufp->chgIData(oldp+133,(((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                   ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                                ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                                : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                                   : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                       ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                           ? 0U : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata)
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
                                               << 8U) 
                                              | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))),32);
        bufp->chgSData(oldp+134,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+135,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
        bufp->chgIData(oldp+136,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                   : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                       ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                       : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                           ? (0xfffffffeU 
                                              & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                           : 0U)))),32);
        bufp->chgIData(oldp+137,(((0x13U == (0x0000007fU 
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
        bufp->chgBit(oldp+138,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                    | ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall) 
                                       | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)))) 
                                & ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                   | ((0x67U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1))))));
        bufp->chgIData(oldp+139,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
                                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)) 
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
        bufp->chgIData(oldp+140,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
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
        bufp->chgIData(oldp+141,(((IData)(vlSelfRef.CpuTop__DOT__redirect_valid)
                                   ? 0U : vlSelfRef.CpuTop__DOT__ifu__DOT__pc)),32);
        bufp->chgIData(oldp+142,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_ar_valid)
                                   ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                   : 0U)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+143,(vlSelfRef.CpuTop__DOT__redirect_valid));
        bufp->chgIData(oldp+144,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
        bufp->chgIData(oldp+145,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
        bufp->chgIData(oldp+146,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
        bufp->chgIData(oldp+147,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
        bufp->chgIData(oldp+148,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
        bufp->chgIData(oldp+149,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
                                   ? ((0x0000ffffU 
                                       & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
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
        bufp->chgIData(oldp+150,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
        bufp->chgIData(oldp+151,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgIData(oldp+152,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
        bufp->chgIData(oldp+153,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
        bufp->chgBit(oldp+154,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)))));
        bufp->chgIData(oldp+155,(vlSelfRef.CpuTop__DOT__ifuSram__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+156,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                   ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_addr)),32);
        bufp->chgBit(oldp+157,(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire));
        bufp->chgIData(oldp+158,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                   ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_wdata)),32);
        bufp->chgCData(oldp+159,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_w_strb),4);
        bufp->chgIData(oldp+160,(vlSelfRef.CpuTop__DOT__memSram__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+161,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire)
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                       ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_addr)
                                   : 0U)),32);
        bufp->chgIData(oldp+162,(vlSelfRef.CpuTop__DOT__memSram__DOT____Vcellinp__paddrWrite__len),32);
        bufp->chgIData(oldp+163,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire)
                                   ? (IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_w_strb)
                                   : 0U)),32);
    }
    bufp->chgBit(oldp+164,(vlSelfRef.clock));
    bufp->chgBit(oldp+165,(vlSelfRef.reset));
    bufp->chgIData(oldp+166,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+167,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+168,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+169,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+201,(vlSelfRef.io_si_pc),32);
    bufp->chgIData(oldp+202,(vlSelfRef.io_si_inst),32);
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
