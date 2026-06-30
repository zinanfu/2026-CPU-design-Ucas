// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPUTOP_SINGLE__SYMS_H_
#define VERILATED_VCPUTOP_SINGLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCpuTop_single.h"

// INCLUDE MODULE CLASSES
#include "VCpuTop_single___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VCpuTop_single__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCpuTop_single* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCpuTop_single___024root       TOP;

    // CONSTRUCTORS
    VCpuTop_single__Syms(VerilatedContext* contextp, const char* namep, VCpuTop_single* modelp);
    ~VCpuTop_single__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
