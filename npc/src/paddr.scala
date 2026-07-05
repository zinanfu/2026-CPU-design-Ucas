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
    output  [31:0]    data
);

import "DPI-C" function int paddr_read(
    input int addr,
    input int len,
    input bit is_inst
);

assign data = paddr_read(addr, len, is_inst);

endmodule
"""
    )

}

class PaddrWriteDPI extends ExtModule {
    val io = FlatIO(new Bundle {
        val wen         = Input(Bool())
        val addr        = Input(UInt(32.W))
        val len         = Input(UInt(32.W))
        val data        = Input(UInt(32.W))
        val wmask       = Input(UInt(32.W))
        val is_inst     = Input(Bool())
    })

    setInline(
        "PaddrWriteDPI.sv",
        s"""
module PaddrWriteDPI(
    input             wen,
    input   [31:0]    addr,
    input   [31:0]    len,
    input   [31:0]    data,
    input   [31:0]    wmask,
    input             is_inst
);

import "DPI-C" function void paddr_write(
    input int       addr,
    input int       len,
    input int       data,
    input int       wmask,
    input bit       is_inst
);

always @(posedge wen) begin
    paddr_write(addr, len, data, wmask, is_inst);
end

endmodule
"""
    )

}
