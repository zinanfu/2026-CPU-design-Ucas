// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCpuTop.h for the primary calling header

#include "VCpuTop__pch.h"

void VCpuTop___024root___ctor_var_reset(VCpuTop___024root* vlSelf);

VCpuTop___024root::VCpuTop___024root(VCpuTop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VCpuTop___024root___ctor_var_reset(this);
}

void VCpuTop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCpuTop___024root::~VCpuTop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
