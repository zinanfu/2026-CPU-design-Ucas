// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCpuTop_single__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VCpuTop_single::VCpuTop_single(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCpuTop_single__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_mem_wmask{vlSymsp->TOP.io_mem_wmask}
    , io_mem_wen{vlSymsp->TOP.io_mem_wen}
    , io_mem_ren{vlSymsp->TOP.io_mem_ren}
    , io_debug_valid{vlSymsp->TOP.io_debug_valid}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_mem_rdata{vlSymsp->TOP.io_mem_rdata}
    , io_mem_addr{vlSymsp->TOP.io_mem_addr}
    , io_mem_wdata{vlSymsp->TOP.io_mem_wdata}
    , io_debug_pc{vlSymsp->TOP.io_debug_pc}
    , io_debug_inst{vlSymsp->TOP.io_debug_inst}
    , io_debug_regs_flat{vlSymsp->TOP.io_debug_regs_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCpuTop_single::VCpuTop_single(const char* _vcname__)
    : VCpuTop_single(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCpuTop_single::~VCpuTop_single() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCpuTop_single___024root___eval_debug_assertions(VCpuTop_single___024root* vlSelf);
#endif  // VL_DEBUG
void VCpuTop_single___024root___eval_static(VCpuTop_single___024root* vlSelf);
void VCpuTop_single___024root___eval_initial(VCpuTop_single___024root* vlSelf);
void VCpuTop_single___024root___eval_settle(VCpuTop_single___024root* vlSelf);
void VCpuTop_single___024root___eval(VCpuTop_single___024root* vlSelf);

void VCpuTop_single::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCpuTop_single::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCpuTop_single___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCpuTop_single___024root___eval_static(&(vlSymsp->TOP));
        VCpuTop_single___024root___eval_initial(&(vlSymsp->TOP));
        VCpuTop_single___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCpuTop_single___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCpuTop_single::eventsPending() { return false; }

uint64_t VCpuTop_single::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCpuTop_single::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCpuTop_single___024root___eval_final(VCpuTop_single___024root* vlSelf);

VL_ATTR_COLD void VCpuTop_single::final() {
    VCpuTop_single___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCpuTop_single::hierName() const { return vlSymsp->name(); }
const char* VCpuTop_single::modelName() const { return "VCpuTop_single"; }
unsigned VCpuTop_single::threads() const { return 1; }
void VCpuTop_single::prepareClone() const { contextp()->prepareClone(); }
void VCpuTop_single::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCpuTop_single::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCpuTop_single___024root__trace_decl_types(VerilatedFst* tracep);

void VCpuTop_single___024root__trace_init_top(VCpuTop_single___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCpuTop_single___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop_single___024root*>(voidSelf);
    VCpuTop_single__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VCpuTop_single___024root__trace_decl_types(tracep);
    VCpuTop_single___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCpuTop_single___024root__trace_register(VCpuTop_single___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VCpuTop_single::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCpuTop_single::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 95);
    VCpuTop_single___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
