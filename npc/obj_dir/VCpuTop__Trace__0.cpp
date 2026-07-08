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
        bufp->chgBit(oldp+0,(vlSelfRef.CpuTop__DOT__redirect_valid));
        bufp->chgIData(oldp+1,(vlSelfRef.CpuTop__DOT__reg_pc),32);
        bufp->chgIData(oldp+2,(vlSelfRef.CpuTop__DOT__reg_inst),32);
        bufp->chgBit(oldp+3,(vlSelfRef.CpuTop__DOT__reg_valid));
        bufp->chgBit(oldp+4,(vlSelfRef.CpuTop__DOT__ifu_io_out_ready));
        bufp->chgIData(oldp+5,(vlSelfRef.CpuTop__DOT__reg_1_pc),32);
        bufp->chgIData(oldp+6,(vlSelfRef.CpuTop__DOT__reg_1_inst),32);
        bufp->chgCData(oldp+7,(vlSelfRef.CpuTop__DOT__reg_1_alu_op),4);
        bufp->chgIData(oldp+8,(vlSelfRef.CpuTop__DOT__reg_1_alu_a),32);
        bufp->chgIData(oldp+9,(vlSelfRef.CpuTop__DOT__reg_1_alu_b),32);
        bufp->chgCData(oldp+10,(vlSelfRef.CpuTop__DOT__reg_1_wb_addr),5);
        bufp->chgBit(oldp+11,(vlSelfRef.CpuTop__DOT__reg_1_wb_en));
        bufp->chgCData(oldp+12,(vlSelfRef.CpuTop__DOT__reg_1_wb_sel),2);
        bufp->chgBit(oldp+13,(vlSelfRef.CpuTop__DOT__reg_1_mem_ren));
        bufp->chgBit(oldp+14,(vlSelfRef.CpuTop__DOT__reg_1_mem_wen));
        bufp->chgCData(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3),3);
        bufp->chgCData(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask),4);
        bufp->chgIData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
        bufp->chgBit(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
        bufp->chgSData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
        bufp->chgCData(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
        bufp->chgIData(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
        bufp->chgIData(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
        bufp->chgBit(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
        bufp->chgBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_1_exception));
        bufp->chgCData(oldp+25,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
        bufp->chgBit(oldp+26,(vlSelfRef.CpuTop__DOT__reg_1_mret));
        bufp->chgBit(oldp+27,(vlSelfRef.CpuTop__DOT__reg_valid_1));
        bufp->chgBit(oldp+28,(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
        bufp->chgIData(oldp+29,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
        bufp->chgIData(oldp+30,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
        bufp->chgIData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
        bufp->chgBit(oldp+32,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
        bufp->chgBit(oldp+33,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
        bufp->chgCData(oldp+34,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
        bufp->chgIData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
        bufp->chgIData(oldp+36,(vlSelfRef.CpuTop__DOT__reg_2_load_addr),32);
        bufp->chgCData(oldp+37,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
        bufp->chgIData(oldp+38,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
        bufp->chgCData(oldp+39,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
        bufp->chgBit(oldp+40,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
        bufp->chgCData(oldp+41,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
        bufp->chgIData(oldp+42,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
        bufp->chgIData(oldp+43,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
        bufp->chgBit(oldp+44,(vlSelfRef.CpuTop__DOT__reg_valid_2));
        bufp->chgBit(oldp+45,(vlSelfRef.CpuTop__DOT___exu_io_in_ready));
        bufp->chgIData(oldp+46,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
        bufp->chgIData(oldp+47,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
        bufp->chgCData(oldp+48,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
        bufp->chgBit(oldp+49,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
        bufp->chgIData(oldp+50,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
        bufp->chgBit(oldp+51,(vlSelfRef.CpuTop__DOT__reg_valid_3));
        bufp->chgIData(oldp+52,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+53,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid));
        bufp->chgBit(oldp+54,(((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                               & ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite) 
                                      | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid))) 
                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid)))));
        bufp->chgIData(oldp+55,((((2U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_5))
                                  ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
        bufp->chgBit(oldp+56,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_5)) 
                               & ((2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid)))));
        bufp->chgBit(oldp+57,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready));
        bufp->chgIData(oldp+58,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr),32);
        bufp->chgBit(oldp+59,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid));
        bufp->chgBit(oldp+60,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_ready));
        bufp->chgIData(oldp+61,((((3U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                  | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_7))
                                  ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
        bufp->chgBit(oldp+62,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid));
        bufp->chgBit(oldp+63,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready));
        bufp->chgIData(oldp+64,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                                  ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                           : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_addr))),32);
        bufp->chgBit(oldp+65,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awFullReg)) 
                               & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
        bufp->chgIData(oldp+67,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                                  ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           ? vlSelfRef.CpuTop__DOT__reg_2_mem_wdata
                                           : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wdata))),32);
        bufp->chgCData(oldp+68,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                                  ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           ? (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask)
                                           : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wmask)))),4);
        bufp->chgBit(oldp+69,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_valid));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wFullReg)) 
                               & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
        bufp->chgBit(oldp+71,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid));
        bufp->chgBit(oldp+72,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready));
        bufp->chgIData(oldp+73,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr),32);
        bufp->chgBit(oldp+74,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id));
        bufp->chgBit(oldp+75,(((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                ? ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite)) 
                                   & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
                                      | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)))
                                : (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
        bufp->chgBit(oldp+76,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg)) 
                               & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_19)) 
                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_ready)))));
        bufp->chgIData(oldp+77,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data),32);
        bufp->chgBit(oldp+78,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid));
        bufp->chgBit(oldp+79,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready));
        bufp->chgIData(oldp+80,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr),32);
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1) 
                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awIdReg))));
        bufp->chgBit(oldp+82,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid));
        bufp->chgBit(oldp+83,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_ready));
        bufp->chgIData(oldp+84,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_11)
                                  ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wDataReg)),32);
        bufp->chgCData(oldp+85,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_11)
                                  ? 0U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wStrbReg))),4);
        bufp->chgBit(oldp+86,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_valid));
        bufp->chgBit(oldp+87,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg)) 
                               & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))));
        bufp->chgBit(oldp+88,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_valid));
        bufp->chgBit(oldp+89,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready));
        bufp->chgCData(oldp+90,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state),3);
        bufp->chgIData(oldp+91,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readAddrReg),32);
        bufp->chgBit(oldp+92,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readIdReg));
        bufp->chgIData(oldp+93,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awAddrReg),32);
        bufp->chgBit(oldp+94,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awIdReg));
        bufp->chgBit(oldp+95,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awFullReg));
        bufp->chgIData(oldp+96,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wDataReg),32);
        bufp->chgCData(oldp+97,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wStrbReg),4);
        bufp->chgBit(oldp+98,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wFullReg));
        bufp->chgBit(oldp+99,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awSentReg));
        bufp->chgBit(oldp+100,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wSentReg));
        bufp->chgBit(oldp+101,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire));
        bufp->chgBit(oldp+102,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memAwFire));
        bufp->chgBit(oldp+103,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memWFire));
        bufp->chgBit(oldp+104,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiAwFire));
        bufp->chgBit(oldp+105,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiWFire));
        bufp->chgBit(oldp+106,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite));
        bufp->chgCData(oldp+107,(((4U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                   ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                       ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_15)
                                       : ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                           ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_15)
                                           : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_12)
                                               ? 5U
                                               : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))))
                                   : ((2U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                           ? (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))
                                               ? 0U
                                               : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                           : (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready))
                                               ? 0U
                                               : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))
                                       : ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                           ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire)
                                               ? (2U 
                                                  | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readIdReg))
                                               : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                           : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite)
                                               ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_0)
                                                   ? 4U
                                                   : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                               : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)
                                                   ? 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire)
                                                    ? 
                                                   (1U 
                                                    | ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                                       << 1U))
                                                    : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                                   : 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_2)
                                                    ? 
                                                   ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire)
                                                     ? 2U
                                                     : 1U)
                                                    : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))))))),3);
        bufp->chgBit(oldp+108,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire));
        bufp->chgIData(oldp+109,(vlSelfRef.CpuTop__DOT__axiClient__DOT__io_axi_ar_addr),32);
        bufp->chgBit(oldp+110,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_18) 
                                    & (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                                 : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_17) 
                                    & (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg))))));
        bufp->chgBit(oldp+111,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__rvalidReg)))));
        bufp->chgIData(oldp+112,(vlSelfRef.CpuTop__DOT__axiClient__DOT__rdataReg),32);
        bufp->chgBit(oldp+113,(vlSelfRef.CpuTop__DOT__axiClient__DOT__rvalidReg));
        bufp->chgBit(oldp+114,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_7)) 
                                & ((4U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
        bufp->chgBit(oldp+115,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_16) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
        bufp->chgBit(oldp+116,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFullReg)) 
                                      & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg))))));
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_16) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
        bufp->chgBit(oldp+118,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFullReg)) 
                                      & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg))))));
        bufp->chgBit(oldp+119,(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg));
        bufp->chgBit(oldp+120,(((~ ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_11) 
                                    | (7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))) 
                                & ((8U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
        bufp->chgQData(oldp+121,(vlSelfRef.CpuTop__DOT__axiClient__DOT__mtime),64);
        bufp->chgBit(oldp+123,(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFullReg));
        bufp->chgBit(oldp+124,(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFullReg));
        bufp->chgBit(oldp+125,(vlSelfRef.CpuTop__DOT__axiClient__DOT__arFire));
        bufp->chgBit(oldp+126,(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFire));
        bufp->chgBit(oldp+127,(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFire));
        bufp->chgBit(oldp+128,(vlSelfRef.CpuTop__DOT__axiClient__DOT__writeFire));
        bufp->chgIData(oldp+129,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_12) 
                                       | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2))
                                       ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                   : (((1U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                       | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6))
                                       ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg))),32);
        bufp->chgBit(oldp+130,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                    & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                                 : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                    & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6)) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg))))));
        bufp->chgBit(oldp+131,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_18) 
                                    & (2U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                                 : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_17) 
                                    & (2U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg))))));
        bufp->chgBit(oldp+132,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg)))));
        bufp->chgIData(oldp+133,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg),32);
        bufp->chgBit(oldp+134,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg));
        bufp->chgBit(oldp+135,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_8)) 
                                & ((2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
        bufp->chgBit(oldp+136,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_15) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
        bufp->chgCData(oldp+137,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb),4);
        bufp->chgBit(oldp+138,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_15) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
        bufp->chgBit(oldp+139,(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg));
        bufp->chgBit(oldp+140,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_21)) 
                                & ((6U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
        bufp->chgBit(oldp+141,(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire));
        bufp->chgCData(oldp+142,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wStrbReg),4);
        bufp->chgIData(oldp+143,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire)
                                   ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                       ? (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_12) 
                                           | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2))
                                           ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                       : (((1U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                           | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6))
                                           ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg))
                                   : 0U)),32);
        bufp->chgBit(oldp+144,(((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                     ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                        & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)) 
                                           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                                     : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                        & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6)) 
                                           & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg))))) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire))));
        bufp->chgIData(oldp+145,(vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+146,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                   ? ((1U & ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))) 
                                             | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite)))
                                       ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                   : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2)
                                       ? vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg
                                       : 0U))),32);
        bufp->chgBit(oldp+147,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                 ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                    & (1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                                 : (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2))));
        bufp->chgBit(oldp+148,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg)))));
        bufp->chgIData(oldp+149,(vlSelfRef.CpuTop__DOT__axiUart__DOT__rdataReg),32);
        bufp->chgBit(oldp+150,(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg));
        bufp->chgBit(oldp+151,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_6)) 
                                & ((3U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
        bufp->chgBit(oldp+152,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_4) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
        bufp->chgCData(oldp+153,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_strb),4);
        bufp->chgBit(oldp+154,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_4) 
                                & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
        bufp->chgBit(oldp+155,(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg));
        bufp->chgBit(oldp+156,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_11)) 
                                & ((7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
        bufp->chgCData(oldp+157,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wStrbReg),4);
        bufp->chgBit(oldp+158,(vlSelfRef.CpuTop__DOT__axiUart__DOT__arFire));
        bufp->chgIData(oldp+159,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__arFire)
                                   ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                       ? ((1U & ((~ 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))) 
                                                 | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite)))
                                           ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                       : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2)
                                           ? vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg
                                           : 0U)) : 0U)),32);
        bufp->chgIData(oldp+160,(vlSelfRef.CpuTop__DOT__axiUart__DOT___paddrRead_data),32);
        bufp->chgIData(oldp+161,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
        bufp->chgIData(oldp+162,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
        bufp->chgCData(oldp+163,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
        bufp->chgIData(oldp+164,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
        bufp->chgIData(oldp+165,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
        bufp->chgIData(oldp+166,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
        bufp->chgBit(oldp+167,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
        bufp->chgIData(oldp+168,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                   : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                       ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                       : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                           ? (0xfffffffeU 
                                              & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                           : 0U)))),32);
        bufp->chgBit(oldp+169,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
        bufp->chgIData(oldp+170,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
        bufp->chgBit(oldp+171,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                                & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
        bufp->chgIData(oldp+172,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
        bufp->chgIData(oldp+173,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+174,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+175,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+176,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
        bufp->chgIData(oldp+178,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+179,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
        bufp->chgBit(oldp+180,(vlSelfRef.CpuTop__DOT___idu_io_in_ready));
        bufp->chgBit(oldp+181,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))));
        bufp->chgCData(oldp+182,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
        bufp->chgIData(oldp+183,(((0x13U == (0x0000007fU 
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
        bufp->chgIData(oldp+184,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
        bufp->chgCData(oldp+185,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+186,(((0x13U == (0x0000007fU 
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
                                                 ? 
                                                ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27) 
                                                 & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9))
                                                 : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33)))))))));
        bufp->chgCData(oldp+187,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                   ? 0U : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16)
                                            ? 2U : 
                                           ((0x63U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                             ? 0U : 
                                            ((3U == 
                                              (0x0000007fU 
                                               & vlSelfRef.CpuTop__DOT__reg_inst))
                                              ? 1U : 
                                             (((0x73U 
                                                != 
                                                (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                               | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31))
                                               ? 0U
                                               : (3U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                    >> 0x0000000cU)))))))))))),2);
        bufp->chgBit(oldp+188,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                                & (3U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+189,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                                & (0x23U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgCData(oldp+190,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                         | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                   ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000cU)))),3);
        bufp->chgCData(oldp+191,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                   ? 0U : (0x0000000fU 
                                           & (- (IData)((IData)(
                                                                (0x00002023U 
                                                                 == 
                                                                 (0x0000707fU 
                                                                  & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
        bufp->chgIData(oldp+192,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
        bufp->chgBit(oldp+193,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))));
        bufp->chgSData(oldp+194,((vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x00000014U)),12);
        bufp->chgCData(oldp+195,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgIData(oldp+196,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
        bufp->chgIData(oldp+197,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000fU))),32);
        bufp->chgBit(oldp+198,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                                & (0x67U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__reg_inst)))));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                                & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10))));
        bufp->chgCData(oldp+200,(((1U & ((~ ((~ (0U 
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
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                                & (0x18U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                             >> 0x00000019U)))));
        bufp->chgBit(oldp+202,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
        bufp->chgBit(oldp+203,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
        bufp->chgCData(oldp+204,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr),5);
        bufp->chgIData(oldp+205,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
        bufp->chgBit(oldp+206,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT___reg_T_1)) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                & ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                   | ((0x67U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1))))));
        bufp->chgIData(oldp+207,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
        bufp->chgIData(oldp+208,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
        bufp->chgIData(oldp+209,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
        bufp->chgIData(oldp+210,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
        bufp->chgIData(oldp+211,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
        bufp->chgIData(oldp+212,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
        bufp->chgIData(oldp+213,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
        bufp->chgIData(oldp+214,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
        bufp->chgIData(oldp+215,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
        bufp->chgIData(oldp+216,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
        bufp->chgIData(oldp+217,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
        bufp->chgIData(oldp+218,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
        bufp->chgIData(oldp+219,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
        bufp->chgIData(oldp+220,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
        bufp->chgIData(oldp+221,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
        bufp->chgIData(oldp+222,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
        bufp->chgIData(oldp+223,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
        bufp->chgIData(oldp+224,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
        bufp->chgIData(oldp+225,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
        bufp->chgIData(oldp+226,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
        bufp->chgIData(oldp+227,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
        bufp->chgIData(oldp+228,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
        bufp->chgIData(oldp+229,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
        bufp->chgIData(oldp+230,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
        bufp->chgIData(oldp+231,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
        bufp->chgIData(oldp+232,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
        bufp->chgIData(oldp+233,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
        bufp->chgIData(oldp+234,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
        bufp->chgIData(oldp+235,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
        bufp->chgIData(oldp+236,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
        bufp->chgIData(oldp+237,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
        bufp->chgIData(oldp+238,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
        bufp->chgIData(oldp+239,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
        bufp->chgCData(oldp+240,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
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
        bufp->chgBit(oldp+241,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
        bufp->chgCData(oldp+242,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgIData(oldp+243,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
        bufp->chgCData(oldp+244,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+245,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
        bufp->chgBit(oldp+246,((2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state))));
        bufp->chgIData(oldp+247,(vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg),32);
        bufp->chgIData(oldp+248,(vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg),32);
        bufp->chgIData(oldp+249,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
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
        bufp->chgIData(oldp+250,(vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg),32);
        bufp->chgCData(oldp+251,(vlSelfRef.CpuTop__DOT__ifu__DOT__state),2);
        bufp->chgBit(oldp+252,(vlSelfRef.CpuTop__DOT___mem_io_in_ready));
        bufp->chgBit(oldp+253,(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
        bufp->chgIData(oldp+254,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   ? vlSelfRef.CpuTop__DOT__reg_2_pc
                                   : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc)),32);
        bufp->chgIData(oldp+255,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   ? vlSelfRef.CpuTop__DOT__reg_2_inst
                                   : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst)),32);
        bufp->chgBit(oldp+256,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en));
        bufp->chgCData(oldp+257,(vlSelfRef.CpuTop__DOT__mem__DOT__state),2);
        bufp->chgIData(oldp+258,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc),32);
        bufp->chgIData(oldp+259,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst),32);
        bufp->chgIData(oldp+260,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result),32);
        bufp->chgBit(oldp+261,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren));
        bufp->chgCData(oldp+262,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3),3);
        bufp->chgIData(oldp+263,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_addr),32);
        bufp->chgIData(oldp+264,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_load_addr),32);
        bufp->chgCData(oldp+265,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wmask),4);
        bufp->chgIData(oldp+266,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wdata),32);
        bufp->chgCData(oldp+267,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr),5);
        bufp->chgBit(oldp+268,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en));
        bufp->chgCData(oldp+269,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel),2);
        bufp->chgIData(oldp+270,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4),32);
        bufp->chgIData(oldp+271,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata),32);
        bufp->chgCData(oldp+272,(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr),2);
        bufp->chgBit(oldp+273,(vlSelfRef.CpuTop__DOT__mem__DOT__awSentReg));
        bufp->chgBit(oldp+274,(vlSelfRef.CpuTop__DOT__mem__DOT__wSentReg));
        bufp->chgIData(oldp+275,(vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata),32);
        bufp->chgCData(oldp+276,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_2)
                                       ? ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                                           ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire)
                                               ? 1U
                                               : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           : ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)
                                               ? 2U
                                               : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))
                                       : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                   : ((1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                       ? (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid) 
                                           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))
                                           ? 0U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                       : ((2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           ? ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5)
                                               ? 3U
                                               : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                           : (((3U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                               & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid)))
                                               ? 0U
                                               : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))))),2);
        bufp->chgCData(oldp+277,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp_0),8);
        bufp->chgIData(oldp+278,(((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                   ? ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                                ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                                : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp_0)))
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
                                                           & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp_0) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp_0)))))),32);
        bufp->chgSData(oldp+279,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
        bufp->chgCData(oldp+280,(vlSelfRef.CpuTop__DOT__xbar__DOT__state),4);
        bufp->chgIData(oldp+281,(vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg),32);
        bufp->chgBit(oldp+282,(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg));
        bufp->chgCData(oldp+283,(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg),2);
        bufp->chgIData(oldp+284,(vlSelfRef.CpuTop__DOT__xbar__DOT__awAddrReg),32);
        bufp->chgBit(oldp+285,(vlSelfRef.CpuTop__DOT__xbar__DOT__awIdReg));
        bufp->chgCData(oldp+286,(vlSelfRef.CpuTop__DOT__xbar__DOT__awTargetReg),2);
        bufp->chgBit(oldp+287,(vlSelfRef.CpuTop__DOT__xbar__DOT__awFullReg));
        bufp->chgIData(oldp+288,(vlSelfRef.CpuTop__DOT__xbar__DOT__wDataReg),32);
        bufp->chgCData(oldp+289,(vlSelfRef.CpuTop__DOT__xbar__DOT__wStrbReg),4);
        bufp->chgBit(oldp+290,(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg));
        bufp->chgBit(oldp+291,(vlSelfRef.CpuTop__DOT__xbar__DOT__awSentReg));
        bufp->chgBit(oldp+292,(vlSelfRef.CpuTop__DOT__xbar__DOT__wSentReg));
        bufp->chgBit(oldp+293,(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite));
        bufp->chgCData(oldp+294,(vlSelfRef.CpuTop__DOT__xbar__DOT__target),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+295,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_addr),32);
        bufp->chgBit(oldp+296,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_id));
        bufp->chgIData(oldp+297,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_data),32);
        bufp->chgIData(oldp+298,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awAddrReg),32);
        bufp->chgBit(oldp+299,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awIdReg));
        bufp->chgBit(oldp+300,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg));
        bufp->chgIData(oldp+301,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wDataReg),32);
        bufp->chgBit(oldp+302,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg));
        bufp->chgBit(oldp+303,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFire));
        bufp->chgBit(oldp+304,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFire));
        bufp->chgCData(oldp+305,(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeStrb),4);
        bufp->chgBit(oldp+306,(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire));
        bufp->chgIData(oldp+307,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)
                                       ? vlSelfRef.CpuTop__DOT__axiSram__DOT__awAddrReg
                                       : vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_addr)
                                   : 0U)),32);
        bufp->chgIData(oldp+308,(vlSelfRef.CpuTop__DOT__axiSram__DOT____Vcellinp__paddrWrite__len),32);
        bufp->chgIData(oldp+309,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg)
                                   ? vlSelfRef.CpuTop__DOT__axiSram__DOT__wDataReg
                                   : vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_data)),32);
        bufp->chgIData(oldp+310,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                   ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeStrb)
                                   : 0U)),32);
        bufp->chgBit(oldp+311,(((~ ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)
                                     ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awIdReg)
                                     : (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_id))) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire))));
        bufp->chgIData(oldp+312,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_addr),32);
        bufp->chgIData(oldp+313,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_data),32);
        bufp->chgIData(oldp+314,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awAddrReg),32);
        bufp->chgBit(oldp+315,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg));
        bufp->chgIData(oldp+316,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wDataReg),32);
        bufp->chgBit(oldp+317,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg));
        bufp->chgBit(oldp+318,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFire));
        bufp->chgBit(oldp+319,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFire));
        bufp->chgCData(oldp+320,(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeStrb),4);
        bufp->chgBit(oldp+321,(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire));
        bufp->chgIData(oldp+322,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire)
                                   ? ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg)
                                       ? vlSelfRef.CpuTop__DOT__axiUart__DOT__awAddrReg
                                       : vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_addr)
                                   : 0U)),32);
        bufp->chgIData(oldp+323,(vlSelfRef.CpuTop__DOT__axiUart__DOT____Vcellinp__paddrWrite__len),32);
        bufp->chgIData(oldp+324,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg)
                                   ? vlSelfRef.CpuTop__DOT__axiUart__DOT__wDataReg
                                   : vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_data)),32);
        bufp->chgIData(oldp+325,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire)
                                   ? (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeStrb)
                                   : 0U)),32);
    }
    bufp->chgBit(oldp+326,(vlSelfRef.clock));
    bufp->chgBit(oldp+327,(vlSelfRef.reset));
    bufp->chgIData(oldp+328,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+329,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+330,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+331,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+363,(vlSelfRef.io_si_pc),32);
    bufp->chgIData(oldp+364,(vlSelfRef.io_si_inst),32);
    bufp->chgBit(oldp+365,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)) 
                                  & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg))))));
    bufp->chgBit(oldp+366,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg)) 
                                  & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg))))));
    bufp->chgBit(oldp+367,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg)) 
                                  & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))))));
    bufp->chgBit(oldp+368,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg)) 
                                  & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))))));
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
