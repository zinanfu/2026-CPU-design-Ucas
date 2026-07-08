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
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+330,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+331,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+363,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("CpuTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+330,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+331,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+363,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+0,0,"redirect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ifu_io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"reg_1_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg_1_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg_1_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"reg_1_alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"reg_1_alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"reg_1_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"reg_1_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"reg_1_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"reg_1_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"reg_1_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"reg_1_mem_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"reg_1_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"reg_1_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"reg_1_csr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"reg_1_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+20,0,"reg_1_csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"reg_1_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_1_csr_zimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"reg_1_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"reg_1_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_1_exception_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"reg_1_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reg_valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"idu_io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"reg_2_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"reg_2_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"reg_2_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"reg_2_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"reg_2_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"reg_2_mem_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"reg_2_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"reg_2_load_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"reg_2_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"reg_2_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"reg_2_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"reg_2_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"reg_2_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"reg_2_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"reg_2_csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"reg_valid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"exu_io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"reg_3_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"reg_3_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"reg_3_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+49,0,"reg_3_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"reg_3_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"reg_valid_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("axiArbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"io_ifu_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_ifu_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_ifu_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_ifu_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"io_ifu_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_ifu_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_mem_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_mem_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_mem_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_mem_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"io_mem_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_mem_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"io_mem_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"io_mem_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_mem_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_mem_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"io_mem_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"io_mem_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_mem_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_mem_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_mem_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"io_axi_ar_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"io_axi_aw_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+86,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_axi_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_axi_aw_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_mem_ar_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_mem_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_mem_aw_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"readAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"readIdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"awAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"awIdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"awFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"wDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"wStrbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"wFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"awSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"wSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"memArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"memAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"memWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"axiAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"axiWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"willBeWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_ifu_ar_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_axi_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+108,0,"axiArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axiClient", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+121,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+113,0,"rvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"awFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"wFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"bvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_axi_aw_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_axi_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"arFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"awFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"wFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"writeFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axiSram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"io_axi_ar_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+296,0,"io_axi_aw_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"rvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"arFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"awAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,0,"awIdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"awFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"wDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"wStrbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"wFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"io_axi_aw_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"io_axi_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"awFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"wFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"writeStrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+306,0,"writeFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("paddrWrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+306,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axiUart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"rvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"awAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+315,0,"awFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"wDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"wStrbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+317,0,"wFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"bvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"arFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"io_axi_aw_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"io_axi_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"awFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"wFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"writeStrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+321,0,"writeFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("paddrWrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+321,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_in_bits_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"io_in_bits_alu_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_in_bits_alu_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_in_bits_wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"io_in_bits_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"io_in_bits_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"io_in_bits_mem_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"io_in_bits_mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"io_in_bits_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_in_bits_csr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"io_in_bits_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+20,0,"io_in_bits_csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_in_bits_csr_zimm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_in_bits_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_in_bits_exception_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"io_in_bits_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"io_out_bits_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"io_out_bits_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"io_out_bits_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"io_out_bits_mem_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+162,0,"io_out_bits_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"io_out_bits_load_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"io_out_bits_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"io_out_bits_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_out_bits_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"io_out_bits_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"io_fwd_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_fwd_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+170,0,"io_fwd_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"io_fwd_wb_is_Load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"io_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+20,0,"io_csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_zimm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"io_mtvec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"io_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_exception_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"io_exception_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"io_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"io_mret_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"mstatush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+176,0,"mcycle_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+173,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"old_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"io_out_bits_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"io_out_bits_alu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"io_out_bits_alu_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+186,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_out_bits_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+188,0,"io_out_bits_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_out_bits_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"io_out_bits_mem_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+191,0,"io_out_bits_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"io_out_bits_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"io_out_bits_csr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"io_out_bits_csr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+195,0,"io_out_bits_csr_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"io_out_bits_csr_zimm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"io_out_bits_exception",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"io_out_bits_exception_cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+201,0,"io_out_bits_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"io_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"io_fwd_exu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_fwd_exu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+170,0,"io_fwd_exu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"io_fwd_exu_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"io_fwd_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"io_fwd_mem_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+205,0,"io_fwd_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"io_debug_regs_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"io_debug_regs_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"io_debug_regs_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"io_debug_regs_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"io_debug_regs_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"io_debug_regs_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"io_debug_regs_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_debug_regs_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"io_debug_regs_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"io_debug_regs_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"io_debug_regs_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"io_debug_regs_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"io_debug_regs_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"io_debug_regs_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"io_debug_regs_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_debug_regs_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"io_debug_regs_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"io_debug_regs_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"io_debug_regs_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"io_debug_regs_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"io_debug_regs_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"io_debug_regs_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"io_debug_regs_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"io_debug_regs_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"io_debug_regs_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_debug_regs_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"io_debug_regs_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"io_debug_regs_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_debug_regs_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_debug_regs_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"io_debug_regs_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"io_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+243,0,"io_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+245,0,"io_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"io_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"io_debug_regs_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"io_debug_regs_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"io_debug_regs_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"io_debug_regs_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"io_debug_regs_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"io_debug_regs_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"io_debug_regs_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_debug_regs_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"io_debug_regs_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"io_debug_regs_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"io_debug_regs_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"io_debug_regs_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"io_debug_regs_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"io_debug_regs_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"io_debug_regs_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_debug_regs_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"io_debug_regs_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"io_debug_regs_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"io_debug_regs_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"io_debug_regs_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"io_debug_regs_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"io_debug_regs_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"io_debug_regs_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"io_debug_regs_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"io_debug_regs_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_debug_regs_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"io_debug_regs_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"io_debug_regs_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_debug_regs_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_debug_regs_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"io_debug_regs_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+0,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_axi_if_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_axi_if_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_axi_if_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_axi_if_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"io_axi_if_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_axi_if_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"reqPcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"outPcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"outInstReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+246,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"io_axi_if_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_axi_if_r_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"io_in_bits_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"io_in_bits_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_in_bits_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"io_in_bits_mem_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"io_in_bits_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"io_in_bits_load_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_in_bits_mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"io_in_bits_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"io_in_bits_wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"io_in_bits_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+253,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+256,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"io_out_bits_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_axi_mem_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_axi_mem_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_axi_mem_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_axi_mem_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"io_axi_mem_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_axi_mem_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"io_axi_mem_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"io_axi_mem_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_axi_mem_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_axi_mem_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"io_axi_mem_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"io_axi_mem_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_axi_mem_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_axi_mem_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_axi_mem_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"io_fwd_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"io_fwd_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+205,0,"io_fwd_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"io_axi_mem_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_axi_mem_aw_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_axi_mem_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+258,0,"reqReg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"reqReg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"reqReg_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+261,0,"reqReg_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"reqReg_mem_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"reqReg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"reqReg_load_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"reqReg_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+266,0,"reqReg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"reqReg_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+268,0,"reqReg_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"reqReg_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"reqReg_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"reqReg_csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"req_load_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+204,0,"req_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+256,0,"req_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"awSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"wSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"axiArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"axiAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"axiWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_axi_mem_r_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"io_axi_mem_b_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+278,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"load_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+205,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+49,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"io_in_bits_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"io_reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"io_reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"io_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"io_wb_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+326,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_in_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"io_in_ar_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_in_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_in_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"io_in_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_in_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_in_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_in_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"io_in_aw_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_in_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"io_in_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_in_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_in_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+86,0,"io_in_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_in_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_in_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_in_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"io_mem_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"io_mem_ar_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_mem_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_mem_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"io_mem_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"io_mem_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_mem_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"io_mem_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+296,0,"io_mem_aw_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_mem_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"io_mem_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"io_mem_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"io_mem_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"io_mem_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"io_mem_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_mem_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_mem_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_uart_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"io_uart_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"io_uart_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_uart_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_uart_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_uart_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"io_uart_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"io_uart_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"io_uart_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"io_uart_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_uart_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"io_uart_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"io_uart_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io_uart_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_uart_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"io_clint_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"io_clint_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_clint_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"io_clint_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"io_clint_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_clint_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_clint_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_clint_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_clint_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_clint_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_clint_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"io_clint_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_in_ar_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"readAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+282,0,"readIdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"readTargetReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,0,"awAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+285,0,"awIdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"awTargetReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+287,0,"awFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"wDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"wStrbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+290,0,"wFullReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"awSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"wSentReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"inArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"io_in_aw_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_in_w_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"willBeWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+147,0,"io_uart_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_clint_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_mem_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"io_uart_aw_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"io_uart_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_clint_aw_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_clint_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_mem_aw_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_mem_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"memAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"memWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"uartAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"uartWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"clintAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"clintWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"inAwFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"inWFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"memArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"uartArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"clintArFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+369,(4U),32);
    bufp->fullBit(oldp+370,(0U));
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
    bufp->fullBit(oldp+0,(vlSelfRef.CpuTop__DOT__redirect_valid));
    bufp->fullIData(oldp+1,(vlSelfRef.CpuTop__DOT__reg_pc),32);
    bufp->fullIData(oldp+2,(vlSelfRef.CpuTop__DOT__reg_inst),32);
    bufp->fullBit(oldp+3,(vlSelfRef.CpuTop__DOT__reg_valid));
    bufp->fullBit(oldp+4,(vlSelfRef.CpuTop__DOT__ifu_io_out_ready));
    bufp->fullIData(oldp+5,(vlSelfRef.CpuTop__DOT__reg_1_pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.CpuTop__DOT__reg_1_inst),32);
    bufp->fullCData(oldp+7,(vlSelfRef.CpuTop__DOT__reg_1_alu_op),4);
    bufp->fullIData(oldp+8,(vlSelfRef.CpuTop__DOT__reg_1_alu_a),32);
    bufp->fullIData(oldp+9,(vlSelfRef.CpuTop__DOT__reg_1_alu_b),32);
    bufp->fullCData(oldp+10,(vlSelfRef.CpuTop__DOT__reg_1_wb_addr),5);
    bufp->fullBit(oldp+11,(vlSelfRef.CpuTop__DOT__reg_1_wb_en));
    bufp->fullCData(oldp+12,(vlSelfRef.CpuTop__DOT__reg_1_wb_sel),2);
    bufp->fullBit(oldp+13,(vlSelfRef.CpuTop__DOT__reg_1_mem_ren));
    bufp->fullBit(oldp+14,(vlSelfRef.CpuTop__DOT__reg_1_mem_wen));
    bufp->fullCData(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3),3);
    bufp->fullCData(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask),4);
    bufp->fullIData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
    bufp->fullBit(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
    bufp->fullSData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
    bufp->fullCData(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
    bufp->fullIData(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
    bufp->fullIData(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
    bufp->fullBit(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
    bufp->fullBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_1_exception));
    bufp->fullCData(oldp+25,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
    bufp->fullBit(oldp+26,(vlSelfRef.CpuTop__DOT__reg_1_mret));
    bufp->fullBit(oldp+27,(vlSelfRef.CpuTop__DOT__reg_valid_1));
    bufp->fullBit(oldp+28,(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
    bufp->fullIData(oldp+29,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
    bufp->fullIData(oldp+30,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
    bufp->fullIData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
    bufp->fullBit(oldp+32,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
    bufp->fullBit(oldp+33,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
    bufp->fullCData(oldp+34,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
    bufp->fullIData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
    bufp->fullIData(oldp+36,(vlSelfRef.CpuTop__DOT__reg_2_load_addr),32);
    bufp->fullCData(oldp+37,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
    bufp->fullIData(oldp+38,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
    bufp->fullCData(oldp+39,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
    bufp->fullBit(oldp+40,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
    bufp->fullCData(oldp+41,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
    bufp->fullIData(oldp+42,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
    bufp->fullIData(oldp+43,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
    bufp->fullBit(oldp+44,(vlSelfRef.CpuTop__DOT__reg_valid_2));
    bufp->fullBit(oldp+45,(vlSelfRef.CpuTop__DOT___exu_io_in_ready));
    bufp->fullIData(oldp+46,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
    bufp->fullIData(oldp+47,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
    bufp->fullCData(oldp+48,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
    bufp->fullBit(oldp+49,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
    bufp->fullIData(oldp+50,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
    bufp->fullBit(oldp+51,(vlSelfRef.CpuTop__DOT__reg_valid_3));
    bufp->fullIData(oldp+52,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+53,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid));
    bufp->fullBit(oldp+54,(((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                            & ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid))) 
                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid)))));
    bufp->fullIData(oldp+55,((((2U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                               | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_5))
                               ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
    bufp->fullBit(oldp+56,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_5)) 
                            & ((2U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid)))));
    bufp->fullBit(oldp+57,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready));
    bufp->fullIData(oldp+58,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_addr),32);
    bufp->fullBit(oldp+59,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid));
    bufp->fullBit(oldp+60,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_ready));
    bufp->fullIData(oldp+61,((((3U != (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)) 
                               | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_7))
                               ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data)),32);
    bufp->fullBit(oldp+62,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid));
    bufp->fullBit(oldp+63,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready));
    bufp->fullIData(oldp+64,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                               ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                        : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_addr))),32);
    bufp->fullBit(oldp+65,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_aw_valid));
    bufp->fullBit(oldp+66,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awFullReg)) 
                            & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
    bufp->fullIData(oldp+67,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                               ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        ? vlSelfRef.CpuTop__DOT__reg_2_mem_wdata
                                        : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wdata))),32);
    bufp->fullCData(oldp+68,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_4)
                               ? 0U : ((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        ? (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask)
                                        : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wmask)))),4);
    bufp->fullBit(oldp+69,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_w_valid));
    bufp->fullBit(oldp+70,(((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wFullReg)) 
                            & (0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
    bufp->fullBit(oldp+71,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid));
    bufp->fullBit(oldp+72,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready));
    bufp->fullIData(oldp+73,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr),32);
    bufp->fullBit(oldp+74,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id));
    bufp->fullBit(oldp+75,(((0U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                             ? ((~ (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite)) 
                                & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_ar_valid) 
                                   | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)))
                             : (1U == (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))));
    bufp->fullBit(oldp+76,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg)) 
                            & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_19)) 
                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_ready)))));
    bufp->fullIData(oldp+77,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_data),32);
    bufp->fullBit(oldp+78,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid));
    bufp->fullBit(oldp+79,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready));
    bufp->fullIData(oldp+80,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_addr),32);
    bufp->fullBit(oldp+81,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT____VdfgRegularize_h6ac6c79f_0_1) 
                            & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awIdReg))));
    bufp->fullBit(oldp+82,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_valid));
    bufp->fullBit(oldp+83,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_aw_ready));
    bufp->fullIData(oldp+84,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_11)
                               ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wDataReg)),32);
    bufp->fullCData(oldp+85,(((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_11)
                               ? 0U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wStrbReg))),4);
    bufp->fullBit(oldp+86,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_w_valid));
    bufp->fullBit(oldp+87,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg)) 
                            & (0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))));
    bufp->fullBit(oldp+88,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_valid));
    bufp->fullBit(oldp+89,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready));
    bufp->fullCData(oldp+90,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state),3);
    bufp->fullIData(oldp+91,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readAddrReg),32);
    bufp->fullBit(oldp+92,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readIdReg));
    bufp->fullIData(oldp+93,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awAddrReg),32);
    bufp->fullBit(oldp+94,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awIdReg));
    bufp->fullBit(oldp+95,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awFullReg));
    bufp->fullIData(oldp+96,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wDataReg),32);
    bufp->fullCData(oldp+97,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wStrbReg),4);
    bufp->fullBit(oldp+98,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wFullReg));
    bufp->fullBit(oldp+99,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__awSentReg));
    bufp->fullBit(oldp+100,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__wSentReg));
    bufp->fullBit(oldp+101,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire));
    bufp->fullBit(oldp+102,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memAwFire));
    bufp->fullBit(oldp+103,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memWFire));
    bufp->fullBit(oldp+104,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiAwFire));
    bufp->fullBit(oldp+105,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiWFire));
    bufp->fullBit(oldp+106,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite));
    bufp->fullCData(oldp+107,(((4U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                    ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_15)
                                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                        ? (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_15)
                                        : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_12)
                                            ? 5U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))))
                                : ((2U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                        ? (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid) 
                                            & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))
                                            ? 0U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                        : (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_valid) 
                                            & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_ifu_r_ready))
                                            ? 0U : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))
                                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                        ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire)
                                            ? (2U | (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__readIdReg))
                                            : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                        : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__willBeWrite)
                                            ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_0)
                                                ? 4U
                                                : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                            : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_ar_valid)
                                                ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire)
                                                    ? 
                                                   (1U 
                                                    | ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                                       << 1U))
                                                    : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state))
                                                : ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT___GEN_2)
                                                    ? 
                                                   ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire)
                                                     ? 2U
                                                     : 1U)
                                                    : (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__state)))))))),3);
    bufp->fullBit(oldp+108,(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire));
    bufp->fullIData(oldp+109,(vlSelfRef.CpuTop__DOT__axiClient__DOT__io_axi_ar_addr),32);
    bufp->fullBit(oldp+110,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                              ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_18) 
                                 & (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                              : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_17) 
                                 & (2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg))))));
    bufp->fullBit(oldp+111,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__rvalidReg)))));
    bufp->fullIData(oldp+112,(vlSelfRef.CpuTop__DOT__axiClient__DOT__rdataReg),32);
    bufp->fullBit(oldp+113,(vlSelfRef.CpuTop__DOT__axiClient__DOT__rvalidReg));
    bufp->fullBit(oldp+114,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_7)) 
                             & ((4U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
    bufp->fullBit(oldp+115,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_16) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
    bufp->fullBit(oldp+116,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg))))));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_16) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
    bufp->fullBit(oldp+118,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg))))));
    bufp->fullBit(oldp+119,(vlSelfRef.CpuTop__DOT__axiClient__DOT__bvalidReg));
    bufp->fullBit(oldp+120,(((~ ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_11) 
                                 | (7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)))) 
                             & ((8U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
    bufp->fullQData(oldp+121,(vlSelfRef.CpuTop__DOT__axiClient__DOT__mtime),64);
    bufp->fullBit(oldp+123,(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFullReg));
    bufp->fullBit(oldp+124,(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFullReg));
    bufp->fullBit(oldp+125,(vlSelfRef.CpuTop__DOT__axiClient__DOT__arFire));
    bufp->fullBit(oldp+126,(vlSelfRef.CpuTop__DOT__axiClient__DOT__awFire));
    bufp->fullBit(oldp+127,(vlSelfRef.CpuTop__DOT__axiClient__DOT__wFire));
    bufp->fullBit(oldp+128,(vlSelfRef.CpuTop__DOT__axiClient__DOT__writeFire));
    bufp->fullIData(oldp+129,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                ? (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_12) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2))
                                    ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                : (((1U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6))
                                    ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg))),32);
    bufp->fullBit(oldp+130,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                              ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                 & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)) 
                                    & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                              : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                 & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6)) 
                                    & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg))))));
    bufp->fullBit(oldp+131,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                              ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_18) 
                                 & (2U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                              : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_17) 
                                 & (2U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg))))));
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg)))));
    bufp->fullIData(oldp+133,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rdataReg),32);
    bufp->fullBit(oldp+134,(vlSelfRef.CpuTop__DOT__axiSram__DOT__rvalidReg));
    bufp->fullBit(oldp+135,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_8)) 
                             & ((2U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
    bufp->fullBit(oldp+136,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_15) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
    bufp->fullCData(oldp+137,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_strb),4);
    bufp->fullBit(oldp+138,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_15) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
    bufp->fullBit(oldp+139,(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg));
    bufp->fullBit(oldp+140,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_21)) 
                             & ((6U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
    bufp->fullBit(oldp+141,(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire));
    bufp->fullCData(oldp+142,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wStrbReg),4);
    bufp->fullIData(oldp+143,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire)
                                ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                    ? (((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_12) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2))
                                        ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                    : (((1U != (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                        | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6))
                                        ? 0U : vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg))
                                : 0U)),32);
    bufp->fullBit(oldp+144,(((~ ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                  ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                     & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_2)) 
                                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_id)))
                                  : ((1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                     & ((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT___GEN_6)) 
                                        & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg))))) 
                             & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__arFire))));
    bufp->fullIData(oldp+145,(vlSelfRef.CpuTop__DOT__axiSram__DOT___paddrRead_data),32);
    bufp->fullIData(oldp+146,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                ? ((1U & ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))) 
                                          | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite)))
                                    ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2)
                                    ? vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg
                                    : 0U))),32);
    bufp->fullBit(oldp+147,(((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                              ? ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_1) 
                                 & (1U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))
                              : (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2))));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg)))));
    bufp->fullIData(oldp+149,(vlSelfRef.CpuTop__DOT__axiUart__DOT__rdataReg),32);
    bufp->fullBit(oldp+150,(vlSelfRef.CpuTop__DOT__axiUart__DOT__rvalidReg));
    bufp->fullBit(oldp+151,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_6)) 
                             & ((3U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_r_ready)))));
    bufp->fullBit(oldp+152,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_4) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_14))));
    bufp->fullCData(oldp+153,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_strb),4);
    bufp->fullBit(oldp+154,(((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_4) 
                             & (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_13))));
    bufp->fullBit(oldp+155,(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg));
    bufp->fullBit(oldp+156,(((~ (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_11)) 
                             & ((7U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state)) 
                                & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_b_ready)))));
    bufp->fullCData(oldp+157,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wStrbReg),4);
    bufp->fullBit(oldp+158,(vlSelfRef.CpuTop__DOT__axiUart__DOT__arFire));
    bufp->fullIData(oldp+159,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__arFire)
                                ? ((0U == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__state))
                                    ? ((1U & ((~ ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__axiArFire) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__target)))) 
                                              | (IData)(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite)))
                                        ? 0U : vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_axi_ar_addr)
                                    : ((IData)(vlSelfRef.CpuTop__DOT__xbar__DOT____VdfgRegularize_h8eba6f27_0_2)
                                        ? vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg
                                        : 0U)) : 0U)),32);
    bufp->fullIData(oldp+160,(vlSelfRef.CpuTop__DOT__axiUart__DOT___paddrRead_data),32);
    bufp->fullIData(oldp+161,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
    bufp->fullIData(oldp+162,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
    bufp->fullCData(oldp+163,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
                                               ? ((2U 
                                                   & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                                   ? 0x0cU
                                                   : 3U)
                                               : ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN)
                                                   ? 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out))
                                                   : (IData)(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask))))),4);
    bufp->fullIData(oldp+164,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
                                ? ((0x0000ffffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                                   << (0x00000010U 
                                       & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                          << 3U))) : 
                               ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN)
                                 ? ((0x000000ffU & vlSelfRef.CpuTop__DOT__reg_1_mem_wdata) 
                                    << (0x00000018U 
                                        & (vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out 
                                           << 3U)))
                                 : vlSelfRef.CpuTop__DOT__reg_1_mem_wdata))),32);
    bufp->fullIData(oldp+165,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
    bufp->fullIData(oldp+166,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
    bufp->fullBit(oldp+167,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
    bufp->fullIData(oldp+168,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                    : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                        ? (0xfffffffeU 
                                           & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                        : 0U)))),32);
    bufp->fullBit(oldp+169,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
    bufp->fullIData(oldp+170,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
    bufp->fullBit(oldp+171,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                             & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
    bufp->fullIData(oldp+172,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+173,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+174,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
    bufp->fullIData(oldp+175,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
    bufp->fullQData(oldp+176,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
    bufp->fullIData(oldp+178,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+179,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
    bufp->fullBit(oldp+180,(vlSelfRef.CpuTop__DOT___idu_io_in_ready));
    bufp->fullBit(oldp+181,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                             & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))));
    bufp->fullCData(oldp+182,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
    bufp->fullIData(oldp+183,(((0x13U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst))
                                ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata
                                : ((0x37U == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst))
                                    ? 0U : ((0x17U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                             ? vlSelfRef.CpuTop__DOT__reg_pc
                                             : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata)))),32);
    bufp->fullIData(oldp+184,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
    bufp->fullCData(oldp+185,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 7U))),5);
    bufp->fullBit(oldp+186,(((0x13U == (0x0000007fU 
                                        & vlSelfRef.CpuTop__DOT__reg_inst))
                              ? (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9)
                              : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_17) 
                                 | ((0x63U != (0x0000007fU 
                                               & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                    & ((3U == (0x0000007fU 
                                               & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                       | ((0x23U != 
                                           (0x0000007fU 
                                            & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                          & ((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst))
                                              ? ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_27) 
                                                 & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_9))
                                              : (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33)))))))));
    bufp->fullCData(oldp+187,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                ? 0U : ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_16)
                                         ? 2U : ((0x63U 
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
    bufp->fullBit(oldp+188,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                             & (3U == (0x0000007fU 
                                       & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullBit(oldp+189,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                             & (0x23U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullCData(oldp+190,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                      | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                                ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x0000000cU)))),3);
    bufp->fullCData(oldp+191,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                                ? 0U : (0x0000000fU 
                                        & (- (IData)((IData)(
                                                             (0x00002023U 
                                                              == 
                                                              (0x0000707fU 
                                                               & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
    bufp->fullIData(oldp+192,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
    bufp->fullBit(oldp+193,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                             & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))));
    bufp->fullSData(oldp+194,((vlSelfRef.CpuTop__DOT__reg_inst 
                               >> 0x00000014U)),12);
    bufp->fullCData(oldp+195,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                     >> 0x0000000cU))),3);
    bufp->fullIData(oldp+196,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
    bufp->fullIData(oldp+197,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x0000000fU))),32);
    bufp->fullBit(oldp+198,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                             & (0x67U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullBit(oldp+199,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                             & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10))));
    bufp->fullCData(oldp+200,(((1U & ((~ ((~ (0U != 
                                              (7U & 
                                               (vlSelfRef.CpuTop__DOT__reg_inst 
                                                >> 0x0000000cU)))) 
                                          & ((0x73U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                             & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)))) 
                                      | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)))
                                ? 0U : 0x0bU)),4);
    bufp->fullBit(oldp+201,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                             & (0x18U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                          >> 0x00000019U)))));
    bufp->fullBit(oldp+202,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
    bufp->fullBit(oldp+203,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
    bufp->fullCData(oldp+204,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_addr),5);
    bufp->fullIData(oldp+205,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
    bufp->fullBit(oldp+206,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT___reg_T_1)) 
                                 | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20))) 
                             & ((0x6fU == (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                | ((0x67U != (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1))))));
    bufp->fullIData(oldp+207,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
                                ? 0U : ((0x6fU == (0x0000007fU 
                                                   & vlSelfRef.CpuTop__DOT__reg_inst))
                                         ? (vlSelfRef.CpuTop__DOT__reg_pc 
                                            + (((- (IData)(
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
                                         : ((1U & (
                                                   (~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1)) 
                                                   | (0x67U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.CpuTop__DOT__reg_inst))))
                                             ? 0U : 
                                            (vlSelfRef.CpuTop__DOT__reg_pc 
                                             + (((- (IData)(
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
    bufp->fullIData(oldp+208,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
    bufp->fullIData(oldp+209,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
    bufp->fullIData(oldp+210,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
    bufp->fullIData(oldp+211,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
    bufp->fullIData(oldp+212,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
    bufp->fullIData(oldp+213,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
    bufp->fullIData(oldp+214,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
    bufp->fullIData(oldp+215,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
    bufp->fullIData(oldp+216,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
    bufp->fullIData(oldp+217,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
    bufp->fullIData(oldp+218,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
    bufp->fullIData(oldp+219,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
    bufp->fullIData(oldp+220,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
    bufp->fullIData(oldp+221,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
    bufp->fullIData(oldp+222,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
    bufp->fullIData(oldp+223,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
    bufp->fullIData(oldp+224,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
    bufp->fullIData(oldp+225,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
    bufp->fullIData(oldp+226,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
    bufp->fullIData(oldp+227,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
    bufp->fullIData(oldp+228,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
    bufp->fullIData(oldp+229,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
    bufp->fullIData(oldp+230,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
    bufp->fullIData(oldp+231,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
    bufp->fullIData(oldp+232,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
    bufp->fullIData(oldp+233,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
    bufp->fullIData(oldp+234,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
    bufp->fullIData(oldp+235,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
    bufp->fullIData(oldp+236,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
    bufp->fullIData(oldp+237,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
    bufp->fullIData(oldp+238,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
    bufp->fullIData(oldp+239,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
    bufp->fullCData(oldp+240,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                ? ((0x00002000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                    ? ((0x00001000U 
                                        & vlSelfRef.CpuTop__DOT__reg_inst)
                                        ? 2U : 3U) : 
                                   ((0x00001000U & vlSelfRef.CpuTop__DOT__reg_inst)
                                     ? ((0x40000000U 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)
                                         ? 8U : 7U)
                                     : 4U)) : ((0x00002000U 
                                                & vlSelfRef.CpuTop__DOT__reg_inst)
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)
                                                    ? 9U
                                                    : 5U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.CpuTop__DOT__reg_inst)
                                                    ? 6U
                                                    : 
                                                   (1U 
                                                    & ((~ 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                             >> 0x0000000cU)))) 
                                                       & (vlSelfRef.CpuTop__DOT__reg_inst 
                                                          >> 0x0000001eU))))))),4);
    bufp->fullBit(oldp+241,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
    bufp->fullCData(oldp+242,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x0000000fU))),5);
    bufp->fullIData(oldp+243,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
    bufp->fullCData(oldp+244,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x00000014U))),5);
    bufp->fullIData(oldp+245,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
    bufp->fullBit(oldp+246,((2U == (IData)(vlSelfRef.CpuTop__DOT__ifu__DOT__state))));
    bufp->fullIData(oldp+247,(vlSelfRef.CpuTop__DOT__ifu__DOT__outPcReg),32);
    bufp->fullIData(oldp+248,(vlSelfRef.CpuTop__DOT__ifu__DOT__outInstReg),32);
    bufp->fullIData(oldp+249,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
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
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                             ? (vlSelfRef.CpuTop__DOT__reg_pc 
                                                + (
                                                   ((- (IData)(
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
    bufp->fullIData(oldp+250,(vlSelfRef.CpuTop__DOT__ifu__DOT__reqPcReg),32);
    bufp->fullCData(oldp+251,(vlSelfRef.CpuTop__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+252,(vlSelfRef.CpuTop__DOT___mem_io_in_ready));
    bufp->fullBit(oldp+253,(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
    bufp->fullIData(oldp+254,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                ? vlSelfRef.CpuTop__DOT__reg_2_pc
                                : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc)),32);
    bufp->fullIData(oldp+255,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                ? vlSelfRef.CpuTop__DOT__reg_2_inst
                                : vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst)),32);
    bufp->fullBit(oldp+256,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_en));
    bufp->fullCData(oldp+257,(vlSelfRef.CpuTop__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+258,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc),32);
    bufp->fullIData(oldp+259,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_inst),32);
    bufp->fullIData(oldp+260,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_alu_result),32);
    bufp->fullBit(oldp+261,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_ren));
    bufp->fullCData(oldp+262,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_funct3),3);
    bufp->fullIData(oldp+263,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_addr),32);
    bufp->fullIData(oldp+264,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_load_addr),32);
    bufp->fullCData(oldp+265,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wmask),4);
    bufp->fullIData(oldp+266,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_mem_wdata),32);
    bufp->fullCData(oldp+267,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_addr),5);
    bufp->fullBit(oldp+268,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_en));
    bufp->fullCData(oldp+269,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_wb_sel),2);
    bufp->fullIData(oldp+270,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_pc_plus4),32);
    bufp->fullIData(oldp+271,(vlSelfRef.CpuTop__DOT__mem__DOT__reqReg_csr_rdata),32);
    bufp->fullCData(oldp+272,(vlSelfRef.CpuTop__DOT__mem__DOT__req_load_addr),2);
    bufp->fullBit(oldp+273,(vlSelfRef.CpuTop__DOT__mem__DOT__awSentReg));
    bufp->fullBit(oldp+274,(vlSelfRef.CpuTop__DOT__mem__DOT__wSentReg));
    bufp->fullIData(oldp+275,(vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata),32);
    bufp->fullCData(oldp+276,(((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                ? ((IData)(vlSelfRef.CpuTop__DOT__reg_valid_2)
                                    ? ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_ren)
                                        ? ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__memArFire)
                                            ? 1U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        : ((IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_wen)
                                            ? 2U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))
                                    : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                : ((1U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                    ? (((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_valid) 
                                        & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_r_ready))
                                        ? 0U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                    : ((2U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        ? ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_5)
                                            ? 3U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))
                                        : (((3U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)) 
                                            & ((IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_ready) 
                                               & (IData)(vlSelfRef.CpuTop__DOT__axiArbiter__DOT__io_mem_b_valid)))
                                            ? 0U : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state)))))),2);
    bufp->fullCData(oldp+277,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp_0),8);
    bufp->fullIData(oldp+278,(((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                ? ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                    ? 0U : ((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
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
    bufp->fullSData(oldp+279,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
    bufp->fullCData(oldp+280,(vlSelfRef.CpuTop__DOT__xbar__DOT__state),4);
    bufp->fullIData(oldp+281,(vlSelfRef.CpuTop__DOT__xbar__DOT__readAddrReg),32);
    bufp->fullBit(oldp+282,(vlSelfRef.CpuTop__DOT__xbar__DOT__readIdReg));
    bufp->fullCData(oldp+283,(vlSelfRef.CpuTop__DOT__xbar__DOT__readTargetReg),2);
    bufp->fullIData(oldp+284,(vlSelfRef.CpuTop__DOT__xbar__DOT__awAddrReg),32);
    bufp->fullBit(oldp+285,(vlSelfRef.CpuTop__DOT__xbar__DOT__awIdReg));
    bufp->fullCData(oldp+286,(vlSelfRef.CpuTop__DOT__xbar__DOT__awTargetReg),2);
    bufp->fullBit(oldp+287,(vlSelfRef.CpuTop__DOT__xbar__DOT__awFullReg));
    bufp->fullIData(oldp+288,(vlSelfRef.CpuTop__DOT__xbar__DOT__wDataReg),32);
    bufp->fullCData(oldp+289,(vlSelfRef.CpuTop__DOT__xbar__DOT__wStrbReg),4);
    bufp->fullBit(oldp+290,(vlSelfRef.CpuTop__DOT__xbar__DOT__wFullReg));
    bufp->fullBit(oldp+291,(vlSelfRef.CpuTop__DOT__xbar__DOT__awSentReg));
    bufp->fullBit(oldp+292,(vlSelfRef.CpuTop__DOT__xbar__DOT__wSentReg));
    bufp->fullBit(oldp+293,(vlSelfRef.CpuTop__DOT__xbar__DOT__willBeWrite));
    bufp->fullCData(oldp+294,(vlSelfRef.CpuTop__DOT__xbar__DOT__target),2);
    bufp->fullIData(oldp+295,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_addr),32);
    bufp->fullBit(oldp+296,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_id));
    bufp->fullIData(oldp+297,(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_data),32);
    bufp->fullIData(oldp+298,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awAddrReg),32);
    bufp->fullBit(oldp+299,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awIdReg));
    bufp->fullBit(oldp+300,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg));
    bufp->fullIData(oldp+301,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wDataReg),32);
    bufp->fullBit(oldp+302,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg));
    bufp->fullBit(oldp+303,(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFire));
    bufp->fullBit(oldp+304,(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFire));
    bufp->fullCData(oldp+305,(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeStrb),4);
    bufp->fullBit(oldp+306,(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire));
    bufp->fullIData(oldp+307,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                ? ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)
                                    ? vlSelfRef.CpuTop__DOT__axiSram__DOT__awAddrReg
                                    : vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_addr)
                                : 0U)),32);
    bufp->fullIData(oldp+308,(vlSelfRef.CpuTop__DOT__axiSram__DOT____Vcellinp__paddrWrite__len),32);
    bufp->fullIData(oldp+309,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg)
                                ? vlSelfRef.CpuTop__DOT__axiSram__DOT__wDataReg
                                : vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_w_data)),32);
    bufp->fullIData(oldp+310,(((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire)
                                ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeStrb)
                                : 0U)),32);
    bufp->fullBit(oldp+311,(((~ ((IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)
                                  ? (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awIdReg)
                                  : (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__io_axi_aw_id))) 
                             & (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__writeFire))));
    bufp->fullIData(oldp+312,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_addr),32);
    bufp->fullIData(oldp+313,(vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_data),32);
    bufp->fullIData(oldp+314,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awAddrReg),32);
    bufp->fullBit(oldp+315,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg));
    bufp->fullIData(oldp+316,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wDataReg),32);
    bufp->fullBit(oldp+317,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg));
    bufp->fullBit(oldp+318,(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFire));
    bufp->fullBit(oldp+319,(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFire));
    bufp->fullCData(oldp+320,(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeStrb),4);
    bufp->fullBit(oldp+321,(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire));
    bufp->fullIData(oldp+322,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire)
                                ? ((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg)
                                    ? vlSelfRef.CpuTop__DOT__axiUart__DOT__awAddrReg
                                    : vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_aw_addr)
                                : 0U)),32);
    bufp->fullIData(oldp+323,(vlSelfRef.CpuTop__DOT__axiUart__DOT____Vcellinp__paddrWrite__len),32);
    bufp->fullIData(oldp+324,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg)
                                ? vlSelfRef.CpuTop__DOT__axiUart__DOT__wDataReg
                                : vlSelfRef.CpuTop__DOT__axiUart__DOT__io_axi_w_data)),32);
    bufp->fullIData(oldp+325,(((IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeFire)
                                ? (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__writeStrb)
                                : 0U)),32);
    bufp->fullBit(oldp+326,(vlSelfRef.clock));
    bufp->fullBit(oldp+327,(vlSelfRef.reset));
    bufp->fullIData(oldp+328,(vlSelfRef.io_debug_pc),32);
    bufp->fullIData(oldp+329,(vlSelfRef.io_debug_inst),32);
    bufp->fullBit(oldp+330,(vlSelfRef.io_debug_valid));
    bufp->fullWData(oldp+331,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->fullIData(oldp+363,(vlSelfRef.io_si_pc),32);
    bufp->fullIData(oldp+364,(vlSelfRef.io_si_inst),32);
    bufp->fullBit(oldp+365,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__awFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg))))));
    bufp->fullBit(oldp+366,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__wFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiSram__DOT__bvalidReg))))));
    bufp->fullBit(oldp+367,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__awFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))))));
    bufp->fullBit(oldp+368,((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__wFullReg)) 
                                   & (~ (IData)(vlSelfRef.CpuTop__DOT__axiUart__DOT__bvalidReg))))));
}
