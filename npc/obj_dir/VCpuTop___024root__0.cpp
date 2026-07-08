// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

extern "C" int paddr_read(int addr, int len, svBit is_inst);

void VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, CData/*0:0*/ is_inst, IData/*31:0*/ &paddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    svBit is_inst__Vcvt;
    is_inst__Vcvt = is_inst;
    int paddr_read__Vfuncrtn__Vcvt;
    paddr_read__Vfuncrtn__Vcvt = paddr_read(addr__Vcvt, len__Vcvt, is_inst__Vcvt);
    paddr_read__Vfuncrtn = (paddr_read__Vfuncrtn__Vcvt);
}

extern "C" void paddr_write(int addr, int len, int data, int wmask, svBit is_inst);

void VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrWrite__DOT__paddr_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data, IData/*31:0*/ wmask, CData/*0:0*/ is_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrWrite__DOT__paddr_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int len__Vcvt;
    len__Vcvt = len;
    int data__Vcvt;
    data__Vcvt = data;
    int wmask__Vcvt;
    wmask__Vcvt = wmask;
    svBit is_inst__Vcvt;
    is_inst__Vcvt = is_inst;
    paddr_write(addr__Vcvt, len__Vcvt, data__Vcvt, wmask__Vcvt, is_inst__Vcvt);
}

void VCpuTop___024root___eval_triggers_vec__act(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_triggers_vec__act\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CpuTop__DOT__axiSram__DOT__writeFire__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clock) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__CpuTop__DOT__axiSram__DOT__writeFire__0 
        = vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire;
}

bool VCpuTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VCpuTop___024root___nba_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___nba_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__CpuTop__DOT__reg_valid_2;
    __Vdly__CpuTop__DOT__reg_valid_2 = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__ifu__DOT__pc;
    __Vdly__CpuTop__DOT__ifu__DOT__pc = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__ifu__DOT__outPcReg;
    __Vdly__CpuTop__DOT__ifu__DOT__outPcReg = 0;
    CData/*1:0*/ __Vdly__CpuTop__DOT__ifu__DOT__state;
    __Vdly__CpuTop__DOT__ifu__DOT__state = 0;
    IData/*31:0*/ __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus = 0;
    CData/*1:0*/ __Vdly__CpuTop__DOT__axiArbiter__DOT__state;
    __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 0;
    // Body
    __Vdly__CpuTop__DOT__ifu__DOT__state = vlSelfRef.CpuTop__DOT__ifu__DOT__state;
    __Vdly__CpuTop__DOT__reg_valid_2 = vlSelfRef.CpuTop__DOT__reg_valid_2;
    vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__bvalidreg 
        = vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg;
    vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__bvalidReg 
        = vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg;
    vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__rvalidReg 
        = vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg;
    vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__rvalidReg 
        = vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg;
    __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
        = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    __Vdly__CpuTop__DOT__axiArbiter__DOT__state = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state;
    if (VL_UNLIKELY(((1U & ((((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid) 
                              & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18)) 
                             & (0x10000000U == ((0U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                 ? 
                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1)
                                                  ? vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_14)
                                                  ? 0U
                                                  : vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg)))) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"%c",0,8,(0x000000ffU 
                                            & ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1)
                                                    ? vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data
                                                    : 0U)
                                                : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_14)
                                                    ? 0U
                                                    : vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg))));
    }
    __Vdly__CpuTop__DOT__ifu__DOT__pc = vlSelfRef.CpuTop__DOT__ifu__DOT__pc;
    __Vdly__CpuTop__DOT__ifu__DOT__outPcReg = vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg;
    vlSelfRef.CpuTop__DOT__reg_valid = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)) 
                                            & ((IData)(vlSelfRef.CpuTop__DOT___reg_T) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.CpuTop__DOT___idu_io_in_ready) 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__reg_valid)))));
    vlSelfRef.CpuTop__DOT__reg_valid_1 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && ((~ (IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)) 
                                              & ((IData)(vlSelfRef.CpuTop__DOT___reg_T_1) 
                                                 | ((~ 
                                                     ((IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready) 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1))) 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1)))));
    __Vdly__CpuTop__DOT__reg_valid_2 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((IData)(vlSelfRef.CpuTop__DOT___reg_T_2) 
                                            | ((~ ((IData)(vlSelfRef.CpuTop__DOT___mem_io_in_ready) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2))) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2))));
    vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__bvalidreg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg) 
                                                        & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16)) 
                                                           & ((7U 
                                                               == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                              & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready))))) 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg))));
    vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__bvalidReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid) 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg) 
                                                        & ((~ 
                                                            ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16) 
                                                             | (7U 
                                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))) 
                                                           & ((8U 
                                                               == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                              & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready))))) 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))));
    vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__rvalidReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_ar_valid) 
                                                    & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg))) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg) 
                                                        & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_3)) 
                                                           & ((4U 
                                                               == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                              & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))))) 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg))));
    vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__rvalidReg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg) 
                                                        & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7)) 
                                                           & ((3U 
                                                               == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                              & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))))) 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg))));
    if (vlSelfRef.CpuTop__DOT___reg_T_2) {
        vlSelfRef.CpuTop__DOT__reg_2_mem_addr = (0xfffffffcU 
                                                 & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out);
        if (vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0) {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = ((0x0000ffffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                   << (0x00000010U & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                      << 3U)));
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & ((2U & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                   ? 0x0cU : 3U));
        } else if (vlSelfRef.CpuTop__DOT__exu__DOT___GEN) {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = ((0x000000ffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                   << (0x00000018U & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                      << 3U)));
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & ((IData)(1U) << (3U 
                                                  & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)));
        } else {
            vlSelfRef.CpuTop__DOT__reg_2_mem_wdata 
                = vlSelfRef.CpuTop__DOT__reg_1_mem_wdata;
            vlSelfRef.CpuTop__DOT__reg_2_mem_wmask 
                = (0x0000000fU & (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask));
        }
        vlSelfRef.CpuTop__DOT__reg_2_mem_wen = vlSelfRef.CpuTop__DOT__reg_1_mem_wen;
    }
    vlSelfRef.CpuTop__DOT__reg_valid_3 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
    if (vlSelfRef.CpuTop__DOT___mem_io_out_valid) {
        vlSelfRef.CpuTop__DOT__reg_3_wb_en = vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en;
        if ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))) {
            vlSelfRef.CpuTop__DOT__reg_3_pc = vlSelfRef.CpuTop__DOT__reg_2_pc;
            vlSelfRef.CpuTop__DOT__reg_3_inst = vlSelfRef.CpuTop__DOT__reg_2_inst;
        } else {
            vlSelfRef.CpuTop__DOT__reg_3_pc = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc;
            vlSelfRef.CpuTop__DOT__reg_3_inst = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__CpuTop__DOT__ifu__DOT__state = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 = 0ULL;
        __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus = 0x00001800U;
        __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 0U;
        __Vdly__CpuTop__DOT__ifu__DOT__outPcReg = 0U;
        vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28 = 0U;
    } else {
        if (vlSelfRef.CpuTop__DOT__redirect_valid) {
            __Vdly__CpuTop__DOT__ifu__DOT__state = 
                (3U & (- (IData)((IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN))));
        } else if (vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_0) {
            if (vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_2) {
                __Vdly__CpuTop__DOT__ifu__DOT__state = 1U;
            }
        } else if (vlSelfRef.CpuTop__DOT__ifu__DOT___GEN) {
            if (vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4) {
                __Vdly__CpuTop__DOT__ifu__DOT__state = 2U;
            }
        } else if (((IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__io_out_valid)
                     ? (IData)(vlSelfRef.CpuTop__DOT__ifu_io_out_ready)
                     : ((3U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                        & (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4)))) {
            __Vdly__CpuTop__DOT__ifu__DOT__state = 0U;
        }
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
            = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en)
                ? ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                    ? (((QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64)))
                    : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                        ? (((QData)((IData)((vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
                                             >> 0x20U))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp)))
                        : vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T))
                : vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T);
        if (vlSelfRef.CpuTop__DOT__reg_1_mret) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = (8U | vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus);
        } else if (vlSelfRef.CpuTop__DOT__reg_1_exception) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = (0xfffffff7U & vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus);
        } else if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                    & (0x0300U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN) {
            if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid) {
                if (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) 
                     & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))) {
                    __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 3U;
                }
            } else if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid) {
                if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_6) {
                    __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 2U;
                }
            } else if (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_6))) {
                __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 1U;
            }
        } else if (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_2)
                     ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready))
                     : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3)
                         ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid) 
                            & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready))
                         : (((3U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                             & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid)) 
                            & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready))))) {
            __Vdly__CpuTop__DOT__axiArbiter__DOT__state = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1) 
                      | (~ ((1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                            & (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4))))))) {
            __Vdly__CpuTop__DOT__ifu__DOT__outPcReg 
                = vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg;
        }
        if (vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid) {
            vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg 
                = vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0000001fU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0cU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0bU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0aU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0dU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0eU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x0fU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
        if (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)))) {
            vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28 
                = vlSelfRef.CpuTop__DOT__reg_3_wb_data;
        }
    }
    if (vlSelfRef.CpuTop__DOT___mem_io_out_valid) {
        vlSelfRef.CpuTop__DOT__reg_3_wb_addr = vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr;
        vlSelfRef.CpuTop__DOT__reg_3_wb_data = vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data;
    }
    if (((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
         & ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
             ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
             : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5)))) {
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren 
            = vlSelfRef.CpuTop__DOT__reg_2_mem_ren;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata 
            = vlSelfRef.CpuTop__DOT__reg_2_csr_rdata;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4 
            = vlSelfRef.CpuTop__DOT__reg_2_pc_plus4;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result 
            = vlSelfRef.CpuTop__DOT__reg_2_alu_result;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3 
            = vlSelfRef.CpuTop__DOT__reg_2_mem_funct3;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_en;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_sel;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_addr;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc 
            = vlSelfRef.CpuTop__DOT__reg_2_pc;
        vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst 
            = vlSelfRef.CpuTop__DOT__reg_2_inst;
    }
    if (vlSelfRef.CpuTop__DOT___reg_T_2) {
        vlSelfRef.CpuTop__DOT__reg_2_csr_rdata = vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata;
        vlSelfRef.CpuTop__DOT__reg_2_pc_plus4 = ((IData)(4U) 
                                                 + vlSelfRef.CpuTop__DOT__reg_1_pc);
        vlSelfRef.CpuTop__DOT__reg_2_alu_result = vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out;
        vlSelfRef.CpuTop__DOT__reg_2_mem_funct3 = vlSelfRef.CpuTop__DOT__reg_1_mem_funct3;
        vlSelfRef.CpuTop__DOT__reg_2_wb_en = vlSelfRef.CpuTop__DOT__reg_1_wb_en;
        vlSelfRef.CpuTop__DOT__reg_2_wb_sel = vlSelfRef.CpuTop__DOT__reg_1_wb_sel;
        vlSelfRef.CpuTop__DOT__reg_2_wb_addr = vlSelfRef.CpuTop__DOT__reg_1_wb_addr;
        vlSelfRef.CpuTop__DOT__reg_2_pc = vlSelfRef.CpuTop__DOT__reg_1_pc;
        vlSelfRef.CpuTop__DOT__reg_2_inst = vlSelfRef.CpuTop__DOT__reg_1_inst;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush = 0U;
        vlSelfRef.CpuTop__DOT__xbar__DOT__wstrbReg = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause = 0U;
        __Vdly__CpuTop__DOT__ifu__DOT__pc = 0x80000000U;
        vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg = 0x80000000U;
        vlSelfRef.CpuTop__DOT__mem__DOT__state = 0U;
    } else {
        if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
             & (0x0310U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
             & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid))) {
            vlSelfRef.CpuTop__DOT__xbar__DOT__wstrbReg 
                = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb;
        }
        if (vlSelfRef.CpuTop__DOT__reg_1_exception) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause 
                = vlSelfRef.CpuTop__DOT__reg_1_exception_cause;
        } else if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                    & (0x0342U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (vlSelfRef.CpuTop__DOT__redirect_valid) {
            __Vdly__CpuTop__DOT__ifu__DOT__pc = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
                                                  ? 
                                                 ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                                   : 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                                    : 
                                                   ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                                     ? 
                                                    (0xfffffffeU 
                                                     & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                                     : 0U)))
                                                  : 
                                                 ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst))
                                                    ? 
                                                   (vlSelfRef.CpuTop__DOT__reg_pc 
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
                                                    : 
                                                   ((1U 
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
                                                                  >> 7U))))))))));
        } else if (vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_3) {
            __Vdly__CpuTop__DOT__ifu__DOT__pc = ((IData)(4U) 
                                                 + vlSelfRef.CpuTop__DOT__ifu__DOT__pc);
        }
        if ((1U & (~ ((IData)(vlSelfRef.CpuTop__DOT__redirect_valid) 
                      | (~ (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_3)))))) {
            vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg 
                = vlSelfRef.CpuTop__DOT__ifu__DOT__pc;
        }
        if (vlSelfRef.CpuTop__DOT__mem__DOT___GEN) {
            if (vlSelfRef.CpuTop__DOT__reg_valid_2) {
                if (vlSelfRef.CpuTop__DOT__reg_2_mem_ren) {
                    if (vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4) {
                        vlSelfRef.CpuTop__DOT__mem__DOT__state = 1U;
                    }
                } else if (vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5) {
                    vlSelfRef.CpuTop__DOT__mem__DOT__state = 2U;
                }
            }
        } else if (((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_2)
                     ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready))
                     : (((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_3) 
                         & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready)) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid)))) {
            vlSelfRef.CpuTop__DOT__mem__DOT__state = 0U;
        }
    }
    if (vlSelfRef.CpuTop__DOT___reg_T_2) {
        vlSelfRef.CpuTop__DOT__reg_2_mem_ren = vlSelfRef.CpuTop__DOT__reg_1_mem_ren;
    }
    if (vlSelfRef.CpuTop__DOT___reg_T_1) {
        vlSelfRef.CpuTop__DOT__reg_1_csr_wdata = vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata;
        vlSelfRef.CpuTop__DOT__reg_1_alu_b = vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b;
        vlSelfRef.CpuTop__DOT__reg_1_alu_op = vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op;
        vlSelfRef.CpuTop__DOT__reg_1_csr_zimm = (0x0000001fU 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000fU));
        vlSelfRef.CpuTop__DOT__reg_1_csr_op = (7U & 
                                               (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU));
        if ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))) {
            vlSelfRef.CpuTop__DOT__reg_1_alu_a = vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata;
            vlSelfRef.CpuTop__DOT__reg_1_wb_en = vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9;
        } else {
            vlSelfRef.CpuTop__DOT__reg_1_alu_a = ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst))
                                                    ? vlSelfRef.CpuTop__DOT__reg_pc
                                                    : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata));
            vlSelfRef.CpuTop__DOT__reg_1_wb_en = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                                                  | ((0x63U 
                                                      != 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                     & ((3U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                        | ((0x23U 
                                                            != 
                                                            (0x0000007fU 
                                                             & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                           & ((0x33U 
                                                               == 
                                                               (0x0000007fU 
                                                                & vlSelfRef.CpuTop__DOT__reg_inst))
                                                               ? 
                                                              ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27) 
                                                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9))
                                                               : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))))));
        }
        vlSelfRef.CpuTop__DOT__reg_1_mem_wdata = vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata;
        vlSelfRef.CpuTop__DOT__reg_1_mem_wmask = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                                   ? 0U
                                                   : 
                                                  (0x0000000fU 
                                                   & (- (IData)((IData)(
                                                                        (0x00002023U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSelfRef.CpuTop__DOT__reg_inst)))))));
        vlSelfRef.CpuTop__DOT__reg_1_mem_wen = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                                                & (0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
        vlSelfRef.CpuTop__DOT__reg_1_exception_cause 
            = ((1U & ((~ ((~ (0U != (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x0000000cU)))) 
                          & ((0x73U == (0x0000007fU 
                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                             & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)))) 
                      | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)))
                ? 0U : 0x0bU);
        vlSelfRef.CpuTop__DOT__reg_1_mret = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                                             & (0x18U 
                                                == 
                                                (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000019U)));
        vlSelfRef.CpuTop__DOT__reg_1_is_jalr = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                                                & (0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
        vlSelfRef.CpuTop__DOT__reg_1_mem_funct3 = (
                                                   (1U 
                                                    & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                                       | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU)));
        vlSelfRef.CpuTop__DOT__reg_1_wb_sel = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                                ? 0U
                                                : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16)
                                                    ? 2U
                                                    : 
                                                   ((0x63U 
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
                                                                         >> 0x0000000cU)))))))))));
        vlSelfRef.CpuTop__DOT__reg_1_wb_addr = (0x0000001fU 
                                                & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 7U));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc = 0U;
    } else {
        if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
             & (0x0305U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
        if (vlSelfRef.CpuTop__DOT__reg_1_exception) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc 
                = vlSelfRef.CpuTop__DOT__reg_1_pc;
        } else if (((IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_en) 
                    & (0x0341U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr)))) {
            vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc 
                = vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        }
    }
    if (vlSelfRef.CpuTop__DOT___reg_T_1) {
        vlSelfRef.CpuTop__DOT__reg_1_csr_en = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33));
        vlSelfRef.CpuTop__DOT__reg_1_exception = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10));
        vlSelfRef.CpuTop__DOT__reg_1_csr_addr = (vlSelfRef.CpuTop__DOT__reg_inst 
                                                 >> 0x00000014U);
        vlSelfRef.CpuTop__DOT__reg_1_pc = vlSelfRef.CpuTop__DOT__reg_pc;
        vlSelfRef.CpuTop__DOT__reg_1_inst = vlSelfRef.CpuTop__DOT__reg_inst;
        vlSelfRef.CpuTop__DOT__reg_1_mem_ren = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                                                & (3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    }
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus 
        = __Vdly__CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T 
        = (1ULL + vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64);
    vlSelfRef.io_debug_valid = vlSelfRef.CpuTop__DOT__reg_valid_3;
    vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen = ((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_en) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_3));
    vlSelfRef.io_debug_regs_flat[0U] = 0U;
    vlSelfRef.io_debug_regs_flat[1U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debug_regs_flat[2U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2))));
    vlSelfRef.io_debug_regs_flat[3U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[4U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debug_regs_flat[5U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debug_regs_flat[6U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6))));
    vlSelfRef.io_debug_regs_flat[7U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[8U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debug_regs_flat[9U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debug_regs_flat[10U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10))));
    vlSelfRef.io_debug_regs_flat[11U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[12U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_debug_regs_flat[13U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_debug_regs_flat[14U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14))));
    vlSelfRef.io_debug_regs_flat[15U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[16U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_debug_regs_flat[17U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_debug_regs_flat[18U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18))));
    vlSelfRef.io_debug_regs_flat[19U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[20U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_debug_regs_flat[21U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_debug_regs_flat[22U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22))));
    vlSelfRef.io_debug_regs_flat[23U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[24U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_debug_regs_flat[25U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_debug_regs_flat[26U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26))));
    vlSelfRef.io_debug_regs_flat[27U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[28U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_debug_regs_flat[29U] = vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_debug_regs_flat[30U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30))));
    vlSelfRef.io_debug_regs_flat[31U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__reg_3_pc;
    vlSelfRef.io_debug_inst = vlSelfRef.CpuTop__DOT__reg_3_inst;
    vlSelfRef.CpuTop__DOT__ifu__DOT__pc = __Vdly__CpuTop__DOT__ifu__DOT__pc;
    vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
        = ((8U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
            ? ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                ? 0U : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                         ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                                  ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                                     < vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                                  : VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__reg_1_alu_a, 
                                                   (0x0000001fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_1_alu_b)))))
            : ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           >> (0x0000001fU & vlSelfRef.CpuTop__DOT__reg_1_alu_b))
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           << (0x0000001fU & vlSelfRef.CpuTop__DOT__reg_1_alu_b)))
                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? VL_LTS_III(32, vlSelfRef.CpuTop__DOT__reg_1_alu_a, vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           ^ vlSelfRef.CpuTop__DOT__reg_1_alu_b)))
                : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           | vlSelfRef.CpuTop__DOT__reg_1_alu_b)
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           & vlSelfRef.CpuTop__DOT__reg_1_alu_b))
                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_alu_op))
                        ? ((IData)(1U) + ((~ vlSelfRef.CpuTop__DOT__reg_1_alu_b) 
                                          + vlSelfRef.CpuTop__DOT__reg_1_alu_a))
                        : (vlSelfRef.CpuTop__DOT__reg_1_alu_a 
                           + vlSelfRef.CpuTop__DOT__reg_1_alu_b)))));
    vlSelfRef.CpuTop__DOT__reg_valid_2 = __Vdly__CpuTop__DOT__reg_valid_2;
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT___GEN 
        = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr)));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN = (0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_2 = (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_3 = (2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready 
        = ((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
               | (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready 
        = ((0U != (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
           & (1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)));
    if ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))) {
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_addr;
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en 
            = vlSelfRef.CpuTop__DOT__reg_2_wb_en;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.CpuTop__DOT__reg_2_mem_funct3;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = vlSelfRef.CpuTop__DOT__reg_2_wb_sel;
        vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr 
            = (3U & vlSelfRef.CpuTop__DOT__reg_2_alu_result);
        vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0 = vlSelfRef.CpuTop__DOT__reg_valid_2;
    } else {
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr 
            = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr;
        vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en 
            = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel;
        vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr 
            = (3U & vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result);
        vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0 = 0U;
    }
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                             & (0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wen) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3)));
    vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T 
        = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_en) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1 = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)) 
                                                | ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren))));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
           & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
           & ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)) 
              & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)));
    vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en = 
        ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
         & (1U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)));
    vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata 
        = ((0x0341U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
            ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
            : ((0x0305U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                : ((0x0342U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause
                    : ((0x0f12U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                        ? 0x018d7e72U : ((0x0f11U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                          ? 0x79737978U
                                          : ((0x0b80U 
                                              == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                              ? (IData)(
                                                        (vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64 
                                                         >> 0x00000020U))
                                              : ((0x0b00U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                  ? (IData)(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64)
                                                  : 
                                                 ((0x0310U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                   ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush
                                                   : 
                                                  ((0x0300U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_addr))
                                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus
                                                    : 0U)))))))));
    if (vlSelfRef.CpuTop__DOT___reg_T) {
        vlSelfRef.CpuTop__DOT__reg_pc = vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg;
        vlSelfRef.CpuTop__DOT__reg_inst = vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1) 
                         | (~ ((1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4))))))) {
        vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg 
            = (((1U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                | (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))
                ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_data);
    }
    vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp 
        = ((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
            ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? 0U : ((~ vlSelfRef.CpuTop__DOT__reg_1_csr_zimm) 
                            & vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata))
                : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? (vlSelfRef.CpuTop__DOT__reg_1_csr_zimm 
                       | vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)
                    : vlSelfRef.CpuTop__DOT__reg_1_csr_zimm))
            : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? ((~ vlSelfRef.CpuTop__DOT__reg_1_csr_wdata) 
                       & vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)
                    : (vlSelfRef.CpuTop__DOT__reg_1_csr_wdata 
                       | vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata))
                : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_1_csr_op))
                    ? vlSelfRef.CpuTop__DOT__reg_1_csr_wdata
                    : 0U)));
    vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
            ? vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out
            : ((1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
                ? 0U : ((2U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))
                         ? ((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)
                         : vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata)));
    vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg = __Vdly__CpuTop__DOT__ifu__DOT__outPcReg;
    vlSelfRef.io_si_pc = vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg;
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9 = (1U & 
                                               ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                     >> 0x0000000cU))) 
                                                | ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                        >> 0x0000000cU))) 
                                                   | ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                           >> 0x0000000cU))) 
                                                      | ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x0000000cU))) 
                                                         | ((4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                 >> 0x0000000cU))) 
                                                            | ((6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                    >> 0x0000000cU))) 
                                                               | ((~ 
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                        >> 0x0000000cU)))) 
                                                                  | (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                                         >> 0x0000000cU)))))))))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33 = ((0x73U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10 
        = (IData)((0U == (0xfff00000U & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT__immI = (((- (IData)(
                                                         (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x00000014U));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3 = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000cU)))
                                                ? 6U
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                        >> 0x0000000cU)))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000000cU))) 
                                                     << 1U))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25 = ((3U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31 = ((0x23U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13 
        = ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
           | ((0x37U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
              | ((0x17U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
                 | (0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27 = ((0U 
                                                 == 
                                                 (vlSelfRef.CpuTop__DOT__reg_inst 
                                                  >> 0x00000019U)) 
                                                | (0x20U 
                                                   == 
                                                   (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x00000019U)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16 = ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1 
        = ((0x00080000U & vlSelfRef.CpuTop__DOT__reg_inst)
            ? ((0x00040000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24)))
                : ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16))))
            : ((0x00040000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8)))
                : ((0x00020000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4))
                    : ((0x00010000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2)
                        : ((0x00008000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1
                            : 0U)))));
    vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2 
        = ((0x01000000U & vlSelfRef.CpuTop__DOT__reg_inst)
            ? ((0x00800000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24)))
                : ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16))))
            : ((0x00800000U & vlSelfRef.CpuTop__DOT__reg_inst)
                ? ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8)))
                : ((0x00400000U & vlSelfRef.CpuTop__DOT__reg_inst)
                    ? ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4))
                    : ((0x00200000U & vlSelfRef.CpuTop__DOT__reg_inst)
                        ? ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3
                            : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2)
                        : ((0x00100000U & vlSelfRef.CpuTop__DOT__reg_inst)
                            ? vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1
                            : 0U)))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19 = ((0x37U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (0x17U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x0000000fU)));
    vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2 = ((IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr) 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                       >> 0x00000014U)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13) 
                                                | ((0x67U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | (0x63U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst))));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28 = ((0x33U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20 = ((0x13U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16));
    vlSelfRef.CpuTop__DOT__idu__DOT__stall = ((IData)(vlSelfRef.CpuTop__DOT__reg_valid) 
                                              & (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel))) 
                                                 & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2))));
    vlSelfRef.CpuTop__DOT__ifu__DOT__state = __Vdly__CpuTop__DOT__ifu__DOT__state;
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state = __Vdly__CpuTop__DOT__axiArbiter__DOT__state;
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22) 
                                                | (3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)));
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op 
        = ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
            ? ((3U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                             >> 0x0000000cU))) ? 9U
                : ((2U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x0000000cU))) ? 5U
                    : ((5U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                     >> 0x0000000cU)))
                        ? ((0x20U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                      >> 0x00000019U))
                            ? 8U : ((0U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000019U))
                                     ? 7U : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3)))
                        : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_3))))
            : ((1U & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                      | ((0x63U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)) 
                         | ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28)) 
                            | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)))))
                ? 0U : ((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
                         ? ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                             ? ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                 ? 2U : 3U) : ((0x00001000U 
                                                & vlSelfRef.CpuTop__DOT__reg_inst)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)
                                                    ? 8U
                                                    : 7U)
                                                : 4U))
                         : ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                             ? ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                 ? 9U : 5U) : ((0x00001000U 
                                                & vlSelfRef.CpuTop__DOT__reg_inst)
                                                ? 6U
                                                : (1U 
                                                   & ((~ 
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                            >> 0x0000000cU)))) 
                                                      & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                         >> 0x0000001eU))))))));
    vlSelfRef.io_si_inst = vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg;
    vlSelfRef.CpuTop__DOT__ifu__DOT__io_out_valid = 
        (2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN = (1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_0 = (0U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN = 
        (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_2 
        = (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_3 
        = (2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid)) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_4 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
           | (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32 = ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_31));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1)
            ? ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1)
                ? 0U : (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask))
            : 0U);
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1 
        = ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_4) 
               | (2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))) 
           & (3U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)));
    vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
           & ((~ (0U != (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                               >> 0x0000000cU)))) & 
              (0x73U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))));
}

void VCpuTop___024root___nba_sequent__TOP__1(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___nba_sequent__TOP__1\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrWrite__DOT__paddr_write_TOP(
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                                                                                 ? 0U
                                                                                 : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                                                                                 ? 0U
                                                                                 : vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg))
                                                                                 : 0U), vlSelfRef.CpuTop__DOT__axiSram__DOT____Vcellinp__paddrWrite__len, 
                                                                                ((0U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                                                                                 ? 0U
                                                                                 : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                                                                                 ? 0U
                                                                                 : vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg)), 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                                                                 ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb)
                                                                                 : 0U), 0U);
}

extern const VlUnpacked<IData/*31:0*/, 16> VCpuTop__ConstPool__TABLE_hd4eae056_0;

void VCpuTop___024root___nba_sequent__TOP__2(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___nba_sequent__TOP__2\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg = 0U;
        vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg = 0U;
        vlSelfRef.CpuTop__DOT__xbar__DOT__state = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
             & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid))) {
            vlSelfRef.CpuTop__DOT__xbar__DOT__wdataReg 
                = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data;
        }
        if ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))) {
            if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg 
                    = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr;
            } else if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg 
                    = vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr;
            }
        }
        if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_ready) {
            if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state 
                    = ((0x10000000U == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr)
                        ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18)
                            ? 8U : 6U) : (5U | ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire) 
                                                << 1U)));
            } else if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state 
                    = ((0x10000000U == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr)
                        ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_19)
                            ? 4U : 2U) : (1U | ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid) 
                                                << 1U)));
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_4) {
            if (vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 3U;
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_5) {
            if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_19) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 4U;
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6) {
            if (((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg) 
                 & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 0U;
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_8) {
            if (((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg) 
                 & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 0U;
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_9) {
            if (vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 7U;
            }
        } else if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_12) {
            if (vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18) {
                vlSelfRef.CpuTop__DOT__xbar__DOT__state = 8U;
            }
        } else if (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_15)
                     ? ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready))
                     : (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_17) 
                         & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg)) 
                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready)))) {
            vlSelfRef.CpuTop__DOT__xbar__DOT__state = 0U;
        }
    }
    if (vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1) {
        if (vlSelfRef.CpuTop__DOT__mem__DOT___GEN_1) {
            vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data = 0U;
            vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr = 0U;
        } else {
            vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data 
                = vlSelfRef.CpuTop__DOT__reg_2_mem_wdata;
            vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr 
                = vlSelfRef.CpuTop__DOT__reg_2_mem_addr;
        }
    } else {
        vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_data = 0U;
        vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr = 0U;
    }
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_ready));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid));
    vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg 
        = vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__bvalidreg;
    vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg 
        = vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__bvalidReg;
    vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg 
        = vlSelfRef.__Vdly__CpuTop__DOT__axiSram__DOT__rvalidReg;
    vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg 
        = vlSelfRef.__Vdly__CpuTop__DOT__axiUart__DOT__rvalidReg;
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1 = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) 
                                                & (0x10000000U 
                                                   == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2 = (1U 
                                                & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid)) 
                                                   | (0x10000000U 
                                                      == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_ready 
        = (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6 = (3U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_8 = (4U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_15 = (7U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_17 = (8U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_4 = (1U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_5 = (2U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_9 = (5U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_12 = (6U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2 
        = ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
           | (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2) 
           & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid) 
              & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_1) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_10 = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2) 
                                                 | ((3U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                    | (4U 
                                                       == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7 = ((0U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4 = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready));
    vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5 = ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen) 
                                               & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready)));
    vlSelfRef.CpuTop__DOT___mem_io_in_ready = ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0) 
                                               & ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                                                   ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_ready)
                                                   : 
                                                  ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_ready))));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11 = ((5U 
                                                  != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                 | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_10));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_13 = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_10) 
                                                 | (5U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7)) 
           & ((3U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
               ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg)
               : ((4U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                  & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg))));
    vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_3 
        = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7) 
           | (3U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_data 
        = (((3U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
            | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_7))
            ? 0U : vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg);
    vlSelfRef.CpuTop__DOT___exu_io_in_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid_2)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___mem_io_in_ready)));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_14 = ((6U 
                                                  != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                 | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_13));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_4)) 
           & ((2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
              & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid)));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16 = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_3) 
                                                 | ((4U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                    | ((5U 
                                                        == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                                       | (6U 
                                                          == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))));
    vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata = ((
                                                   (1U 
                                                    != (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))
                                                   ? 0U
                                                   : 
                                                  (((2U 
                                                     != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                    | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_4))
                                                    ? 0U
                                                    : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_data));
    vlSelfRef.CpuTop__DOT___reg_T_2 = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready) 
                                       & (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1));
    vlSelfRef.CpuTop__DOT___exu_io_redirect_valid = 
        ((IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready) 
         & ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_1) 
            & ((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception) 
               | ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr) 
                  | (IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)))));
    vlSelfRef.CpuTop__DOT__idu_io_out_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid_1)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___exu_io_in_ready)));
    if ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))) {
        vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire 
            = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) 
               & (0x10000000U != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_addr));
        vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb 
            = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)
                ? 0U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_strb));
    } else {
        vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire 
            = ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_10)) 
               & (5U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
        vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb 
            = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_11)
                ? 0U : (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__wstrbReg));
    }
    vlSelfRef.__Vtableidx1 = vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb;
    vlSelfRef.CpuTop__DOT__axiSram__DOT____Vcellinp__paddrWrite__len 
        = VCpuTop__ConstPool__TABLE_hd4eae056_0[vlSelfRef.__Vtableidx1];
    vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid 
        = ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
            ? (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_1)
            : ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_13)) 
               & (6U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))));
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_18 = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg)) 
                                                 & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_valid));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_16)) 
           & ((7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
               ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidreg)
               : ((8U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                  & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))));
    vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp = (0x000000ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                      ? vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                       ? 
                                                      (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                       >> 8U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                        >> 0x00000010U)
                                                        : 
                                                       (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                        >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__mem__DOT__load_half = (0x0000ffffU 
                                                  & ((2U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata 
                                                      >> 0x00000010U)
                                                      : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata));
    vlSelfRef.CpuTop__DOT___idu_io_in_ready = ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
    vlSelfRef.CpuTop__DOT___reg_T_1 = ((IData)(vlSelfRef.CpuTop__DOT__idu_io_out_ready) 
                                       & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                                          & (IData)(vlSelfRef.CpuTop__DOT__reg_valid)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid));
    vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data 
        = ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
            ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                ? vlSelfRef.CpuTop__DOT__reg_2_alu_result
                : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result)
            : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                ? (((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                     ? (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren))
                    ? ((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                        ? ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                            ? 0U : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                     ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                     : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                        : ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                            ? ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                ? 0U : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata)
                            : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))
                    : 0U) : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                              ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                  ? vlSelfRef.CpuTop__DOT__reg_2_pc_plus4
                                  : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4)
                              : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                  ? vlSelfRef.CpuTop__DOT__reg_2_csr_rdata
                                  : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata))));
    vlSelfRef.CpuTop__DOT__ifu_io_out_ready = (1U & 
                                               ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                                | (IData)(vlSelfRef.CpuTop__DOT___idu_io_in_ready)));
    vlSelfRef.CpuTop__DOT___mem_io_out_valid = ((0U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                                 ? 
                                                ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_2) 
                                                 & ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)) 
                                                    & (~ (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen))))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                                  ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_valid)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_b_valid))));
    vlSelfRef.CpuTop__DOT___reg_T = ((IData)(vlSelfRef.CpuTop__DOT__ifu_io_out_ready) 
                                     & (2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen 
        = ((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_valid) 
           & (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en));
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x0000000fU)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_1) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x0000000fU))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x0000000fU))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1)))
            : 0U);
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata 
        = ((0U != (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                  >> 0x00000014U)))
            ? (((IData)(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en) 
                & ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___stall_T_2) 
                   & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_addr))))
                ? vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data
                : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen) 
                    & (((IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr) 
                        == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                           >> 0x00000014U))) 
                       & (0U != (IData)(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr))))
                    ? vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data
                    : (((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen) 
                        & (((IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr) 
                            == (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x00000014U))) 
                           & (0U != (IData)(vlSelfRef.CpuTop__DOT__reg_3_wb_addr))))
                        ? vlSelfRef.CpuTop__DOT__reg_3_wb_data
                        : vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2)))
            : 0U);
    vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b = 
        ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
          ? ((5U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                           >> 0x0000000cU))) ? (0x0000001fU 
                                                & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                   >> 0x00000014U))
              : ((1U == (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                               >> 0x0000000cU))) ? 
                 (0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                 >> 0x00000014U)) : vlSelfRef.CpuTop__DOT__idu__DOT__immI))
          : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_19)
              ? (0xfffff000U & vlSelfRef.CpuTop__DOT__reg_inst)
              : ((0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                  ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                  : ((0x67U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                      ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                      : ((0x63U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                          ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata
                          : ((3U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst))
                              ? vlSelfRef.CpuTop__DOT__idu__DOT__immI
                              : ((0x23U == (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst))
                                  ? (((- (IData)((vlSelfRef.CpuTop__DOT__reg_inst 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 7U))))
                                  : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_28)
                                      ? ((5U == (7U 
                                                 & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                    >> 0x0000000cU)))
                                          ? (0x0000001fU 
                                             & vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                          : ((1U == 
                                              (7U & 
                                               (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))
                                              ? (0x0000001fU 
                                                 & vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                              : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))
                                      : vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_0 = ((0x63U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                & ((~ 
                                                    ((0x13U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                     | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17))) 
                                                   & ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                        != vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                             >> 0x0000000cU)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata, vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                              >> 0x0000000cU)))
                                                          ? 
                                                         VL_GTES_III(32, vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata, vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                               >> 0x0000000cU)))
                                                           ? 
                                                          (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                           < vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)
                                                           : (IData)(
                                                                     ((0x00007000U 
                                                                       == 
                                                                       (0x00007000U 
                                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                                      & (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                                         >= vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata)))))))
                                                       : 
                                                      (vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata 
                                                       == vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata))));
    vlSelfRef.CpuTop__DOT__redirect_valid = ((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid) 
                                             | ((~ 
                                                 ((~ (IData)(vlSelfRef.CpuTop__DOT___reg_T_1)) 
                                                  | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                                                & ((0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                   | ((0x67U 
                                                       != 
                                                       (0x0000007fU 
                                                        & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0)))));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1 = ((IData)(vlSelfRef.CpuTop__DOT__redirect_valid) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_1)) 
           & ((1U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
              | ((2U != (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                 & (3U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)))));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_2 = ((((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid))));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr 
        = (((0U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
            | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_aw_valid))
            ? 0U : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid)
                     ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                     : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid)
                         ? vlSelfRef.CpuTop__DOT__ifu__DOT__pc
                         : 0U)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_2) 
           & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
              | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_ar_valid)));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready 
        = ((0U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
               ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready)
               : ((2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                  & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_lsu_r_ready))));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_4 = (((0U 
                                                 != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid))) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready));
    vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_3 = ((0U 
                                                == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state)) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT___GEN_2));
    vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_6 
        = ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid) 
           & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
    vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid)) 
           & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid));
    if ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))) {
        vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_ar_valid 
            = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
               & (0x10000000U == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr));
        vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid 
            = ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
               & (0x10000000U != vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr));
    } else {
        vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_ar_valid 
            = ((1U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
               & (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)));
        vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid 
            = (1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state));
    }
    vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_19 = ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg)) 
                                                 & (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_ar_valid));
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read_TOP(
                                                                                ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_ar_valid)
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                                                 ? 
                                                                                ((1U 
                                                                                & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid) 
                                                                                | ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)) 
                                                                                | (0x10000000U 
                                                                                == vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr))))
                                                                                 ? 0U
                                                                                 : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                                                                 ? vlSelfRef.CpuTop__DOT__xbar__DOT__addrReg
                                                                                 : 0U))
                                                                                 : 0U), 4U, 0U, vlSelfRef.__Vfunc_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read__0__Vfuncout);
    vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data 
        = vlSelfRef.__Vfunc_CpuTop__DOT__axiSram__DOT__paddrRead__DOT__paddr_read__0__Vfuncout;
}

void VCpuTop___024root___eval_nba(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_nba\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCpuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCpuTop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCpuTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void VCpuTop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VCpuTop___024root___eval_phase__act(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__act\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCpuTop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCpuTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VCpuTop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VCpuTop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VCpuTop___024root___eval_phase__nba(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__nba\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VCpuTop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VCpuTop___024root___eval_nba(vlSelf);
        VCpuTop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VCpuTop___024root___eval(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCpuTop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCpuTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("build/CpuTop.sv", 46, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VCpuTop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VCpuTop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VCpuTop___024root___eval_debug_assertions(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_debug_assertions\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
