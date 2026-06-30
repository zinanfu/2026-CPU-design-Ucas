// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCpuTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"


class VCpuTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCpuTop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_mem_wmask,3,0);
        VL_OUT8(io_mem_wen,0,0);
        VL_OUT8(io_mem_ren,0,0);
        VL_OUT8(io_debug_valid,0,0);
        CData/*0:0*/ CpuTop__DOT___exu_io_redirect_valid;
        CData/*0:0*/ CpuTop__DOT___idu_io_out_valid;
        CData/*3:0*/ CpuTop__DOT___idu_io_out_bits_alu_op;
        CData/*0:0*/ CpuTop__DOT__redirect_valid;
        CData/*0:0*/ CpuTop__DOT__reg_valid;
        CData/*0:0*/ CpuTop__DOT__ifu_io_out_ready;
        CData/*3:0*/ CpuTop__DOT__reg_1_alu_op;
        CData/*4:0*/ CpuTop__DOT__reg_1_wb_addr;
        CData/*0:0*/ CpuTop__DOT__reg_1_wb_en;
        CData/*1:0*/ CpuTop__DOT__reg_1_wb_sel;
        CData/*0:0*/ CpuTop__DOT__reg_1_mem_ren;
        CData/*0:0*/ CpuTop__DOT__reg_1_mem_wen;
        CData/*2:0*/ CpuTop__DOT__reg_1_mem_funct3;
        CData/*3:0*/ CpuTop__DOT__reg_1_mem_wmask;
        CData/*0:0*/ CpuTop__DOT__reg_1_csr_en;
        CData/*2:0*/ CpuTop__DOT__reg_1_csr_op;
        CData/*0:0*/ CpuTop__DOT__reg_1_is_jalr;
        CData/*0:0*/ CpuTop__DOT__reg_1_exception;
        CData/*3:0*/ CpuTop__DOT__reg_1_exception_cause;
        CData/*0:0*/ CpuTop__DOT__reg_1_mret;
        CData/*0:0*/ CpuTop__DOT__reg_valid_1;
        CData/*0:0*/ CpuTop__DOT__reg_2_mem_ren;
        CData/*0:0*/ CpuTop__DOT__reg_2_mem_wen;
        CData/*2:0*/ CpuTop__DOT__reg_2_mem_funct3;
        CData/*3:0*/ CpuTop__DOT__reg_2_mem_wmask;
        CData/*4:0*/ CpuTop__DOT__reg_2_wb_addr;
        CData/*0:0*/ CpuTop__DOT__reg_2_wb_en;
        CData/*1:0*/ CpuTop__DOT__reg_2_wb_sel;
        CData/*0:0*/ CpuTop__DOT__reg_valid_2;
        CData/*4:0*/ CpuTop__DOT__reg_3_wb_addr;
        CData/*0:0*/ CpuTop__DOT__reg_3_wb_en;
        CData/*0:0*/ CpuTop__DOT__reg_valid_3;
        CData/*0:0*/ CpuTop__DOT__idu__DOT__io_reg_wen;
        CData/*0:0*/ CpuTop__DOT__idu__DOT__io_fwd_mem_wen;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___stall_T_1;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___stall_T_2;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_9;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_16;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_17;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_19;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_20;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_22;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_24;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_25;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_27;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_28;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_32;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_33;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_34;
        CData/*0:0*/ CpuTop__DOT__idu__DOT___GEN_35;
        CData/*0:0*/ CpuTop__DOT__idu__DOT__stall;
        CData/*0:0*/ CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10;
        CData/*0:0*/ CpuTop__DOT__idu__DOT__regfile__DOT___GEN;
        CData/*0:0*/ CpuTop__DOT__exu__DOT__io_fwd_wb_en;
        CData/*0:0*/ CpuTop__DOT__exu__DOT___GEN;
        CData/*0:0*/ CpuTop__DOT__exu__DOT___GEN_0;
        CData/*0:0*/ CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T;
        CData/*7:0*/ CpuTop__DOT__mem__DOT__casez_tmp;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ CpuTop__DOT__reg_1_csr_addr;
        SData/*15:0*/ CpuTop__DOT__mem__DOT__load_half;
        VL_IN(io_inst,31,0);
        VL_OUT(io_pc,31,0);
        VL_IN(io_mem_rdata,31,0);
        VL_OUT(io_mem_addr,31,0);
        VL_OUT(io_mem_wdata,31,0);
        VL_OUT(io_debug_pc,31,0);
        VL_OUT(io_debug_inst,31,0);
        VL_OUTW(io_debug_regs_flat,1023,0,32);
        IData/*31:0*/ CpuTop__DOT___mem_io_out_bits_wb_data;
        IData/*31:0*/ CpuTop__DOT___exu_io_out_bits_csr_rdata;
        IData/*31:0*/ CpuTop__DOT___idu_io_out_bits_alu_b;
        IData/*31:0*/ CpuTop__DOT___idu_io_out_bits_mem_wdata;
        IData/*31:0*/ CpuTop__DOT___idu_io_out_bits_csr_wdata;
        IData/*31:0*/ CpuTop__DOT__reg_pc;
        IData/*31:0*/ CpuTop__DOT__reg_inst;
        IData/*31:0*/ CpuTop__DOT__reg_1_pc;
        IData/*31:0*/ CpuTop__DOT__reg_1_alu_a;
        IData/*31:0*/ CpuTop__DOT__reg_1_alu_b;
        IData/*31:0*/ CpuTop__DOT__reg_1_mem_wdata;
        IData/*31:0*/ CpuTop__DOT__reg_1_csr_wdata;
        IData/*31:0*/ CpuTop__DOT__reg_1_csr_zimm;
        IData/*31:0*/ CpuTop__DOT__reg_2_alu_result;
        IData/*31:0*/ CpuTop__DOT__reg_2_mem_addr;
        IData/*31:0*/ CpuTop__DOT__reg_2_mem_wdata;
        IData/*31:0*/ CpuTop__DOT__reg_2_pc_plus4;
        IData/*31:0*/ CpuTop__DOT__reg_2_csr_rdata;
        IData/*31:0*/ CpuTop__DOT__reg_3_wb_data;
        IData/*31:0*/ CpuTop__DOT__ifu__DOT__pc;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__immI;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_1;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_2;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_3;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_4;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_5;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_6;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_7;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_8;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_9;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_10;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_11;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_12;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_13;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_14;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_15;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_16;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_17;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_18;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_19;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_20;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_21;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_22;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_23;
    };
    struct {
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_24;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_25;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_26;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_27;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_28;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_29;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_30;
        IData/*31:0*/ CpuTop__DOT__idu__DOT__regfile__DOT__regs_31;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__io_fwd_wb_data;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__alu__DOT__io_out;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mstatus;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mstatush;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mepc;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mcause;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mtvec;
        IData/*31:0*/ CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64;
        QData/*63:0*/ CpuTop__DOT__exu__DOT__csr__DOT___mcycle_64_T;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VCpuTop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VCpuTop___024root(VCpuTop__Syms* symsp, const char* namep);
    ~VCpuTop___024root();
    VL_UNCOPYABLE(VCpuTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
