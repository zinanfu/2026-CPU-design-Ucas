// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VCpuTop__Syms.h"


VL_ATTR_COLD void VCpuTop___024root__trace_init_sub__TOP__0(VCpuTop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_init_sub__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"io_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"io_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("CpuTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"io_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"io_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+0,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"casez_tmp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"illegal_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"byte_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCpuTop___024root__trace_init_top(VCpuTop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_init_top\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCpuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCpuTop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VCpuTop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCpuTop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCpuTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VCpuTop___024root__trace_register(VCpuTop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_register\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCpuTop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VCpuTop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VCpuTop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VCpuTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCpuTop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_const_0\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VCpuTop___024root__trace_full_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VCpuTop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_full_0\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VCpuTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCpuTop___024root__trace_full_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_full_0_sub_0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.CpuTop__DOT__rs1_data),32);
    bufp->fullIData(oldp+1,(vlSelfRef.CpuTop__DOT__rs2_data),32);
    bufp->fullCData(oldp+2,(vlSelfRef.CpuTop__DOT__casez_tmp_1),8);
    bufp->fullSData(oldp+3,(vlSelfRef.CpuTop__DOT__byte_1),16);
    bufp->fullIData(oldp+4,(vlSelfRef.CpuTop__DOT__wb_data),32);
    bufp->fullIData(oldp+5,(vlSelfRef.CpuTop__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.CpuTop__DOT__regs_0),32);
    bufp->fullIData(oldp+7,(vlSelfRef.CpuTop__DOT__regs_1),32);
    bufp->fullIData(oldp+8,(vlSelfRef.CpuTop__DOT__regs_2),32);
    bufp->fullIData(oldp+9,(vlSelfRef.CpuTop__DOT__regs_3),32);
    bufp->fullIData(oldp+10,(vlSelfRef.CpuTop__DOT__regs_4),32);
    bufp->fullIData(oldp+11,(vlSelfRef.CpuTop__DOT__regs_5),32);
    bufp->fullIData(oldp+12,(vlSelfRef.CpuTop__DOT__regs_6),32);
    bufp->fullIData(oldp+13,(vlSelfRef.CpuTop__DOT__regs_7),32);
    bufp->fullIData(oldp+14,(vlSelfRef.CpuTop__DOT__regs_8),32);
    bufp->fullIData(oldp+15,(vlSelfRef.CpuTop__DOT__regs_9),32);
    bufp->fullIData(oldp+16,(vlSelfRef.CpuTop__DOT__regs_10),32);
    bufp->fullIData(oldp+17,(vlSelfRef.CpuTop__DOT__regs_11),32);
    bufp->fullIData(oldp+18,(vlSelfRef.CpuTop__DOT__regs_12),32);
    bufp->fullIData(oldp+19,(vlSelfRef.CpuTop__DOT__regs_13),32);
    bufp->fullIData(oldp+20,(vlSelfRef.CpuTop__DOT__regs_14),32);
    bufp->fullIData(oldp+21,(vlSelfRef.CpuTop__DOT__regs_15),32);
    bufp->fullBit(oldp+22,(vlSelfRef.CpuTop__DOT__illegal_seen));
    bufp->fullBit(oldp+23,(vlSelfRef.clock));
    bufp->fullBit(oldp+24,(vlSelfRef.reset));
    bufp->fullIData(oldp+25,(vlSelfRef.io_inst),32);
    bufp->fullIData(oldp+26,(vlSelfRef.io_pc),32);
    bufp->fullIData(oldp+27,(vlSelfRef.io_mem_rdata),32);
    bufp->fullIData(oldp+28,(vlSelfRef.io_mem_addr),32);
    bufp->fullIData(oldp+29,(vlSelfRef.io_mem_wdata),32);
    bufp->fullCData(oldp+30,(vlSelfRef.io_mem_wmask),4);
    bufp->fullBit(oldp+31,(vlSelfRef.io_mem_wen));
    bufp->fullBit(oldp+32,(vlSelfRef.io_mem_ren));
    bufp->fullIData(oldp+33,(((0x00040000U & vlSelfRef.io_inst)
                               ? ((0x00020000U & vlSelfRef.io_inst)
                                   ? ((0x00010000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_15
                                           : vlSelfRef.CpuTop__DOT__regs_14)
                                       : ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_13
                                           : vlSelfRef.CpuTop__DOT__regs_12))
                                   : ((0x00010000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_11
                                           : vlSelfRef.CpuTop__DOT__regs_10)
                                       : ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_9
                                           : vlSelfRef.CpuTop__DOT__regs_8)))
                               : ((0x00020000U & vlSelfRef.io_inst)
                                   ? ((0x00010000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_7
                                           : vlSelfRef.CpuTop__DOT__regs_6)
                                       : ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_5
                                           : vlSelfRef.CpuTop__DOT__regs_4))
                                   : ((0x00010000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_3
                                           : vlSelfRef.CpuTop__DOT__regs_2)
                                       : ((0x00008000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_1
                                           : vlSelfRef.CpuTop__DOT__regs_0))))),32);
    bufp->fullIData(oldp+34,(((0x00800000U & vlSelfRef.io_inst)
                               ? ((0x00400000U & vlSelfRef.io_inst)
                                   ? ((0x00200000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_15
                                           : vlSelfRef.CpuTop__DOT__regs_14)
                                       : ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_13
                                           : vlSelfRef.CpuTop__DOT__regs_12))
                                   : ((0x00200000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_11
                                           : vlSelfRef.CpuTop__DOT__regs_10)
                                       : ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_9
                                           : vlSelfRef.CpuTop__DOT__regs_8)))
                               : ((0x00400000U & vlSelfRef.io_inst)
                                   ? ((0x00200000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_7
                                           : vlSelfRef.CpuTop__DOT__regs_6)
                                       : ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_5
                                           : vlSelfRef.CpuTop__DOT__regs_4))
                                   : ((0x00200000U 
                                       & vlSelfRef.io_inst)
                                       ? ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_3
                                           : vlSelfRef.CpuTop__DOT__regs_2)
                                       : ((0x00100000U 
                                           & vlSelfRef.io_inst)
                                           ? vlSelfRef.CpuTop__DOT__regs_1
                                           : vlSelfRef.CpuTop__DOT__regs_0))))),32);
    bufp->fullIData(oldp+35,(((0x00004000U & vlSelfRef.io_inst)
                               ? ((0x00002000U & vlSelfRef.io_inst)
                                   ? ((0x00001000U 
                                       & vlSelfRef.io_inst)
                                       ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                          & vlSelfRef.CpuTop__DOT__rs2_data)
                                       : (vlSelfRef.CpuTop__DOT__rs1_data 
                                          | vlSelfRef.CpuTop__DOT__rs2_data))
                                   : ((0x00001000U 
                                       & vlSelfRef.io_inst)
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
                                               : vlSelfRef.CpuTop__DOT___GEN_25))
                                       : (vlSelfRef.CpuTop__DOT__rs1_data 
                                          ^ vlSelfRef.CpuTop__DOT__rs2_data)))
                               : ((0x00002000U & vlSelfRef.io_inst)
                                   ? ((0x00001000U 
                                       & vlSelfRef.io_inst)
                                       ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                          < vlSelfRef.CpuTop__DOT__rs2_data)
                                       : VL_LTS_III(32, vlSelfRef.CpuTop__DOT__rs1_data, vlSelfRef.CpuTop__DOT__rs2_data))
                                   : vlSelfRef.CpuTop__DOT___GEN_25))),32);
    bufp->fullIData(oldp+36,(vlSelfRef.CpuTop__DOT__immI),32);
}
