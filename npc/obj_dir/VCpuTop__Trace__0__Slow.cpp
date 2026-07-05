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
    tracep->declBit(c+67,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+72,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->popPrefix();
    tracep->pushPrefix("CpuTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+72,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+0,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"load_offset_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"load_funct3_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"instReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"load_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+31,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"illegal_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"casez_tmp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"load_processed_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+41,0,"io_csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"io_zimm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"io_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"io_mtvec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"io_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"io_exception_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"io_exception_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"io_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"io_mret_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"mstatush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+54,0,"mcycle_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+51,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"old_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instMemory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+0,0,"io_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+0,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsuMem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"io_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"io_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"io_rdata_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("paddrWrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
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

VL_ATTR_COLD void VCpuTop___024root__trace_const_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VCpuTop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_const_0\n"); );
    // Body
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VCpuTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCpuTop___024root__trace_const_0_sub_0(VCpuTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root__trace_const_0_sub_0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+104,(4U),32);
    bufp->fullBit(oldp+105,(1U));
    bufp->fullBit(oldp+106,(0U));
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
    bufp->fullIData(oldp+0,(vlSelfRef.CpuTop__DOT__pc),32);
    bufp->fullCData(oldp+1,(vlSelfRef.CpuTop__DOT__load_offset_reg),2);
    bufp->fullCData(oldp+2,(vlSelfRef.CpuTop__DOT__load_funct3_reg),3);
    bufp->fullCData(oldp+3,(vlSelfRef.CpuTop__DOT__state),2);
    bufp->fullIData(oldp+4,(vlSelfRef.CpuTop__DOT__instReg),32);
    bufp->fullIData(oldp+5,(vlSelfRef.CpuTop__DOT__regs_0),32);
    bufp->fullIData(oldp+6,(vlSelfRef.CpuTop__DOT__regs_1),32);
    bufp->fullIData(oldp+7,(vlSelfRef.CpuTop__DOT__regs_2),32);
    bufp->fullIData(oldp+8,(vlSelfRef.CpuTop__DOT__regs_3),32);
    bufp->fullIData(oldp+9,(vlSelfRef.CpuTop__DOT__regs_4),32);
    bufp->fullIData(oldp+10,(vlSelfRef.CpuTop__DOT__regs_5),32);
    bufp->fullIData(oldp+11,(vlSelfRef.CpuTop__DOT__regs_6),32);
    bufp->fullIData(oldp+12,(vlSelfRef.CpuTop__DOT__regs_7),32);
    bufp->fullIData(oldp+13,(vlSelfRef.CpuTop__DOT__regs_8),32);
    bufp->fullIData(oldp+14,(vlSelfRef.CpuTop__DOT__regs_9),32);
    bufp->fullIData(oldp+15,(vlSelfRef.CpuTop__DOT__regs_10),32);
    bufp->fullIData(oldp+16,(vlSelfRef.CpuTop__DOT__regs_11),32);
    bufp->fullIData(oldp+17,(vlSelfRef.CpuTop__DOT__regs_12),32);
    bufp->fullIData(oldp+18,(vlSelfRef.CpuTop__DOT__regs_13),32);
    bufp->fullIData(oldp+19,(vlSelfRef.CpuTop__DOT__regs_14),32);
    bufp->fullIData(oldp+20,(vlSelfRef.CpuTop__DOT__regs_15),32);
    bufp->fullIData(oldp+21,(vlSelfRef.CpuTop__DOT__casez_tmp),32);
    bufp->fullIData(oldp+22,(vlSelfRef.CpuTop__DOT__rs1_data),32);
    bufp->fullIData(oldp+23,(vlSelfRef.CpuTop__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+24,(vlSelfRef.CpuTop__DOT__rs2_data),32);
    bufp->fullIData(oldp+25,(vlSelfRef.CpuTop__DOT__immI),32);
    bufp->fullIData(oldp+26,((0xfffff000U & vlSelfRef.CpuTop__DOT__instReg)),32);
    bufp->fullBit(oldp+27,(vlSelfRef.CpuTop__DOT__is_load));
    bufp->fullCData(oldp+28,(vlSelfRef.CpuTop__DOT__casez_tmp_1),8);
    bufp->fullIData(oldp+29,(((4U & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
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
                                           << 8U) | (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1)))))),32);
    bufp->fullSData(oldp+30,(vlSelfRef.CpuTop__DOT__load_half),16);
    bufp->fullBit(oldp+31,(vlSelfRef.CpuTop__DOT__illegal));
    bufp->fullBit(oldp+32,(vlSelfRef.CpuTop__DOT__illegal_seen));
    bufp->fullCData(oldp+33,(((0U == (IData)(vlSelfRef.CpuTop__DOT__state))
                               ? 1U : ((1U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                        ? ((IData)(vlSelfRef.CpuTop__DOT__is_load) 
                                           << 1U) : 
                                       ((2U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                         ? 0U : (IData)(vlSelfRef.CpuTop__DOT__state))))),2);
    bufp->fullIData(oldp+34,(vlSelfRef.CpuTop__DOT__load_processed_data),32);
    bufp->fullIData(oldp+35,(vlSelfRef.CpuTop__DOT__wb_data),32);
    bufp->fullIData(oldp+36,(vlSelfRef.CpuTop__DOT__alu__DOT__io_a),32);
    bufp->fullIData(oldp+37,(vlSelfRef.CpuTop__DOT__alu__DOT__io_b),32);
    bufp->fullCData(oldp+38,(vlSelfRef.CpuTop__DOT__alu__DOT__io_op),4);
    bufp->fullIData(oldp+39,(vlSelfRef.CpuTop__DOT__alu__DOT__io_out),32);
    bufp->fullSData(oldp+40,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr),12);
    bufp->fullCData(oldp+41,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op),3);
    bufp->fullIData(oldp+42,(vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data),32);
    bufp->fullIData(oldp+43,(vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm),32);
    bufp->fullBit(oldp+44,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen));
    bufp->fullIData(oldp+45,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata),32);
    bufp->fullIData(oldp+46,(vlSelfRef.CpuTop__DOT__csr__DOT__mtvec),32);
    bufp->fullBit(oldp+47,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception));
    bufp->fullCData(oldp+48,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_29)) 
                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_31)))
                               ? 0U : ((1U == (0x0000000fU 
                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x00000014U)))
                                        ? 3U : ((0U 
                                                 != 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x00000014U)))
                                                 ? 0U
                                                 : 0x0bU)))),4);
    bufp->fullIData(oldp+49,(((1U & ((~ ((IData)(vlSelfRef.CpuTop__DOT___GEN_29) 
                                         & ((~ (0U 
                                                != 
                                                (0x0000000fU 
                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                    >> 0x00000014U)))) 
                                            | (1U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x00000014U)))))) 
                                     | (IData)(vlSelfRef.CpuTop__DOT___GEN_31)))
                               ? 0U : vlSelfRef.CpuTop__DOT__pc)),32);
    bufp->fullBit(oldp+50,(((~ (0U != (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                             >> 0x0000000cU)))) 
                            & ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9) 
                               & ((0x18U == (vlSelfRef.CpuTop__DOT__instReg 
                                             >> 0x00000019U)) 
                                  & (1U == (IData)(vlSelfRef.CpuTop__DOT__state)))))));
    bufp->fullIData(oldp+51,(vlSelfRef.CpuTop__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+52,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatus),32);
    bufp->fullIData(oldp+53,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatush),32);
    bufp->fullQData(oldp+54,(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64),64);
    bufp->fullIData(oldp+56,(vlSelfRef.CpuTop__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+57,(vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp),32);
    bufp->fullIData(oldp+58,(vlSelfRef.CpuTop__DOT___instMemory_io_rdata),32);
    bufp->fullIData(oldp+59,(((IData)(vlSelfRef.CpuTop__DOT___GEN_18)
                               ? 0U : (0xfffffffcU 
                                       & vlSelfRef.CpuTop__DOT___load_addr_T))),32);
    bufp->fullIData(oldp+60,(vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG),32);
    bufp->fullCData(oldp+61,((((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                               | ((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (3U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__instReg))))
                               ? 0U : ((2U == (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU)))
                                        ? 0x0000000fU
                                        : (0x0000000fU 
                                           & ((1U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? ((2U 
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
                                               : ((0U 
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
    bufp->fullIData(oldp+62,((((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                               | ((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (3U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__instReg))))
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
    bufp->fullIData(oldp+63,((((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                               | ((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (3U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__instReg))))
                               ? 0U : ((2U == (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU)))
                                        ? vlSelfRef.CpuTop__DOT__rs2_data
                                        : ((1U == (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU)))
                                            ? (vlSelfRef.CpuTop__DOT__rs2_data 
                                               << (0x00000010U 
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
                                                : (vlSelfRef.CpuTop__DOT__rs2_data 
                                                   << 
                                                   (0x00000018U 
                                                    & ((vlSelfRef.CpuTop__DOT__rs1_data 
                                                        + 
                                                        (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 7U)) 
                                                       << 3U)))))))),32);
    bufp->fullIData(oldp+64,(vlSelfRef.CpuTop__DOT__lsuMem__DOT___paddrRead_data),32);
    bufp->fullIData(oldp+65,((((~ ((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                   | ((0x23U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (3U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg))))) 
                               & ((2U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU))) 
                                  | (0x0000000fU == 
                                     (0x0000000fU & 
                                      ((1U == (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU)))
                                        ? ((2U & (vlSelfRef.CpuTop__DOT__rs1_data 
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
                                            : 3U) : 
                                       ((0U != (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                         ? 0U : ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSelfRef.CpuTop__DOT__rs1_data 
                                                     + 
                                                     (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 7U))))))))))
                               ? 4U : (((0x0cU == (
                                                   ((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                    | ((0x23U 
                                                        != 
                                                        (0x0000007fU 
                                                         & vlSelfRef.CpuTop__DOT__instReg)) 
                                                       | (3U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.CpuTop__DOT__instReg))))
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
                                        | (3U == (((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                   | ((0x23U 
                                                       != 
                                                       (0x0000007fU 
                                                        & vlSelfRef.CpuTop__DOT__instReg)) 
                                                      | (3U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.CpuTop__DOT__instReg))))
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
                                                              >> 7U)))))))))))
                                        ? 2U : (((8U 
                                                  == 
                                                  (((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                    | ((0x23U 
                                                        != 
                                                        (0x0000007fU 
                                                         & vlSelfRef.CpuTop__DOT__instReg)) 
                                                       | (3U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.CpuTop__DOT__instReg))))
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
                                                     (((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                       | ((0x23U 
                                                           != 
                                                           (0x0000007fU 
                                                            & vlSelfRef.CpuTop__DOT__instReg)) 
                                                          | (3U 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.CpuTop__DOT__instReg))))
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
                                                        (((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                          | ((0x23U 
                                                              != 
                                                              (0x0000007fU 
                                                               & vlSelfRef.CpuTop__DOT__instReg)) 
                                                             | (3U 
                                                                == 
                                                                (0x0000007fU 
                                                                 & vlSelfRef.CpuTop__DOT__instReg))))
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
                                                          (((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                                            | ((0x23U 
                                                                != 
                                                                (0x0000007fU 
                                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                                               | (3U 
                                                                  == 
                                                                  (0x0000007fU 
                                                                   & vlSelfRef.CpuTop__DOT__instReg))))
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
    bufp->fullIData(oldp+66,((((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                               | ((0x23U != (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                  | (3U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__instReg))))
                               ? 0U : ((2U == (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU)))
                                        ? 0x0000000fU
                                        : (0x0000000fU 
                                           & ((1U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? ((2U 
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
                                               : ((0U 
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
                                                        >> 7U)))))))))),32);
    bufp->fullBit(oldp+67,(vlSelfRef.clock));
    bufp->fullBit(oldp+68,(vlSelfRef.reset));
    bufp->fullIData(oldp+69,(vlSelfRef.io_debug_pc),32);
    bufp->fullIData(oldp+70,(vlSelfRef.io_debug_inst),32);
    bufp->fullBit(oldp+71,(vlSelfRef.io_debug_valid));
    bufp->fullWData(oldp+72,(vlSelfRef.io_debug_regs_flat),1024);
}
