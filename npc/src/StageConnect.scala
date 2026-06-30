package logic

import chisel3._
import chisel3.util._

object StageConnect {
  def apply[T <: Data](     // 定义的 apply 方法，可以这样调用：StageConnect(left, right, arch, flush)
    left:  DecoupledIO[T],  // DecoupledIO 类型，表示上一级模块的握手接口
    right: DecoupledIO[T],
    arch:  String = "pipeline",
    flush: Bool = false.B   // 流水线冲刷信号
  ): Unit = {
    if (arch == "single") {
      right.valid := left.valid
      right.bits  := left.bits
      left.ready  := right.ready
    } else if (arch == "pipeline") {
      
      val reg       = RegEnable(left.bits, left.fire)   // RegEnable 当 fire 为真时，将 bits 锁存到 reg 中（fire 由 chisel 为 DecoupledIO 提供）
      val reg_valid = RegInit(false.B)

      when (flush) {              // flush 时清除寄存器有效位
        reg_valid := false.B 
      }
      .elsewhen (left.fire) {     // 前流水级成功传输，本层为 true
        reg_valid := true.B  
      }
      .elsewhen (right.fire) {    // 后级成功接收，本层为 false
        reg_valid := false.B  
      }
      
      right.valid := reg_valid
      right.bits  := reg
      left.ready  := !reg_valid || right.ready
    } else if (arch == "multi") {
      right <> left
    } else if (arch == "ooo") {
      right <> Queue(left, 16)
    }
  }
}
