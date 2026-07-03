package npc

import chisel3._


class PaddrReadDPI extends ExtModule {
    val io = FlatIO(new Bundle {
        val addr        = Input(UInt(32.W))
        val len         = Input(UInt(32.W))
        val is_inst     = Input(Bool())
        val data        = Output(UInt(32.W))
    })

    setInline(
        "PaddrReadDPI.sv",
        s"""
module PaddrReadDPI(
    input   [31:0]    addr,
    input   [31:0]    len,
    input             is_inst,
    Output  [31:0]    data
);

import "DPI-C" function void paddr_read(   
    input int addr,
    input int len,
    input bit is_inst
);

assign data = paddr_read(addr, len, is_inst);

endmodule
"""
    )

}
