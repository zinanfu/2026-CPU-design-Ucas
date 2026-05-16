// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAlu__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VAlu::VAlu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAlu__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_op{vlSymsp->TOP.io_op}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_out{vlSymsp->TOP.io_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VAlu::VAlu(const char* _vcname__)
    : VAlu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAlu::~VAlu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
void VAlu___024root___eval_static(VAlu___024root* vlSelf);
void VAlu___024root___eval_initial(VAlu___024root* vlSelf);
void VAlu___024root___eval_settle(VAlu___024root* vlSelf);
void VAlu___024root___eval(VAlu___024root* vlSelf);

void VAlu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAlu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAlu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAlu___024root___eval_static(&(vlSymsp->TOP));
        VAlu___024root___eval_initial(&(vlSymsp->TOP));
        VAlu___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAlu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAlu::eventsPending() { return false; }

uint64_t VAlu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAlu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAlu___024root___eval_final(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu::final() {
    VAlu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAlu::hierName() const { return vlSymsp->name(); }
const char* VAlu::modelName() const { return "VAlu"; }
unsigned VAlu::threads() const { return 1; }
void VAlu::prepareClone() const { contextp()->prepareClone(); }
void VAlu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VAlu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAlu___024root__trace_decl_types(VerilatedFst* tracep);

void VAlu___024root__trace_init_top(VAlu___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAlu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAlu___024root*>(voidSelf);
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VAlu___024root__trace_decl_types(tracep);
    VAlu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VAlu___024root__trace_register(VAlu___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VAlu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAlu::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 6);
    VAlu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
