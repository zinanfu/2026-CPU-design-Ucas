// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop_single.h for the primary calling header

#include "VCpuTop_single__pch.h"

void VCpuTop_single___024root___ctor_var_reset(VCpuTop_single___024root* vlSelf);

VCpuTop_single___024root::VCpuTop_single___024root(VCpuTop_single__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VCpuTop_single___024root___ctor_var_reset(this);
}

void VCpuTop_single___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCpuTop_single___024root::~VCpuTop_single___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
