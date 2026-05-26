package npc

import chisel3._

// ExtModule: 需要实例化一个 已经用 Verilog/VHDL 编写好的黑盒模块时使用
// FlatIO: 在 ExtModule 中，为了避免方向推断的歧义并保持与旧 BlackBox 行为一致，官方推荐使用 FlatIO 而不是普通的 IO
// import "DPI-C" function void npc_itrace 可将外部的函数引入 systemVerilog 中

class ItraceDPI extends ExtModule {
    val io = FlatIO(new Bundle {
        val clock = Input(Clock())
        val valid = Input(Bool())
        val pc    = Input(UInt(32.W))
        val inst  = Input(UInt(32.W))
    })

    setInline(
        "ItraceDPI.sv",
        s"""
module ItraceDPI(
    input           clock,
    input           valid,
    input [31:0]    pc,
    input [31:0]    inst
);

import "DPI-C" function void npc_itrace(   
    input int pc,
    input int inst
);

always_ff @(posedge clock) begin
    if (valid) begin
        npc_itrace(pc, inst);

    end
end

endmodule
"""
    )

}
