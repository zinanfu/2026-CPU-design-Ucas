package npc

import chisel3._
import chisel3.util._
import chisel3.experimental._

// BlackBox：Chisel 不会生成其内部实现，只在生成的 Verilog 中创建一个实例化接口
// HasBlackBoxInline: 允许将 Verilog 代码内联到生成的顶层文件中（例如使用 setInline）
// import "DPI-C" function void npc_itrace 可将外部的函数引入 systemVerilog 中

class ItraceDPI extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
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
    input [32:0]    inst
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
