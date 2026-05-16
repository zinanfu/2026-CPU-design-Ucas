// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VAlu__Syms.h"


VL_ATTR_COLD void VAlu___024root__trace_init_sub__TOP__0(VAlu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_init_sub__TOP__0\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VAlu___024root__trace_init_top(VAlu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_init_top\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VAlu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAlu___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VAlu___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VAlu___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VAlu___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VAlu___024root__trace_register(VAlu___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_register\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VAlu___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VAlu___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VAlu___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VAlu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAlu___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_const_0\n"); );
    // Body
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VAlu___024root__trace_full_0_sub_0(VAlu___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VAlu___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_full_0\n"); );
    // Body
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VAlu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAlu___024root__trace_full_0_sub_0(VAlu___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root__trace_full_0_sub_0\n"); );
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clock));
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullIData(oldp+2,(vlSelfRef.io_a),32);
    bufp->fullIData(oldp+3,(vlSelfRef.io_b),32);
    bufp->fullCData(oldp+4,(vlSelfRef.io_op),4);
    bufp->fullIData(oldp+5,(vlSelfRef.io_out),32);
}
