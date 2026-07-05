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
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+169,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+201,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("CpuTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"io_debug_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"io_debug_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+169,0,"io_debug_regs_flat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+201,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"redirect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+0,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"reg_1_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"reg_1_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"reg_1_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"reg_1_alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg_1_alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"reg_1_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"reg_1_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_1_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"reg_1_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"reg_1_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_1_mem_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"reg_1_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"reg_1_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"reg_1_csr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"reg_1_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+17,0,"reg_1_csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"reg_1_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"reg_1_csr_zimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"reg_1_is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"reg_1_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_1_exception_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"reg_1_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"reg_valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"idu_io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_2_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"reg_2_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_2_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"reg_2_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"reg_2_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"reg_2_mem_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"reg_2_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_2_load_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"reg_2_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"reg_2_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"reg_2_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+34,0,"reg_2_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"reg_2_wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"reg_2_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"reg_2_csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"reg_valid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"exu_io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"reg_3_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"reg_3_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"reg_3_wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"reg_3_wb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"reg_3_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"reg_valid_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"io_in_bits_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"io_in_bits_alu_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_in_bits_alu_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_in_bits_wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"io_in_bits_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_in_bits_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_in_bits_mem_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"io_in_bits_mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"io_in_bits_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"io_in_bits_csr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_in_bits_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+17,0,"io_in_bits_csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_in_bits_csr_zimm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_in_bits_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_in_bits_exception_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"io_in_bits_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_out_bits_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_out_bits_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"io_out_bits_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_out_bits_mem_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"io_out_bits_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_out_bits_load_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_out_bits_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"io_out_bits_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_out_bits_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"io_out_bits_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"io_fwd_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_fwd_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+150,0,"io_fwd_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"io_fwd_wb_is_Load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+17,0,"io_csr_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_zimm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"io_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_mtvec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"io_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_exception_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"io_exception_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"io_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"io_mret_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mstatush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+55,0,"mcycle_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+52,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"old_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+0,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+0,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_out_bits_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"io_out_bits_alu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"io_out_bits_alu_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+63,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"io_out_bits_wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"io_out_bits_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_out_bits_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_out_bits_mem_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"io_out_bits_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"io_out_bits_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"io_out_bits_csr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"io_out_bits_csr_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+71,0,"io_out_bits_csr_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+153,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"io_out_bits_csr_zimm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_out_bits_exception",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"io_out_bits_exception_cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+76,0,"io_out_bits_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"io_fwd_exu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_fwd_exu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+150,0,"io_fwd_exu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"io_fwd_exu_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_fwd_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"io_fwd_mem_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"io_fwd_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"io_debug_regs_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"io_debug_regs_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"io_debug_regs_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_debug_regs_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_debug_regs_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_debug_regs_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_debug_regs_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_debug_regs_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"io_debug_regs_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_debug_regs_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_debug_regs_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"io_debug_regs_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_debug_regs_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"io_debug_regs_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"io_debug_regs_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"io_debug_regs_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"io_debug_regs_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"io_debug_regs_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"io_debug_regs_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_debug_regs_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"io_debug_regs_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"io_debug_regs_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"io_debug_regs_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"io_debug_regs_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"io_debug_regs_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"io_debug_regs_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"io_debug_regs_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"io_debug_regs_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_debug_regs_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"io_debug_regs_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"io_debug_regs_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+113,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"io_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+115,0,"io_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"io_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"io_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"io_debug_regs_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"io_debug_regs_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"io_debug_regs_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_debug_regs_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_debug_regs_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_debug_regs_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_debug_regs_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_debug_regs_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"io_debug_regs_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_debug_regs_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"io_debug_regs_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"io_debug_regs_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_debug_regs_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"io_debug_regs_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"io_debug_regs_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"io_debug_regs_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"io_debug_regs_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"io_debug_regs_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"io_debug_regs_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_debug_regs_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"io_debug_regs_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"io_debug_regs_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"io_debug_regs_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"io_debug_regs_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"io_debug_regs_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"io_debug_regs_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"io_debug_regs_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"io_debug_regs_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_debug_regs_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"io_debug_regs_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"io_debug_regs_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"io_redirect_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"io_redirect_bits_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"io_axi_if_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"io_axi_if_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"io_axi_if_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"io_axi_if_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"io_si_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"io_si_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ifuSram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+204,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("paddrWrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+204,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_in_bits_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"io_in_bits_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_in_bits_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"io_in_bits_mem_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"io_in_bits_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_in_bits_load_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"io_in_bits_mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"io_in_bits_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+34,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"io_in_bits_wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"io_in_bits_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_out_bits_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+34,0,"io_out_bits_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"io_out_bits_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"io_axi_mem_ar_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"io_axi_mem_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"io_axi_mem_r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"io_axi_mem_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_axi_mem_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"io_axi_mem_aw_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"io_axi_mem_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"io_axi_mem_w_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"io_axi_mem_w_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+157,0,"io_axi_mem_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_axi_mem_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_axi_mem_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_fwd_wb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"io_fwd_wb_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"io_fwd_wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"io_axi_mem_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_axi_mem_r_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"io_axi_mem_b_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"load_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memSram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_axi_ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"io_axi_r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"io_axi_aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"io_axi_w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"io_axi_w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+157,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rvalidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"writeFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"bvalidreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("paddrRead", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("paddrWrite", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"is_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"io_in_bits_wb_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"io_in_bits_wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_in_bits_wb_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"io_wb_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"io_wb_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+203,(4U),32);
    bufp->fullBit(oldp+204,(1U));
    bufp->fullBit(oldp+205,(0U));
    bufp->fullIData(oldp+206,(0U),32);
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
    bufp->fullIData(oldp+0,(vlSelfRef.CpuTop__DOT__reg_pc),32);
    bufp->fullIData(oldp+1,(vlSelfRef.CpuTop__DOT__reg_inst),32);
    bufp->fullBit(oldp+2,(vlSelfRef.CpuTop__DOT__reg_valid));
    bufp->fullIData(oldp+3,(vlSelfRef.CpuTop__DOT__reg_1_pc),32);
    bufp->fullIData(oldp+4,(vlSelfRef.CpuTop__DOT__reg_1_inst),32);
    bufp->fullCData(oldp+5,(vlSelfRef.CpuTop__DOT__reg_1_alu_op),4);
    bufp->fullIData(oldp+6,(vlSelfRef.CpuTop__DOT__reg_1_alu_a),32);
    bufp->fullIData(oldp+7,(vlSelfRef.CpuTop__DOT__reg_1_alu_b),32);
    bufp->fullCData(oldp+8,(vlSelfRef.CpuTop__DOT__reg_1_wb_addr),5);
    bufp->fullBit(oldp+9,(vlSelfRef.CpuTop__DOT__reg_1_wb_en));
    bufp->fullCData(oldp+10,(vlSelfRef.CpuTop__DOT__reg_1_wb_sel),2);
    bufp->fullBit(oldp+11,(vlSelfRef.CpuTop__DOT__reg_1_mem_ren));
    bufp->fullBit(oldp+12,(vlSelfRef.CpuTop__DOT__reg_1_mem_wen));
    bufp->fullCData(oldp+13,(vlSelfRef.CpuTop__DOT__reg_1_mem_funct3),3);
    bufp->fullCData(oldp+14,(vlSelfRef.CpuTop__DOT__reg_1_mem_wmask),4);
    bufp->fullBit(oldp+15,(vlSelfRef.CpuTop__DOT__reg_1_csr_en));
    bufp->fullSData(oldp+16,(vlSelfRef.CpuTop__DOT__reg_1_csr_addr),12);
    bufp->fullCData(oldp+17,(vlSelfRef.CpuTop__DOT__reg_1_csr_op),3);
    bufp->fullIData(oldp+18,(vlSelfRef.CpuTop__DOT__reg_1_csr_wdata),32);
    bufp->fullIData(oldp+19,(vlSelfRef.CpuTop__DOT__reg_1_csr_zimm),32);
    bufp->fullBit(oldp+20,(vlSelfRef.CpuTop__DOT__reg_1_is_jalr));
    bufp->fullBit(oldp+21,(vlSelfRef.CpuTop__DOT__reg_1_exception));
    bufp->fullCData(oldp+22,(vlSelfRef.CpuTop__DOT__reg_1_exception_cause),4);
    bufp->fullBit(oldp+23,(vlSelfRef.CpuTop__DOT__reg_1_mret));
    bufp->fullBit(oldp+24,(vlSelfRef.CpuTop__DOT__reg_valid_1));
    bufp->fullBit(oldp+25,(vlSelfRef.CpuTop__DOT__idu_io_out_ready));
    bufp->fullIData(oldp+26,(vlSelfRef.CpuTop__DOT__reg_2_pc),32);
    bufp->fullIData(oldp+27,(vlSelfRef.CpuTop__DOT__reg_2_inst),32);
    bufp->fullIData(oldp+28,(vlSelfRef.CpuTop__DOT__reg_2_alu_result),32);
    bufp->fullBit(oldp+29,(vlSelfRef.CpuTop__DOT__reg_2_mem_ren));
    bufp->fullBit(oldp+30,(vlSelfRef.CpuTop__DOT__reg_2_mem_wen));
    bufp->fullCData(oldp+31,(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3),3);
    bufp->fullCData(oldp+32,(vlSelfRef.CpuTop__DOT__reg_2_mem_wmask),4);
    bufp->fullCData(oldp+33,(vlSelfRef.CpuTop__DOT__reg_2_wb_addr),5);
    bufp->fullBit(oldp+34,(vlSelfRef.CpuTop__DOT__reg_2_wb_en));
    bufp->fullCData(oldp+35,(vlSelfRef.CpuTop__DOT__reg_2_wb_sel),2);
    bufp->fullIData(oldp+36,(vlSelfRef.CpuTop__DOT__reg_2_pc_plus4),32);
    bufp->fullIData(oldp+37,(vlSelfRef.CpuTop__DOT__reg_2_csr_rdata),32);
    bufp->fullBit(oldp+38,(vlSelfRef.CpuTop__DOT__reg_valid_2));
    bufp->fullBit(oldp+39,(vlSelfRef.CpuTop__DOT___exu_io_in_ready));
    bufp->fullIData(oldp+40,(vlSelfRef.CpuTop__DOT__reg_3_pc),32);
    bufp->fullIData(oldp+41,(vlSelfRef.CpuTop__DOT__reg_3_inst),32);
    bufp->fullCData(oldp+42,(vlSelfRef.CpuTop__DOT__reg_3_wb_addr),5);
    bufp->fullBit(oldp+43,(vlSelfRef.CpuTop__DOT__reg_3_wb_en));
    bufp->fullIData(oldp+44,(vlSelfRef.CpuTop__DOT__reg_3_wb_data),32);
    bufp->fullBit(oldp+45,(vlSelfRef.CpuTop__DOT__reg_valid_3));
    bufp->fullIData(oldp+46,(((IData)(4U) + vlSelfRef.CpuTop__DOT__reg_1_pc)),32);
    bufp->fullIData(oldp+47,(vlSelfRef.CpuTop__DOT___exu_io_out_bits_csr_rdata),32);
    bufp->fullBit(oldp+48,(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid));
    bufp->fullBit(oldp+49,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_en));
    bufp->fullBit(oldp+50,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___io_fwd_wb_is_Load_T) 
                            & (1U == (IData)(vlSelfRef.CpuTop__DOT__reg_1_wb_sel)))));
    bufp->fullIData(oldp+51,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+52,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+53,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatus),32);
    bufp->fullIData(oldp+54,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mstatush),32);
    bufp->fullQData(oldp+55,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcycle_64),64);
    bufp->fullIData(oldp+57,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+58,(vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__casez_tmp),32);
    bufp->fullBit(oldp+59,(vlSelfRef.CpuTop__DOT___idu_io_in_ready));
    bufp->fullBit(oldp+60,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall)) 
                            & (IData)(vlSelfRef.CpuTop__DOT__reg_valid))));
    bufp->fullCData(oldp+61,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_op),4);
    bufp->fullCData(oldp+62,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                             >> 7U))),5);
    bufp->fullBit(oldp+63,(((0x13U == (0x0000007fU 
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
    bufp->fullCData(oldp+64,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)) 
                            & (3U == (0x0000007fU & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullBit(oldp+66,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)) 
                            & (0x23U == (0x0000007fU 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullCData(oldp+67,(((1U & ((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_25)) 
                                     | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_22)))
                               ? 0U : (7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                             >> 0x0000000cU)))),3);
    bufp->fullCData(oldp+68,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_24)
                               ? 0U : (0x0000000fU 
                                       & (- (IData)((IData)(
                                                            (0x00002023U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSelfRef.CpuTop__DOT__reg_inst)))))))),4);
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)) 
                            & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_33))));
    bufp->fullSData(oldp+70,((vlSelfRef.CpuTop__DOT__reg_inst 
                              >> 0x00000014U)),12);
    bufp->fullCData(oldp+71,((7U & (vlSelfRef.CpuTop__DOT__reg_inst 
                                    >> 0x0000000cU))),3);
    bufp->fullIData(oldp+72,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                             >> 0x0000000fU))),32);
    bufp->fullBit(oldp+73,(((~ (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_13)) 
                            & (0x67U == (0x0000007fU 
                                         & vlSelfRef.CpuTop__DOT__reg_inst)))));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                            & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10))));
    bufp->fullCData(oldp+75,(((1U & ((~ ((~ (0U != 
                                             (7U & 
                                              (vlSelfRef.CpuTop__DOT__reg_inst 
                                               >> 0x0000000cU)))) 
                                         & ((0x73U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                            & (IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_10)))) 
                                     | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_32)))
                               ? 0U : 0x0bU)),4);
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT____VdfgRegularize_h52656aab_0_11) 
                            & (0x18U == (vlSelfRef.CpuTop__DOT__reg_inst 
                                         >> 0x00000019U)))));
    bufp->fullBit(oldp+77,(vlSelfRef.CpuTop__DOT__idu__DOT__io_reg_wen));
    bufp->fullBit(oldp+78,(vlSelfRef.CpuTop__DOT__idu__DOT__io_fwd_mem_wen));
    bufp->fullIData(oldp+79,(vlSelfRef.CpuTop__DOT___mem_io_out_bits_wb_data),32);
    bufp->fullIData(oldp+80,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_1),32);
    bufp->fullIData(oldp+81,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_2),32);
    bufp->fullIData(oldp+82,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_3),32);
    bufp->fullIData(oldp+83,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_4),32);
    bufp->fullIData(oldp+84,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_5),32);
    bufp->fullIData(oldp+85,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_6),32);
    bufp->fullIData(oldp+86,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_7),32);
    bufp->fullIData(oldp+87,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_8),32);
    bufp->fullIData(oldp+88,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_9),32);
    bufp->fullIData(oldp+89,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_10),32);
    bufp->fullIData(oldp+90,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_11),32);
    bufp->fullIData(oldp+91,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_12),32);
    bufp->fullIData(oldp+92,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_13),32);
    bufp->fullIData(oldp+93,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_14),32);
    bufp->fullIData(oldp+94,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_15),32);
    bufp->fullIData(oldp+95,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_16),32);
    bufp->fullIData(oldp+96,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_17),32);
    bufp->fullIData(oldp+97,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_18),32);
    bufp->fullIData(oldp+98,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_19),32);
    bufp->fullIData(oldp+99,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_20),32);
    bufp->fullIData(oldp+100,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_21),32);
    bufp->fullIData(oldp+101,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_22),32);
    bufp->fullIData(oldp+102,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_23),32);
    bufp->fullIData(oldp+103,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_24),32);
    bufp->fullIData(oldp+104,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_25),32);
    bufp->fullIData(oldp+105,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_26),32);
    bufp->fullIData(oldp+106,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_27),32);
    bufp->fullIData(oldp+107,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_28),32);
    bufp->fullIData(oldp+108,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_29),32);
    bufp->fullIData(oldp+109,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_30),32);
    bufp->fullIData(oldp+110,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__regs_31),32);
    bufp->fullIData(oldp+111,(vlSelfRef.CpuTop__DOT__idu__DOT__immI),32);
    bufp->fullCData(oldp+112,(((0x00004000U & vlSelfRef.CpuTop__DOT__reg_inst)
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
    bufp->fullBit(oldp+113,(vlSelfRef.CpuTop__DOT__idu__DOT__stall));
    bufp->fullCData(oldp+114,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x0000000fU))),5);
    bufp->fullIData(oldp+115,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata1),32);
    bufp->fullCData(oldp+116,((0x0000001fU & (vlSelfRef.CpuTop__DOT__reg_inst 
                                              >> 0x00000014U))),5);
    bufp->fullIData(oldp+117,(vlSelfRef.CpuTop__DOT__idu__DOT__regfile__DOT__io_rdata2),32);
    bufp->fullBit(oldp+118,(vlSelfRef.CpuTop__DOT__ifuSram__DOT__rvalidReg));
    bufp->fullIData(oldp+119,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc_reg),32);
    bufp->fullIData(oldp+120,(vlSelfRef.CpuTop__DOT__ifuSram__DOT__rdataReg),32);
    bufp->fullIData(oldp+121,(vlSelfRef.CpuTop__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+122,((0U == (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__state))));
    bufp->fullBit(oldp+123,(vlSelfRef.CpuTop__DOT___mem_io_out_valid));
    bufp->fullBit(oldp+124,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_ar_valid));
    bufp->fullIData(oldp+125,(vlSelfRef.CpuTop__DOT__memSram__DOT__rdataReg),32);
    bufp->fullBit(oldp+126,(vlSelfRef.CpuTop__DOT__memSram__DOT__rvalidReg));
    bufp->fullBit(oldp+127,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_r_ready));
    bufp->fullBit(oldp+128,(vlSelfRef.CpuTop__DOT__memSram__DOT__bvalidreg));
    bufp->fullBit(oldp+129,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_b_ready));
    bufp->fullCData(oldp+130,(vlSelfRef.CpuTop__DOT__mem__DOT__state),2);
    bufp->fullIData(oldp+131,(vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata),32);
    bufp->fullCData(oldp+132,(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp),8);
    bufp->fullIData(oldp+133,(((4U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                ? ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                    ? 0U : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                             ? (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half)
                                             : (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))
                                : ((2U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                    ? ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                        ? 0U : vlSelfRef.CpuTop__DOT__mem__DOT__mem_rdata)
                                    : ((1U & (IData)(vlSelfRef.CpuTop__DOT__reg_2_mem_funct3))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half) 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__load_half))
                                        : (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.CpuTop__DOT__mem__DOT__casez_tmp)))))),32);
    bufp->fullSData(oldp+134,(vlSelfRef.CpuTop__DOT__mem__DOT__load_half),16);
    bufp->fullCData(oldp+135,((0x0000000fU & ((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
    bufp->fullIData(oldp+136,(((IData)(vlSelfRef.CpuTop__DOT__reg_1_exception)
                                ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mtvec
                                : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_mret)
                                    ? vlSelfRef.CpuTop__DOT__exu__DOT__csr__DOT__mepc
                                    : ((IData)(vlSelfRef.CpuTop__DOT__reg_1_is_jalr)
                                        ? (0xfffffffeU 
                                           & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)
                                        : 0U)))),32);
    bufp->fullIData(oldp+137,(((0x13U == (0x0000007fU 
                                          & vlSelfRef.CpuTop__DOT__reg_inst))
                                ? vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata
                                : ((0x37U == (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst))
                                    ? 0U : ((0x17U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.CpuTop__DOT__reg_inst))
                                             ? vlSelfRef.CpuTop__DOT__reg_pc
                                             : vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata)))),32);
    bufp->fullBit(oldp+138,(((~ ((~ (IData)(vlSelfRef.CpuTop__DOT__reg_valid)) 
                                 | ((IData)(vlSelfRef.CpuTop__DOT__idu__DOT__stall) 
                                    | (IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)))) 
                             & ((0x6fU == (0x0000007fU 
                                           & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                | ((0x67U != (0x0000007fU 
                                              & vlSelfRef.CpuTop__DOT__reg_inst)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1))))));
    bufp->fullIData(oldp+139,(((IData)(vlSelfRef.CpuTop__DOT__idu__DOT___GEN_20)
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
    bufp->fullIData(oldp+140,(((IData)(vlSelfRef.CpuTop__DOT___exu_io_redirect_valid)
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
    bufp->fullIData(oldp+141,(((IData)(vlSelfRef.CpuTop__DOT__redirect_valid)
                                ? 0U : vlSelfRef.CpuTop__DOT__ifu__DOT__pc)),32);
    bufp->fullIData(oldp+142,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_ar_valid)
                                ? vlSelfRef.CpuTop__DOT__reg_2_mem_addr
                                : 0U)),32);
    bufp->fullBit(oldp+143,(vlSelfRef.CpuTop__DOT__redirect_valid));
    bufp->fullIData(oldp+144,(vlSelfRef.CpuTop__DOT__reg_1_mem_wdata),32);
    bufp->fullIData(oldp+145,(vlSelfRef.CpuTop__DOT__reg_2_mem_addr),32);
    bufp->fullIData(oldp+146,(vlSelfRef.CpuTop__DOT__reg_2_mem_wdata),32);
    bufp->fullIData(oldp+147,(vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out),32);
    bufp->fullIData(oldp+148,((0xfffffffcU & vlSelfRef.CpuTop__DOT__exu__DOT__alu__DOT__io_out)),32);
    bufp->fullIData(oldp+149,(((IData)(vlSelfRef.CpuTop__DOT__exu__DOT___GEN_0)
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
    bufp->fullIData(oldp+150,(vlSelfRef.CpuTop__DOT__exu__DOT__io_fwd_wb_data),32);
    bufp->fullIData(oldp+151,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_alu_b),32);
    bufp->fullIData(oldp+152,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_mem_wdata),32);
    bufp->fullIData(oldp+153,(vlSelfRef.CpuTop__DOT___idu_io_out_bits_csr_wdata),32);
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelfRef.CpuTop__DOT__redirect_valid)))));
    bufp->fullIData(oldp+155,(vlSelfRef.CpuTop__DOT__ifuSram__DOT___paddrRead_data),32);
    bufp->fullIData(oldp+156,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_addr)),32);
    bufp->fullBit(oldp+157,(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire));
    bufp->fullIData(oldp+158,(((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_wdata)),32);
    bufp->fullCData(oldp+159,(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_w_strb),4);
    bufp->fullIData(oldp+160,(vlSelfRef.CpuTop__DOT__memSram__DOT___paddrRead_data),32);
    bufp->fullIData(oldp+161,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire)
                                ? ((IData)(vlSelfRef.CpuTop__DOT__mem__DOT___GEN_0)
                                    ? 0U : vlSelfRef.CpuTop__DOT__reg_2_mem_addr)
                                : 0U)),32);
    bufp->fullIData(oldp+162,(vlSelfRef.CpuTop__DOT__memSram__DOT____Vcellinp__paddrWrite__len),32);
    bufp->fullIData(oldp+163,(((IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__writeFire)
                                ? (IData)(vlSelfRef.CpuTop__DOT__memSram__DOT__io_axi_w_strb)
                                : 0U)),32);
    bufp->fullBit(oldp+164,(vlSelfRef.clock));
    bufp->fullBit(oldp+165,(vlSelfRef.reset));
    bufp->fullIData(oldp+166,(vlSelfRef.io_debug_pc),32);
    bufp->fullIData(oldp+167,(vlSelfRef.io_debug_inst),32);
    bufp->fullBit(oldp+168,(vlSelfRef.io_debug_valid));
    bufp->fullWData(oldp+169,(vlSelfRef.io_debug_regs_flat),1024);
    bufp->fullIData(oldp+201,(vlSelfRef.io_si_pc),32);
    bufp->fullIData(oldp+202,(vlSelfRef.io_si_inst),32);
}
