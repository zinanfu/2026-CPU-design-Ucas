// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu__pch.h"

void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf);

VAlu___024root::VAlu___024root(VAlu__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VAlu___024root___ctor_var_reset(this);
}

void VAlu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VAlu___024root::~VAlu___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
