// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPUTOP__DPI_H_
#define VERILATED_VCPUTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/PaddrReadDPI.sv:10:29
    extern int paddr_read(int addr, int len, svBit is_inst);
    // DPI import at build/PaddrWriteDPI.sv:12:30
    extern void paddr_write(int addr, int len, int data, int wmask, svBit is_inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
