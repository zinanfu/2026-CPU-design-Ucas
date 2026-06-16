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
        bufp->chgIData(oldp+0,(vlSelfRef.CpuTop__DOT__immI),32);
        bufp->chgBit(oldp+1,(vlSelfRef.CpuTop__DOT__illegal));
        bufp->chgCData(oldp+2,(vlSelfRef.CpuTop__DOT__alu__DOT__io_op),4);
        bufp->chgSData(oldp+3,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_addr),12);
        bufp->chgCData(oldp+4,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op),3);
        bufp->chgIData(oldp+5,(vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm),32);
        bufp->chgBit(oldp+6,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen));
        bufp->chgBit(oldp+7,(vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+8,(vlSelfRef.CpuTop__DOT__casez_tmp),32);
        bufp->chgIData(oldp+9,(vlSelfRef.CpuTop__DOT__rs1_data),32);
        bufp->chgIData(oldp+10,(vlSelfRef.CpuTop__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+11,(vlSelfRef.CpuTop__DOT__rs2_data),32);
        bufp->chgCData(oldp+12,(vlSelfRef.CpuTop__DOT__casez_tmp_1),8);
        bufp->chgSData(oldp+13,(vlSelfRef.CpuTop__DOT__byte_1),16);
        bufp->chgIData(oldp+14,(vlSelfRef.CpuTop__DOT__wb_data),32);
        bufp->chgIData(oldp+15,(vlSelfRef.CpuTop__DOT__alu__DOT__io_a),32);
        bufp->chgIData(oldp+16,(vlSelfRef.CpuTop__DOT__alu__DOT__io_b),32);
        bufp->chgIData(oldp+17,(vlSelfRef.CpuTop__DOT__alu__DOT__io_out),32);
        bufp->chgIData(oldp+18,(vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data),32);
        bufp->chgIData(oldp+19,(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata),32);
        bufp->chgIData(oldp+20,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_29)))
                                  ? 0U : vlSelfRef.CpuTop__DOT__pc)),32);
        bufp->chgIData(oldp+21,(vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+22,(vlSelfRef.CpuTop__DOT__pc),32);
        bufp->chgIData(oldp+23,(vlSelfRef.CpuTop__DOT__regs_0),32);
        bufp->chgIData(oldp+24,(vlSelfRef.CpuTop__DOT__regs_1),32);
        bufp->chgIData(oldp+25,(vlSelfRef.CpuTop__DOT__regs_2),32);
        bufp->chgIData(oldp+26,(vlSelfRef.CpuTop__DOT__regs_3),32);
        bufp->chgIData(oldp+27,(vlSelfRef.CpuTop__DOT__regs_4),32);
        bufp->chgIData(oldp+28,(vlSelfRef.CpuTop__DOT__regs_5),32);
        bufp->chgIData(oldp+29,(vlSelfRef.CpuTop__DOT__regs_6),32);
        bufp->chgIData(oldp+30,(vlSelfRef.CpuTop__DOT__regs_7),32);
        bufp->chgIData(oldp+31,(vlSelfRef.CpuTop__DOT__regs_8),32);
        bufp->chgIData(oldp+32,(vlSelfRef.CpuTop__DOT__regs_9),32);
        bufp->chgIData(oldp+33,(vlSelfRef.CpuTop__DOT__regs_10),32);
        bufp->chgIData(oldp+34,(vlSelfRef.CpuTop__DOT__regs_11),32);
        bufp->chgIData(oldp+35,(vlSelfRef.CpuTop__DOT__regs_12),32);
        bufp->chgIData(oldp+36,(vlSelfRef.CpuTop__DOT__regs_13),32);
        bufp->chgIData(oldp+37,(vlSelfRef.CpuTop__DOT__regs_14),32);
        bufp->chgIData(oldp+38,(vlSelfRef.CpuTop__DOT__regs_15),32);
        bufp->chgBit(oldp+39,(vlSelfRef.CpuTop__DOT__illegal_seen));
        bufp->chgIData(oldp+40,(vlSelfRef.CpuTop__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+41,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatus),32);
        bufp->chgIData(oldp+42,(vlSelfRef.CpuTop__DOT__csr__DOT__mstatush),32);
        bufp->chgQData(oldp+43,(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64),64);
    }
    bufp->chgBit(oldp+45,(vlSelfRef.clock));
    bufp->chgBit(oldp+46,(vlSelfRef.reset));
    bufp->chgIData(oldp+47,(vlSelfRef.io_inst),32);
    bufp->chgIData(oldp+48,(vlSelfRef.io_pc),32);
    bufp->chgIData(oldp+49,(vlSelfRef.io_mem_rdata),32);
    bufp->chgIData(oldp+50,(vlSelfRef.io_mem_addr),32);
    bufp->chgIData(oldp+51,(vlSelfRef.io_mem_wdata),32);
    bufp->chgCData(oldp+52,(vlSelfRef.io_mem_wmask),4);
    bufp->chgBit(oldp+53,(vlSelfRef.io_mem_wen));
    bufp->chgBit(oldp+54,(vlSelfRef.io_mem_ren));
    bufp->chgIData(oldp+55,(vlSelfRef.io_debug_pc),32);
    bufp->chgIData(oldp+56,(vlSelfRef.io_debug_inst),32);
    bufp->chgBit(oldp+57,(vlSelfRef.io_debug_valid));
    bufp->chgWData(oldp+58,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->chgIData(oldp+90,((0xfffff000U & vlSelfRef.io_inst)),32);
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
