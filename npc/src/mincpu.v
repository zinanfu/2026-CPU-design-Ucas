module CpuTop(
    input clock,
    input reset,

    output reg [31:0] pc,
    input      [31:0] inst
);

always @(posedge clock) begin

    if (reset) begin
        pc <= 32'h80000000;
    end
    else begin
        pc <= pc + 4;
    end

end

endmodule