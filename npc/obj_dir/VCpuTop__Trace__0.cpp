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
        bufp->chgIData(oldp+0,(vlSelfRef.CpuTop__DOT__rs1_data),32);
        bufp->chgIData(oldp+1,(vlSelfRef.CpuTop__DOT__rs2_data),32);
        bufp->chgCData(oldp+2,(vlSelfRef.CpuTop__DOT__casez_tmp_1),8);
        bufp->chgSData(oldp+3,(vlSelfRef.CpuTop__DOT__byte_1),16);
        bufp->chgIData(oldp+4,(vlSelfRef.CpuTop__DOT__wb_data),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelfRef.CpuTop__DOT__pc),32);
        bufp->chgIData(oldp+6,(vlSelfRef.CpuTop__DOT__regs_0),32);
        bufp->chgIData(oldp+7,(vlSelfRef.CpuTop__DOT__regs_1),32);
        bufp->chgIData(oldp+8,(vlSelfRef.CpuTop__DOT__regs_2),32);
        bufp->chgIData(oldp+9,(vlSelfRef.CpuTop__DOT__regs_3),32);
        bufp->chgIData(oldp+10,(vlSelfRef.CpuTop__DOT__regs_4),32);
        bufp->chgIData(oldp+11,(vlSelfRef.CpuTop__DOT__regs_5),32);
        bufp->chgIData(oldp+12,(vlSelfRef.CpuTop__DOT__regs_6),32);
        bufp->chgIData(oldp+13,(vlSelfRef.CpuTop__DOT__regs_7),32);
        bufp->chgIData(oldp+14,(vlSelfRef.CpuTop__DOT__regs_8),32);
        bufp->chgIData(oldp+15,(vlSelfRef.CpuTop__DOT__regs_9),32);
        bufp->chgIData(oldp+16,(vlSelfRef.CpuTop__DOT__regs_10),32);
        bufp->chgIData(oldp+17,(vlSelfRef.CpuTop__DOT__regs_11),32);
        bufp->chgIData(oldp+18,(vlSelfRef.CpuTop__DOT__regs_12),32);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__regs_13),32);
        bufp->chgIData(oldp+20,(vlSelfRef.CpuTop__DOT__regs_14),32);
        bufp->chgIData(oldp+21,(vlSelfRef.CpuTop__DOT__regs_15),32);
        bufp->chgBit(oldp+22,(vlSelfRef.CpuTop__DOT__illegal_seen));
    }
    bufp->chgBit(oldp+23,(vlSelfRef.clock));
    bufp->chgBit(oldp+24,(vlSelfRef.reset));
    bufp->chgIData(oldp+25,(vlSelfRef.io_inst),32);
    bufp->chgIData(oldp+26,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+27,(vlSelfRef.io_mem_rdata),32);
    bufp->chgIData(oldp+28,(vlSelfRef.io_mem_addr),32);
    bufp->chgIData(oldp+29,(vlSelfRef.io_mem_wdata),32);
    bufp->chgCData(oldp+30,(vlSelfRef.io_mem_wmask),4);
    bufp->chgBit(oldp+31,(vlSelfRef.io_mem_wen));
    bufp->chgBit(oldp+32,(vlSelfRef.io_mem_ren));
    bufp->chgIData(oldp+33,(((0x00040000U & vlSelfRef.io_inst)
                              ? ((0x00020000U & vlSelfRef.io_inst)
                                  ? ((0x00010000U & vlSelfRef.io_inst)
                                      ? ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_15
                                          : vlSelfRef.CpuTop__DOT__regs_14)
                                      : ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_13
                                          : vlSelfRef.CpuTop__DOT__regs_12))
                                  : ((0x00010000U & vlSelfRef.io_inst)
                                      ? ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_11
                                          : vlSelfRef.CpuTop__DOT__regs_10)
                                      : ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_9
                                          : vlSelfRef.CpuTop__DOT__regs_8)))
                              : ((0x00020000U & vlSelfRef.io_inst)
                                  ? ((0x00010000U & vlSelfRef.io_inst)
                                      ? ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_7
                                          : vlSelfRef.CpuTop__DOT__regs_6)
                                      : ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_5
                                          : vlSelfRef.CpuTop__DOT__regs_4))
                                  : ((0x00010000U & vlSelfRef.io_inst)
                                      ? ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_3
                                          : vlSelfRef.CpuTop__DOT__regs_2)
                                      : ((0x00008000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_1
                                          : vlSelfRef.CpuTop__DOT__regs_0))))),32);
    bufp->chgIData(oldp+34,(((0x00800000U & vlSelfRef.io_inst)
                              ? ((0x00400000U & vlSelfRef.io_inst)
                                  ? ((0x00200000U & vlSelfRef.io_inst)
                                      ? ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_15
                                          : vlSelfRef.CpuTop__DOT__regs_14)
                                      : ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_13
                                          : vlSelfRef.CpuTop__DOT__regs_12))
                                  : ((0x00200000U & vlSelfRef.io_inst)
                                      ? ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_11
                                          : vlSelfRef.CpuTop__DOT__regs_10)
                                      : ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_9
                                          : vlSelfRef.CpuTop__DOT__regs_8)))
                              : ((0x00400000U & vlSelfRef.io_inst)
                                  ? ((0x00200000U & vlSelfRef.io_inst)
                                      ? ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_7
                                          : vlSelfRef.CpuTop__DOT__regs_6)
                                      : ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_5
                                          : vlSelfRef.CpuTop__DOT__regs_4))
                                  : ((0x00200000U & vlSelfRef.io_inst)
                                      ? ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_3
                                          : vlSelfRef.CpuTop__DOT__regs_2)
                                      : ((0x00100000U 
                                          & vlSelfRef.io_inst)
                                          ? vlSelfRef.CpuTop__DOT__regs_1
                                          : vlSelfRef.CpuTop__DOT__regs_0))))),32);
    bufp->chgIData(oldp+35,(((0x00004000U & vlSelfRef.io_inst)
                              ? ((0x00002000U & vlSelfRef.io_inst)
                                  ? ((0x00001000U & vlSelfRef.io_inst)
                                      ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                         & vlSelfRef.CpuTop__DOT__rs2_data)
                                      : (vlSelfRef.CpuTop__DOT__rs1_data 
                                         | vlSelfRef.CpuTop__DOT__rs2_data))
                                  : ((0x00001000U & vlSelfRef.io_inst)
                                      ? ((0x20U == 
                                          (vlSelfRef.io_inst 
                                           >> 0x00000019U))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.CpuTop__DOT__rs2_data))
                                          : ((0U == 
                                              (vlSelfRef.io_inst 
                                               >> 0x00000019U))
                                              ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                                 >> 
                                                 (0x0000001fU 
                                                  & vlSelfRef.CpuTop__DOT__rs2_data))
                                              : vlSelfRef.CpuTop__DOT___GEN_23))
                                      : (vlSelfRef.CpuTop__DOT__rs1_data 
                                         ^ vlSelfRef.CpuTop__DOT__rs2_data)))
                              : ((0x00002000U & vlSelfRef.io_inst)
                                  ? ((0x00001000U & vlSelfRef.io_inst)
                                      ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                         < vlSelfRef.CpuTop__DOT__rs2_data)
                                      : VL_LTS_III(32, vlSelfRef.CpuTop__DOT__rs1_data, vlSelfRef.CpuTop__DOT__rs2_data))
                                  : vlSelfRef.CpuTop__DOT___GEN_23))),32);
    bufp->chgIData(oldp+36,(vlSelfRef.CpuTop__DOT__immI),32);
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
