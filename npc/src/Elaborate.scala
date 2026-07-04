package logic

import circt.stage.ChiselStage


object Elaborate extends App {
  def parseItraceArgs(rawArgs: Array[String]): (Boolean, Array[String]) = {
    var enableItrace = true
    val forwardedArgs = scala.collection.mutable.ArrayBuffer.empty[String]

    rawArgs.foreach { arg =>
      arg match {
        case "--itrace" =>
          enableItrace = true
        case "--no-itrace" =>
          enableItrace = false
        case other =>
          forwardedArgs += other
      }
    }

    (enableItrace, forwardedArgs.toArray)
  }

  val firtoolOptions = Array(
    "--default-layer-specialization=enable",
    "--verification-flavor=immediate",
    "--lowering-options=" + List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)
  )
  //circt.stage.ChiselStage.emitSystemVerilogFile(new gcd.GCD(), args, firtoolOptions)

  val (enableItrace, chiselArgs) = parseItraceArgs(args)

  ChiselStage.emitSystemVerilogFile(
    new ysyx_09929017(enableItrace),
    chiselArgs,
    firtoolOptions
  )


}
