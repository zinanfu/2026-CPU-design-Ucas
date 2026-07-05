// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

VL_ATTR_COLD void VCpuTop___024root___eval_static(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_static\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VCpuTop___024root___eval_initial(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_initial\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VCpuTop___024root___eval_final(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_final\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCpuTop___024root___eval_phase__stl(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop___024root___eval_settle(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_settle\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCpuTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("build/CpuTop.sv", 55, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VCpuTop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VCpuTop___024root___eval_triggers_vec__stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_triggers_vec__stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VCpuTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VCpuTop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VCpuTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___trigger_anySet__stl\n"); );
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

void VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, CData/*0:0*/ is_inst, IData/*31:0*/ &paddr_read__Vfuncrtn);
void VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__lsuMem__DOT__paddrWrite__DOT__paddr_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data, IData/*31:0*/ wmask, CData/*0:0*/ is_inst);

VL_ATTR_COLD void VCpuTop___024root___stl_sequent__TOP__0(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___stl_sequent__TOP__0\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.CpuTop__DOT__pc;
    vlSelfRef.io_debug_inst = vlSelfRef.CpuTop__DOT__instReg;
    vlSelfRef.CpuTop__DOT___GEN = (0x13U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_0 = (6U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x0000000cU)));
    vlSelfRef.CpuTop__DOT___GEN_1 = (4U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x0000000cU)));
    vlSelfRef.CpuTop__DOT___GEN_2 = (1U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x0000000cU)));
    vlSelfRef.CpuTop__DOT___GEN_3 = (5U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x0000000cU)));
    vlSelfRef.CpuTop__DOT___GEN_4 = (0U == (vlSelfRef.CpuTop__DOT__instReg 
                                            >> 0x00000019U));
    vlSelfRef.CpuTop__DOT___GEN_12 = (0x6fU == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_13 = (0x67U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_14 = (0x63U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_16 = (3U == (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_28 = (0x73U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg));
    vlSelfRef.CpuTop__DOT___GEN_33 = (0x18U == (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x00000019U));
    vlSelfRef.CpuTop__DOT___GEN_39 = (((- (IData)((vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | ((0x00000800U 
                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                             << 4U)) 
                                         | ((0x000007e0U 
                                             & (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x00000014U)) 
                                            | (0x0000001eU 
                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 7U)))));
    vlSelfRef.CpuTop__DOT___wb_data_T_11 = ((IData)(4U) 
                                            + vlSelfRef.CpuTop__DOT__pc);
    vlSelfRef.CpuTop__DOT__csr__DOT___mcycle_64_T = 
        (1ULL + vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64);
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read_TOP(vlSelfRef.CpuTop__DOT__pc, 4U, 1U, vlSelfRef.__Vfunc_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read__0__Vfuncout);
    vlSelfRef.CpuTop__DOT___instMemory_io_rdata = vlSelfRef.__Vfunc_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read__0__Vfuncout;
    vlSelfRef.CpuTop__DOT___GEN_30 = (IData)(((0x00000073U 
                                               == (0xfe00007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)) 
                                              & (~ 
                                                 (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU))))));
    vlSelfRef.CpuTop__DOT__casez_tmp_1 = (0x000000ffU 
                                          & ((0U == (IData)(vlSelfRef.CpuTop__DOT__load_offset_reg))
                                              ? vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG
                                              : ((1U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__load_offset_reg))
                                                  ? 
                                                 (vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG 
                                                  >> 8U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.CpuTop__DOT__load_offset_reg))
                                                   ? 
                                                  (vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG 
                                                   >> 0x00000010U)
                                                   : 
                                                  (vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG 
                                                   >> 0x00000018U)))));
    vlSelfRef.CpuTop__DOT__load_half = (0x0000ffffU 
                                        & ((2U & (IData)(vlSelfRef.CpuTop__DOT__load_offset_reg))
                                            ? (vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG 
                                               >> 0x00000010U)
                                            : vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG));
    vlSelfRef.io_debug_regs_flat[0U] = 0U;
    vlSelfRef.io_debug_regs_flat[1U] = vlSelfRef.CpuTop__DOT__regs_1;
    vlSelfRef.io_debug_regs_flat[2U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_3)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_2))));
    vlSelfRef.io_debug_regs_flat[3U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_3)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_2))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[4U] = vlSelfRef.CpuTop__DOT__regs_4;
    vlSelfRef.io_debug_regs_flat[5U] = vlSelfRef.CpuTop__DOT__regs_5;
    vlSelfRef.io_debug_regs_flat[6U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_7)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_6))));
    vlSelfRef.io_debug_regs_flat[7U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_7)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_6))) 
                                                >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[8U] = vlSelfRef.CpuTop__DOT__regs_8;
    vlSelfRef.io_debug_regs_flat[9U] = vlSelfRef.CpuTop__DOT__regs_9;
    vlSelfRef.io_debug_regs_flat[10U] = (IData)((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_11)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_10))));
    vlSelfRef.io_debug_regs_flat[11U] = (IData)(((((QData)((IData)(vlSelfRef.CpuTop__DOT__regs_11)) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.CpuTop__DOT__regs_10))) 
                                                 >> 0x00000020U));
    vlSelfRef.io_debug_regs_flat[12U] = vlSelfRef.CpuTop__DOT__regs_12;
    vlSelfRef.io_debug_regs_flat[13U] = vlSelfRef.CpuTop__DOT__regs_13;
    vlSelfRef.io_debug_regs_flat[14U] = vlSelfRef.CpuTop__DOT__regs_14;
    vlSelfRef.io_debug_regs_flat[15U] = vlSelfRef.CpuTop__DOT__regs_15;
    vlSelfRef.io_debug_regs_flat[16U] = 0U;
    vlSelfRef.io_debug_regs_flat[17U] = 0U;
    vlSelfRef.io_debug_regs_flat[18U] = 0U;
    vlSelfRef.io_debug_regs_flat[19U] = 0U;
    vlSelfRef.io_debug_regs_flat[20U] = 0U;
    vlSelfRef.io_debug_regs_flat[21U] = 0U;
    vlSelfRef.io_debug_regs_flat[22U] = 0U;
    vlSelfRef.io_debug_regs_flat[23U] = 0U;
    vlSelfRef.io_debug_regs_flat[24U] = 0U;
    vlSelfRef.io_debug_regs_flat[25U] = 0U;
    vlSelfRef.io_debug_regs_flat[26U] = 0U;
    vlSelfRef.io_debug_regs_flat[27U] = 0U;
    vlSelfRef.io_debug_regs_flat[28U] = 0U;
    vlSelfRef.io_debug_regs_flat[29U] = 0U;
    vlSelfRef.io_debug_regs_flat[30U] = 0U;
    vlSelfRef.io_debug_regs_flat[31U] = 0U;
    vlSelfRef.CpuTop__DOT___GEN_15 = ((4U == (7U & 
                                              (vlSelfRef.CpuTop__DOT__instReg 
                                               >> 0x0000000cU))) 
                                      | (1U == (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6 
        = ((7U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                         >> 0x0000000cU))) | (6U == 
                                              (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT___GEN_8 = ((3U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))) 
                                     | ((2U == (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))) 
                                        | ((5U == (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))) 
                                              | ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU))) 
                                                 | ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 0x0000000cU))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU)))))))));
    vlSelfRef.CpuTop__DOT__immI = (((- (IData)((vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.CpuTop__DOT__instReg 
                                      >> 0x00000014U));
    vlSelfRef.CpuTop__DOT___GEN_31 = ((3U == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__instReg)) 
                                         | (0x33U == 
                                            (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg))));
    vlSelfRef.CpuTop__DOT__casez_tmp_0 = ((0x00800000U 
                                           & vlSelfRef.CpuTop__DOT__instReg)
                                           ? ((0x00400000U 
                                               & vlSelfRef.CpuTop__DOT__instReg)
                                               ? ((0x00200000U 
                                                   & vlSelfRef.CpuTop__DOT__instReg)
                                                   ? 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_15
                                                    : vlSelfRef.CpuTop__DOT__regs_14)
                                                   : 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_13
                                                    : vlSelfRef.CpuTop__DOT__regs_12))
                                               : ((0x00200000U 
                                                   & vlSelfRef.CpuTop__DOT__instReg)
                                                   ? 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_11
                                                    : vlSelfRef.CpuTop__DOT__regs_10)
                                                   : 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_9
                                                    : vlSelfRef.CpuTop__DOT__regs_8)))
                                           : ((0x00400000U 
                                               & vlSelfRef.CpuTop__DOT__instReg)
                                               ? ((0x00200000U 
                                                   & vlSelfRef.CpuTop__DOT__instReg)
                                                   ? 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_7
                                                    : vlSelfRef.CpuTop__DOT__regs_6)
                                                   : 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_5
                                                    : vlSelfRef.CpuTop__DOT__regs_4))
                                               : ((0x00200000U 
                                                   & vlSelfRef.CpuTop__DOT__instReg)
                                                   ? 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_3
                                                    : vlSelfRef.CpuTop__DOT__regs_2)
                                                   : 
                                                  ((0x00100000U 
                                                    & vlSelfRef.CpuTop__DOT__instReg)
                                                    ? vlSelfRef.CpuTop__DOT__regs_1
                                                    : vlSelfRef.CpuTop__DOT__regs_0))));
    vlSelfRef.CpuTop__DOT___GEN_27 = ((0x37U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (0x17U == (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_17 = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | ((0x37U == 
                                          (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__instReg)) 
                                         | ((0x17U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                            | ((0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.CpuTop__DOT__instReg)) 
                                                  | (0x63U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.CpuTop__DOT__instReg)))))));
    vlSelfRef.CpuTop__DOT___GEN_26 = ((0x6fU == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (0x67U == (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_35 = ((0x73U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      & (0U != (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT___GEN_25 = ((0U == (vlSelfRef.CpuTop__DOT__instReg 
                                              >> 0x00000019U)) 
                                      | (0x20U == (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x00000019U)));
    vlSelfRef.CpuTop__DOT___GEN_24 = ((0x63U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | ((3U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                         | (0x23U == 
                                            (0x0000007fU 
                                             & vlSelfRef.CpuTop__DOT__instReg))));
    vlSelfRef.CpuTop__DOT__casez_tmp = ((0x00040000U 
                                         & vlSelfRef.CpuTop__DOT__instReg)
                                         ? ((0x00020000U 
                                             & vlSelfRef.CpuTop__DOT__instReg)
                                             ? ((0x00010000U 
                                                 & vlSelfRef.CpuTop__DOT__instReg)
                                                 ? 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_15
                                                  : vlSelfRef.CpuTop__DOT__regs_14)
                                                 : 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_13
                                                  : vlSelfRef.CpuTop__DOT__regs_12))
                                             : ((0x00010000U 
                                                 & vlSelfRef.CpuTop__DOT__instReg)
                                                 ? 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_11
                                                  : vlSelfRef.CpuTop__DOT__regs_10)
                                                 : 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_9
                                                  : vlSelfRef.CpuTop__DOT__regs_8)))
                                         : ((0x00020000U 
                                             & vlSelfRef.CpuTop__DOT__instReg)
                                             ? ((0x00010000U 
                                                 & vlSelfRef.CpuTop__DOT__instReg)
                                                 ? 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_7
                                                  : vlSelfRef.CpuTop__DOT__regs_6)
                                                 : 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_5
                                                  : vlSelfRef.CpuTop__DOT__regs_4))
                                             : ((0x00010000U 
                                                 & vlSelfRef.CpuTop__DOT__instReg)
                                                 ? 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_3
                                                  : vlSelfRef.CpuTop__DOT__regs_2)
                                                 : 
                                                ((0x00008000U 
                                                  & vlSelfRef.CpuTop__DOT__instReg)
                                                  ? vlSelfRef.CpuTop__DOT__regs_1
                                                  : vlSelfRef.CpuTop__DOT__regs_0))));
    vlSelfRef.CpuTop__DOT___GEN_9 = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_8)) 
                                     & (0U != (7U & 
                                               (vlSelfRef.CpuTop__DOT__instReg 
                                                >> 0x0000000cU))));
    vlSelfRef.CpuTop__DOT___GEN_43 = (1U & ((~ (0U 
                                                != 
                                                (7U 
                                                 & (vlSelfRef.CpuTop__DOT__instReg 
                                                    >> 0x0000000cU)))) 
                                            | (IData)(vlSelfRef.CpuTop__DOT___GEN_8)));
    vlSelfRef.CpuTop__DOT__rs2_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x00000014U)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp_0
                                        : 0U);
    vlSelfRef.CpuTop__DOT__is_load = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_17)) 
                                      & (3U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_18 = ((3U != (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_17));
    vlSelfRef.CpuTop__DOT___GEN_20 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                      | (3U == (0x0000007fU 
                                                & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_32 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_17) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_31));
    vlSelfRef.CpuTop__DOT___GEN_34 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_27) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_26));
    vlSelfRef.CpuTop__DOT__rs1_data = ((0U != (0x0000001fU 
                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                  >> 0x0000000fU)))
                                        ? vlSelfRef.CpuTop__DOT__casez_tmp
                                        : 0U);
    vlSelfRef.CpuTop__DOT__casez_tmp_3 = ((0U == (IData)(vlSelfRef.CpuTop__DOT__state))
                                           ? 1U : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.CpuTop__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.CpuTop__DOT__is_load) 
                                                    << 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__state))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.CpuTop__DOT__state))));
    vlSelfRef.CpuTop__DOT__load_processed_data = ((IData)(vlSelfRef.CpuTop__DOT___GEN_18)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                      ? (IData)(vlSelfRef.CpuTop__DOT__load_half)
                                                      : (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                      ? 0U
                                                      : vlSelfRef.CpuTop__DOT__lsuMem__DOT__io_rdata_REG)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__load_funct3_reg))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.CpuTop__DOT__load_half) 
                                                                      >> 0x0000000fU)))) 
                                                       << 0x00000010U) 
                                                      | (IData)(vlSelfRef.CpuTop__DOT__load_half))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1) 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.CpuTop__DOT__casez_tmp_1))))));
    vlSelfRef.CpuTop__DOT___GEN_21 = ((0x23U != (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg)) 
                                      | (IData)(vlSelfRef.CpuTop__DOT___GEN_20));
    vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_exception 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_32)) 
           & ((IData)(vlSelfRef.CpuTop__DOT___GEN_30) 
              & ((1U == (0x0000000fU & (vlSelfRef.CpuTop__DOT__instReg 
                                        >> 0x00000014U)))
                  ? (1U == (IData)(vlSelfRef.CpuTop__DOT__state))
                  : ((~ (0U != (0x0000000fU & (vlSelfRef.CpuTop__DOT__instReg 
                                               >> 0x00000014U)))) 
                     & (1U == (IData)(vlSelfRef.CpuTop__DOT__state))))));
    vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9 
        = ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_32)) 
           & (0x73U == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.CpuTop__DOT___GEN_35) 
                                                     & (0U 
                                                        != 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 0x0000000fU))))) 
                                                   | (IData)(vlSelfRef.CpuTop__DOT___GEN_32)));
    vlSelfRef.CpuTop__DOT___GEN_36 = (1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_35)) 
                                            | (IData)(vlSelfRef.CpuTop__DOT___GEN_32)));
    vlSelfRef.CpuTop__DOT___GEN_45 = (((0x13U == (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__instReg))
                                        ? (IData)(vlSelfRef.CpuTop__DOT___GEN_43)
                                        : ((IData)(vlSelfRef.CpuTop__DOT___GEN_34) 
                                           | ((0x63U 
                                               != (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)) 
                                              & ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg)) 
                                                 | ((0x23U 
                                                     != 
                                                     (0x0000007fU 
                                                      & vlSelfRef.CpuTop__DOT__instReg)) 
                                                    & ((0x33U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.CpuTop__DOT__instReg))
                                                        ? 
                                                       ((IData)(vlSelfRef.CpuTop__DOT___GEN_25) 
                                                        & (IData)(vlSelfRef.CpuTop__DOT___GEN_43))
                                                        : (IData)(vlSelfRef.CpuTop__DOT___GEN_35))))))) 
                                      & (0U != (0x0000001fU 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 7U))));
    vlSelfRef.CpuTop__DOT___GEN_38 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                      == vlSelfRef.CpuTop__DOT__rs2_data);
    vlSelfRef.CpuTop__DOT___load_addr_T = (vlSelfRef.CpuTop__DOT__rs1_data 
                                           + vlSelfRef.CpuTop__DOT__immI);
    if ((0x13U == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg))) {
        vlSelfRef.CpuTop__DOT__alu__DOT__io_b = vlSelfRef.CpuTop__DOT__immI;
        vlSelfRef.CpuTop__DOT__illegal = (1U & (IData)(vlSelfRef.CpuTop__DOT___GEN_9));
        vlSelfRef.CpuTop__DOT__alu__DOT__io_op = ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x0000000cU)))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 0x0000000cU)))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                          >> 0x0000000cU))) 
                                                     << 1U))));
        vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__rs1_data;
    } else {
        if ((0x37U == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg))) {
            vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 0U;
            vlSelfRef.CpuTop__DOT__alu__DOT__io_a = 0U;
        } else if ((0x17U == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg))) {
            vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 
                (0xfffff000U & vlSelfRef.CpuTop__DOT__instReg);
            vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__pc;
        } else if ((0x6fU == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg))) {
            vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 0U;
            vlSelfRef.CpuTop__DOT__alu__DOT__io_a = 0U;
        } else if ((0x67U == (0x0000007fU & vlSelfRef.CpuTop__DOT__instReg))) {
            vlSelfRef.CpuTop__DOT__alu__DOT__io_b = vlSelfRef.CpuTop__DOT__immI;
            vlSelfRef.CpuTop__DOT__alu__DOT__io_a = vlSelfRef.CpuTop__DOT__rs1_data;
        } else {
            vlSelfRef.CpuTop__DOT__alu__DOT__io_b = 
                ((1U & ((~ ((0x33U == (0x0000007fU 
                                       & vlSelfRef.CpuTop__DOT__instReg)) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.CpuTop__DOT__instReg 
                                       >> 0x00000014U))))) 
                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_24)))
                  ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp_0);
            vlSelfRef.CpuTop__DOT__alu__DOT__io_a = 
                ((1U & ((~ ((0x33U == (0x0000007fU 
                                       & vlSelfRef.CpuTop__DOT__instReg)) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.CpuTop__DOT__instReg 
                                       >> 0x0000000fU))))) 
                        | (IData)(vlSelfRef.CpuTop__DOT___GEN_24)))
                  ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp);
        }
        vlSelfRef.CpuTop__DOT__illegal = (1U & ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_34)) 
                                                & ((0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.CpuTop__DOT__instReg))
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6) 
                                                      | ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__instReg 
                                                              >> 0x0000000cU))) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_15)))) 
                                                    & (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.CpuTop__DOT__instReg))
                                                     ? 
                                                    (~ 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU))) 
                                                      | ((~ 
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelfRef.CpuTop__DOT__instReg 
                                                               >> 0x0000000cU)))) 
                                                         | ((IData)(vlSelfRef.CpuTop__DOT___GEN_15) 
                                                            | (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                   >> 0x0000000cU)))))))
                                                     : 
                                                    ((0x23U 
                                                      != 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__instReg)) 
                                                     & ((0x33U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.CpuTop__DOT__instReg))
                                                         ? 
                                                        ((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_25)) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_9))
                                                         : 
                                                        ((0x73U 
                                                          != 
                                                          (0x0000007fU 
                                                           & vlSelfRef.CpuTop__DOT__instReg)) 
                                                         | ((~ 
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelfRef.CpuTop__DOT__instReg 
                                                                  >> 0x0000000cU)))) 
                                                            & ((0x18U 
                                                                != 
                                                                (vlSelfRef.CpuTop__DOT__instReg 
                                                                 >> 0x00000019U)) 
                                                               & ((0U 
                                                                   != 
                                                                   (vlSelfRef.CpuTop__DOT__instReg 
                                                                    >> 0x00000019U)) 
                                                                  | ((1U 
                                                                      != 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                                          >> 0x00000014U))) 
                                                                     & (0U 
                                                                        != 
                                                                        (0x0000000fU 
                                                                         & (vlSelfRef.CpuTop__DOT__instReg 
                                                                            >> 0x00000014U))))))))))))));
        vlSelfRef.CpuTop__DOT__alu__DOT__io_op = ((1U 
                                                   & ((IData)(vlSelfRef.CpuTop__DOT___GEN_34) 
                                                      | ((~ 
                                                          ((0x33U 
                                                            == 
                                                            (0x0000007fU 
                                                             & vlSelfRef.CpuTop__DOT__instReg)) 
                                                           & (IData)(vlSelfRef.CpuTop__DOT___GEN_25))) 
                                                         | (IData)(vlSelfRef.CpuTop__DOT___GEN_24))))
                                                   ? 0U
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.CpuTop__DOT__instReg 
                                                        >> 0x0000000cU)))
                                                    ? 2U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 0x0000000cU)))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.CpuTop__DOT__instReg 
                                                          >> 0x0000000cU)))
                                                      ? 4U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000cU)))
                                                       ? 5U
                                                       : 
                                                      ((~ 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                                             >> 0x0000000cU)))) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x00000019U))))))));
    }
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__lsuMem__DOT__paddrWrite__DOT__paddr_write_TOP(
                                                                                (((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_20)) 
                                                                                & ((0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.CpuTop__DOT__instReg)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__state))))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfffffffcU 
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
                                                                                >> 7U)))))))
                                                                                 : 0U), 
                                                                                (((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_21)) 
                                                                                & ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000000cU))) 
                                                                                | (0x0000000fU 
                                                                                == 
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
                                                                                 ? 4U
                                                                                 : 
                                                                                (((0x0cU 
                                                                                == 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                | (3U 
                                                                                == 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                 ? 2U
                                                                                 : 
                                                                                (((8U 
                                                                                == 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                 : 4U))), 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000000cU)))
                                                                                 ? vlSelfRef.CpuTop__DOT__rs2_data
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000000cU)))
                                                                                 ? 
                                                                                (vlSelfRef.CpuTop__DOT__rs2_data 
                                                                                << 
                                                                                (0x00000010U 
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
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 0x0000000cU)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.CpuTop__DOT__rs2_data 
                                                                                << 
                                                                                (0x00000018U 
                                                                                & ((vlSelfRef.CpuTop__DOT__rs1_data 
                                                                                + 
                                                                                (vlSelfRef.CpuTop__DOT__instReg 
                                                                                >> 7U)) 
                                                                                << 3U))))))), 
                                                                                (((~ (IData)(vlSelfRef.CpuTop__DOT___GEN_20)) 
                                                                                & ((0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.CpuTop__DOT__instReg)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelfRef.CpuTop__DOT__state))))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_21)
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
                                                                                >> 7U)))))))))
                                                                                 : 0U), 0U);
    vlSelfRef.CpuTop__DOT____Vcellinp__csr__io_csr_wen 
        = ((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9) 
           & ((0U != (7U & (vlSelfRef.CpuTop__DOT__instReg 
                            >> 0x0000000cU))) & (1U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__state))));
    vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
          ? 0U : vlSelfRef.CpuTop__DOT__casez_tmp);
    if (vlSelfRef.CpuTop__DOT___GEN_36) {
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op = 0U;
        vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm = 0U;
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr = 0U;
    } else {
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op 
            = (7U & (vlSelfRef.CpuTop__DOT__instReg 
                     >> 0x0000000cU));
        vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm = 
            (0x0000001fU & (vlSelfRef.CpuTop__DOT__instReg 
                            >> 0x0000000fU));
        vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr 
            = (vlSelfRef.CpuTop__DOT__instReg >> 0x00000014U);
    }
    vlSelfRef.io_debug_valid = ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal)) 
                                & (1U == (IData)(vlSelfRef.CpuTop__DOT__state)));
    vlSelfRef.CpuTop__DOT___GEN_37 = ((IData)(vlSelfRef.CpuTop__DOT__illegal) 
                                      & ((~ (IData)(vlSelfRef.CpuTop__DOT__illegal_seen)) 
                                         & (1U == (IData)(vlSelfRef.CpuTop__DOT__state))));
    vlSelfRef.CpuTop__DOT___GEN_46 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0U == (0x00000780U 
                                                & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_47 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000080U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_48 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000100U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_49 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000180U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_50 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000200U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_51 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000280U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_52 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000300U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_53 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000380U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_54 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000400U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_55 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000480U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_56 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000500U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_57 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000580U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_58 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000600U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_59 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000680U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_60 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000700U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    vlSelfRef.CpuTop__DOT___GEN_61 = ((IData)(vlSelfRef.CpuTop__DOT___GEN_45) 
                                      & (0x00000780U 
                                         == (0x00000780U 
                                             & vlSelfRef.CpuTop__DOT__instReg)));
    VCpuTop___024root____Vdpiimwrap_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read_TOP(
                                                                                ((IData)(vlSelfRef.CpuTop__DOT___GEN_18)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xfffffffcU 
                                                                                & vlSelfRef.CpuTop__DOT___load_addr_T)), 4U, 0U, vlSelfRef.__Vfunc_CpuTop__DOT__lsuMem__DOT__paddrRead__DOT__paddr_read__1__Vfuncout);
    vlSelfRef.CpuTop__DOT__lsuMem__DOT___paddrRead_data 
        = vlSelfRef.__Vfunc_CpuTop__DOT__lsuMem__DOT__paddrRead__DOT__paddr_read__1__Vfuncout;
    vlSelfRef.CpuTop__DOT__alu__DOT__io_out = ((8U 
                                                & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      < vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                      : 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__alu__DOT__io_a, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.CpuTop__DOT__alu__DOT__io_b)))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      >> 
                                                      (0x0000001fU 
                                                       & vlSelfRef.CpuTop__DOT__alu__DOT__io_b))
                                                      : 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      << 
                                                      (0x0000001fU 
                                                       & vlSelfRef.CpuTop__DOT__alu__DOT__io_b)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     VL_LTS_III(32, vlSelfRef.CpuTop__DOT__alu__DOT__io_a, vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                      : 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      ^ vlSelfRef.CpuTop__DOT__alu__DOT__io_b)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      | vlSelfRef.CpuTop__DOT__alu__DOT__io_b)
                                                      : 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      & vlSelfRef.CpuTop__DOT__alu__DOT__io_b))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.CpuTop__DOT__alu__DOT__io_op))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      ((~ vlSelfRef.CpuTop__DOT__alu__DOT__io_b) 
                                                       + vlSelfRef.CpuTop__DOT__alu__DOT__io_a))
                                                      : 
                                                     (vlSelfRef.CpuTop__DOT__alu__DOT__io_a 
                                                      + vlSelfRef.CpuTop__DOT__alu__DOT__io_b)))));
    vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata = 
        ((0x0341U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
          ? vlSelfRef.CpuTop__DOT__csr__DOT__mepc : 
         ((0x0305U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
           ? vlSelfRef.CpuTop__DOT__csr__DOT__mtvec
           : ((0x0342U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
               ? vlSelfRef.CpuTop__DOT__csr__DOT__mcause
               : ((0x0f12U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                   ? 0x018d7e72U : ((0x0f11U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                                     ? 0x79737978U : 
                                    ((0x0b80U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                                      ? (IData)((vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64 
                                                 >> 0x00000020U))
                                      : ((0x0b00U == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                                          ? (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__mcycle_64)
                                          : ((0x0310U 
                                              == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                                              ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatush
                                              : ((0x0300U 
                                                  == (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_addr))
                                                  ? vlSelfRef.CpuTop__DOT__csr__DOT__mstatus
                                                  : 0U)))))))));
    if ((1U == (7U & (vlSelfRef.CpuTop__DOT__instReg 
                      >> 0x0000000cU)))) {
        vlSelfRef.CpuTop__DOT___GEN_41 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                          << (0x0000001fU 
                                              & (vlSelfRef.CpuTop__DOT__instReg 
                                                 >> 0x00000014U)));
        vlSelfRef.CpuTop__DOT___GEN_44 = (vlSelfRef.CpuTop__DOT__rs1_data 
                                          << (0x0000001fU 
                                              & vlSelfRef.CpuTop__DOT__rs2_data));
    } else {
        vlSelfRef.CpuTop__DOT___GEN_41 = ((1U & ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x0000000cU))) 
                                                 | ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 0x0000000cU))) 
                                                    | ((~ 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                                             >> 0x0000000cU)))) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.CpuTop__DOT__instReg 
                                                              >> 0x0000000cU)))))))
                                           ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                           : 0U);
        vlSelfRef.CpuTop__DOT___GEN_44 = (((~ (0U != 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))) 
                                           & (IData)(vlSelfRef.CpuTop__DOT___GEN_25))
                                           ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                           : 0U);
    }
    vlSelfRef.CpuTop__DOT__wb_data = ((0x13U == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__instReg))
                                       ? ((3U == (7U 
                                                  & (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x0000000cU)))
                                           ? (vlSelfRef.CpuTop__DOT__rs1_data 
                                              < vlSelfRef.CpuTop__DOT__immI)
                                           : ((2U == 
                                               (7U 
                                                & (vlSelfRef.CpuTop__DOT__instReg 
                                                   >> 0x0000000cU)))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.CpuTop__DOT__instReg 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.CpuTop__DOT__instReg 
                                                     >> 0x00000019U))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.CpuTop__DOT__instReg 
                                                                      >> 0x00000014U)))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.CpuTop__DOT__instReg 
                                                      >> 0x00000019U))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__rs1_data 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.CpuTop__DOT__instReg 
                                                         >> 0x00000014U)))
                                                     : vlSelfRef.CpuTop__DOT___GEN_41))
                                                   : vlSelfRef.CpuTop__DOT___GEN_41)))
                                       : ((0x37U == 
                                           (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__instReg))
                                           ? (0xfffff000U 
                                              & vlSelfRef.CpuTop__DOT__instReg)
                                           : ((0x17U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__instReg))
                                               ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                               : ((IData)(vlSelfRef.CpuTop__DOT___GEN_26)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.CpuTop__DOT__pc)
                                                   : 
                                                  ((IData)(vlSelfRef.CpuTop__DOT___GEN_24)
                                                    ? 0U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.CpuTop__DOT__instReg))
                                                     ? 
                                                    ((IData)(vlSelfRef.CpuTop__DOT___GEN_25)
                                                      ? 
                                                     (((IData)(vlSelfRef.CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6) 
                                                       | ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.CpuTop__DOT__instReg 
                                                               >> 0x0000000cU))) 
                                                          | (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.CpuTop__DOT__instReg 
                                                                 >> 0x0000000cU)))))
                                                       ? vlSelfRef.CpuTop__DOT__alu__DOT__io_out
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (vlSelfRef.CpuTop__DOT__rs1_data 
                                                        < vlSelfRef.CpuTop__DOT__rs2_data)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__instReg 
                                                             >> 0x0000000cU)))
                                                         ? 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x00000019U))
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelfRef.CpuTop__DOT__rs1_data, 
                                                                        (0x0000001fU 
                                                                         & vlSelfRef.CpuTop__DOT__rs2_data))
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (vlSelfRef.CpuTop__DOT__instReg 
                                                            >> 0x00000019U))
                                                           ? 
                                                          (vlSelfRef.CpuTop__DOT__rs1_data 
                                                           >> 
                                                           (0x0000001fU 
                                                            & vlSelfRef.CpuTop__DOT__rs2_data))
                                                           : vlSelfRef.CpuTop__DOT___GEN_44))
                                                         : vlSelfRef.CpuTop__DOT___GEN_44)))
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelfRef.CpuTop__DOT___GEN_35)
                                                      ? vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata
                                                      : 0U)))))));
    vlSelfRef.CpuTop__DOT__csr__DOT__casez_tmp = ((4U 
                                                   & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelfRef.CpuTop__DOT___GEN_36)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.CpuTop__DOT__instReg 
                                                           >> 0x0000000fU)))) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : vlSelfRef.CpuTop__DOT__csr__DOT__io_zimm))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                       ? 0xffffffffU
                                                       : 
                                                      (~ vlSelfRef.CpuTop__DOT__casez_tmp)) 
                                                     & vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata)
                                                     : 
                                                    (vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data 
                                                     | vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_rdata))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.CpuTop__DOT__csr__DOT__io_csr_op))
                                                     ? vlSelfRef.CpuTop__DOT__csr__DOT__io_rs1_data
                                                     : 0U)));
}

VL_ATTR_COLD void VCpuTop___024root____Vm_traceActivitySetAll(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop___024root___eval_stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VCpuTop___024root___stl_sequent__TOP__0(vlSelf);
        VCpuTop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VCpuTop___024root___eval_phase__stl(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___eval_phase__stl\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VCpuTop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCpuTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VCpuTop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VCpuTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VCpuTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCpuTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VCpuTop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCpuTop___024root____Vm_traceActivitySetAll(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root____Vm_traceActivitySetAll\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VCpuTop___024root___ctor_var_reset(VCpuTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCpuTop___024root___ctor_var_reset\n"); );
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10350072731982309968ull);
    vlSelf->io_debug_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15041432708164082798ull);
    vlSelf->io_debug_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5400205057606432418ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->io_debug_regs_flat, __VscopeHash, 13513379243061101752ull);
    vlSelf->CpuTop__DOT___instMemory_io_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9736061070934203416ull);
    vlSelf->CpuTop__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4349561516140292754ull);
    vlSelf->CpuTop__DOT__load_offset_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14275860549862985261ull);
    vlSelf->CpuTop__DOT__load_funct3_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14788361008629674717ull);
    vlSelf->CpuTop__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13992823276446981147ull);
    vlSelf->CpuTop__DOT__instReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12775889439775202894ull);
    vlSelf->CpuTop__DOT__regs_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7969662024450088941ull);
    vlSelf->CpuTop__DOT__regs_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13231715935778336167ull);
    vlSelf->CpuTop__DOT__regs_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8664748906158390821ull);
    vlSelf->CpuTop__DOT__regs_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5440118824839933745ull);
    vlSelf->CpuTop__DOT__regs_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 873151795220061567ull);
    vlSelf->CpuTop__DOT__regs_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4230652021707189979ull);
    vlSelf->CpuTop__DOT__regs_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15851348957476762606ull);
    vlSelf->CpuTop__DOT__regs_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6923270983796633508ull);
    vlSelf->CpuTop__DOT__regs_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11992140184715619184ull);
    vlSelf->CpuTop__DOT__regs_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9101610202553216899ull);
    vlSelf->CpuTop__DOT__regs_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9103559474649535907ull);
    vlSelf->CpuTop__DOT__regs_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8835492278327594139ull);
    vlSelf->CpuTop__DOT__regs_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 102192189114171087ull);
    vlSelf->CpuTop__DOT__regs_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16896619533467855195ull);
    vlSelf->CpuTop__DOT__regs_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8021211746321389538ull);
    vlSelf->CpuTop__DOT__regs_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16769108980266408918ull);
    vlSelf->CpuTop__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9610465508193273162ull);
    vlSelf->CpuTop__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7130891848989918424ull);
    vlSelf->CpuTop__DOT__casez_tmp_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4940401964705513062ull);
    vlSelf->CpuTop__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16057825239591963678ull);
    vlSelf->CpuTop__DOT__immI = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6821708986719847619ull);
    vlSelf->CpuTop__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3196616300792063150ull);
    vlSelf->CpuTop__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18229052532505436685ull);
    vlSelf->CpuTop__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15118851946482093837ull);
    vlSelf->CpuTop__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9150036124230812774ull);
    vlSelf->CpuTop__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5916217656183066993ull);
    vlSelf->CpuTop__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18394145907641498786ull);
    vlSelf->CpuTop__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7283787509352149224ull);
    vlSelf->CpuTop__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8974039075111066082ull);
    vlSelf->CpuTop__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15002294100970415828ull);
    vlSelf->CpuTop__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8087953508372072708ull);
    vlSelf->CpuTop__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10124654853587170331ull);
    vlSelf->CpuTop__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258284599045504581ull);
    vlSelf->CpuTop__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289409696604472291ull);
    vlSelf->CpuTop__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3375069104006225041ull);
    vlSelf->CpuTop__DOT__is_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5269618234225297406ull);
    vlSelf->CpuTop__DOT___load_addr_T = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5705596609447887711ull);
    vlSelf->CpuTop__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967349244393025002ull);
    vlSelf->CpuTop__DOT__casez_tmp_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9870242713162288522ull);
    vlSelf->CpuTop__DOT__load_half = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16312446929602184446ull);
    vlSelf->CpuTop__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1012863249984515187ull);
    vlSelf->CpuTop__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8412272424419104183ull);
    vlSelf->CpuTop__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7820279350204856698ull);
    vlSelf->CpuTop__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15564001785957140083ull);
    vlSelf->CpuTop__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8194491634921639075ull);
    vlSelf->CpuTop__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9127224772278025785ull);
    vlSelf->CpuTop__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 662973741010772340ull);
    vlSelf->CpuTop__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1988407839333824651ull);
    vlSelf->CpuTop__DOT___GEN_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10396796216120352147ull);
    vlSelf->CpuTop__DOT___GEN_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13577410465100933952ull);
    vlSelf->CpuTop__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6987981584929458004ull);
    vlSelf->CpuTop__DOT___GEN_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5900667825819760390ull);
    vlSelf->CpuTop__DOT__illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17750012823316288139ull);
    vlSelf->CpuTop__DOT___GEN_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13415531270981773056ull);
    vlSelf->CpuTop__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17700152668718606553ull);
    vlSelf->CpuTop__DOT__illegal_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11692240810425205617ull);
    vlSelf->CpuTop__DOT___GEN_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12700578923122912314ull);
    vlSelf->CpuTop__DOT__casez_tmp_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16227097539483637200ull);
    vlSelf->CpuTop__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10168634774807534818ull);
    vlSelf->CpuTop__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11540709119885954984ull);
    vlSelf->CpuTop__DOT___wb_data_T_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5090268522743211268ull);
    vlSelf->CpuTop__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11661052062630335702ull);
    vlSelf->CpuTop__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10182871570054873786ull);
    vlSelf->CpuTop__DOT__load_processed_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 55019098864418383ull);
    vlSelf->CpuTop__DOT___GEN_44 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15677688118750634527ull);
    vlSelf->CpuTop__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1121762684598443505ull);
    vlSelf->CpuTop__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14695654409104435552ull);
    vlSelf->CpuTop__DOT___GEN_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12593785199986734741ull);
    vlSelf->CpuTop__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2230517790636881352ull);
    vlSelf->CpuTop__DOT___GEN_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16926881071979599497ull);
    vlSelf->CpuTop__DOT___GEN_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126969974676542068ull);
    vlSelf->CpuTop__DOT___GEN_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13863356643829212263ull);
    vlSelf->CpuTop__DOT___GEN_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14471178068758575534ull);
    vlSelf->CpuTop__DOT___GEN_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1073308312934663110ull);
    vlSelf->CpuTop__DOT___GEN_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14845390353475398509ull);
    vlSelf->CpuTop__DOT___GEN_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882091698690420629ull);
    vlSelf->CpuTop__DOT___GEN_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 911429118815470722ull);
    vlSelf->CpuTop__DOT___GEN_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9795491260157606788ull);
    vlSelf->CpuTop__DOT___GEN_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3110009658149697533ull);
    vlSelf->CpuTop__DOT___GEN_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15007269547594520364ull);
    vlSelf->CpuTop__DOT___GEN_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2160622072044401684ull);
    vlSelf->CpuTop__DOT___GEN_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7425986833770106755ull);
    vlSelf->CpuTop__DOT___GEN_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 511646241171909205ull);
    vlSelf->CpuTop__DOT____Vcellinp__csr__io_exception = 0;
    vlSelf->CpuTop__DOT____Vcellinp__csr__io_csr_wen = 0;
    vlSelf->CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_6 = 0;
    vlSelf->CpuTop__DOT____VdfgRegularize_h9f7eeac2_0_9 = 0;
    vlSelf->CpuTop__DOT__lsuMem__DOT___paddrRead_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3822436024745149180ull);
    vlSelf->CpuTop__DOT__lsuMem__DOT__io_rdata_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4902296855112506923ull);
    vlSelf->CpuTop__DOT__alu__DOT__io_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8669630799376963292ull);
    vlSelf->CpuTop__DOT__alu__DOT__io_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2145717854684671185ull);
    vlSelf->CpuTop__DOT__alu__DOT__io_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3978023783589548712ull);
    vlSelf->CpuTop__DOT__alu__DOT__io_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 713302799962438576ull);
    vlSelf->CpuTop__DOT__csr__DOT__io_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14779097938672457896ull);
    vlSelf->CpuTop__DOT__csr__DOT__io_csr_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4932338613012443078ull);
    vlSelf->CpuTop__DOT__csr__DOT__io_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7003595432515942269ull);
    vlSelf->CpuTop__DOT__csr__DOT__io_zimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 366683675178435037ull);
    vlSelf->CpuTop__DOT__csr__DOT__io_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1235016163392563691ull);
    vlSelf->CpuTop__DOT__csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6709837147723570551ull);
    vlSelf->CpuTop__DOT__csr__DOT__mstatush = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8409868814365757183ull);
    vlSelf->CpuTop__DOT__csr__DOT__mcycle_64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14707578374629214948ull);
    vlSelf->CpuTop__DOT__csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4581478088731026857ull);
    vlSelf->CpuTop__DOT__csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17755587101008877558ull);
    vlSelf->CpuTop__DOT__csr__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9966462044296147037ull);
    vlSelf->CpuTop__DOT__csr__DOT__casez_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16646657704204302141ull);
    vlSelf->CpuTop__DOT__csr__DOT___mcycle_64_T = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6129286415385989190ull);
    vlSelf->__Vfunc_CpuTop__DOT__instMemory__DOT__paddrRead__DOT__paddr_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_CpuTop__DOT__lsuMem__DOT__paddrRead__DOT__paddr_read__1__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
