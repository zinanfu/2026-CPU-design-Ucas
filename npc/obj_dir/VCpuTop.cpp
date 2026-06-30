// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCpuTop__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VCpuTop::VCpuTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCpuTop__Syms(contextp(), _vcname__, this)}
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
    , io_si_pc{vlSymsp->TOP.io_si_pc}
    , io_si_inst{vlSymsp->TOP.io_si_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCpuTop::VCpuTop(const char* _vcname__)
    : VCpuTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCpuTop::~VCpuTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCpuTop___024root___eval_debug_assertions(VCpuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VCpuTop___024root___eval_static(VCpuTop___024root* vlSelf);
void VCpuTop___024root___eval_initial(VCpuTop___024root* vlSelf);
void VCpuTop___024root___eval_settle(VCpuTop___024root* vlSelf);
void VCpuTop___024root___eval(VCpuTop___024root* vlSelf);

void VCpuTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCpuTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCpuTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCpuTop___024root___eval_static(&(vlSymsp->TOP));
        VCpuTop___024root___eval_initial(&(vlSymsp->TOP));
        VCpuTop___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCpuTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCpuTop::eventsPending() { return false; }

uint64_t VCpuTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCpuTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCpuTop___024root___eval_final(VCpuTop___024root* vlSelf);

VL_ATTR_COLD void VCpuTop::final() {
    VCpuTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCpuTop::hierName() const { return vlSymsp->name(); }
const char* VCpuTop::modelName() const { return "VCpuTop"; }
unsigned VCpuTop::threads() const { return 1; }
void VCpuTop::prepareClone() const { contextp()->prepareClone(); }
void VCpuTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCpuTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCpuTop___024root__trace_decl_types(VerilatedFst* tracep);

void VCpuTop___024root__trace_init_top(VCpuTop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCpuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCpuTop___024root*>(voidSelf);
    VCpuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VCpuTop___024root__trace_decl_types(tracep);
    VCpuTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCpuTop___024root__trace_register(VCpuTop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VCpuTop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCpuTop::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 187);
    VCpuTop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
