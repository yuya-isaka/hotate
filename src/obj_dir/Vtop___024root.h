// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(anode,3,0);
    VL_OUT8(seg,6,0);
    CData/*0:0*/ top__DOT__Core__DOT__state_idle;
    CData/*0:0*/ top__DOT__Core__DOT__state_if;
    CData/*0:0*/ top__DOT__Core__DOT__state_de;
    CData/*0:0*/ top__DOT__Core__DOT__state_ex;
    CData/*0:0*/ top__DOT__Core__DOT__state_ma;
    CData/*0:0*/ top__DOT__Core__DOT__state_wb;
    CData/*6:0*/ __Vfunc_top__DOT__Seven__DOT__decode__4__Vfuncout;
    CData/*6:0*/ __Vfunc_top__DOT__Seven__DOT__decode__5__Vfuncout;
    CData/*6:0*/ __Vfunc_top__DOT__Seven__DOT__decode__6__Vfuncout;
    CData/*6:0*/ __Vfunc_top__DOT__Seven__DOT__decode__7__Vfuncout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT16(led,15,0);
    IData/*31:0*/ top__DOT__Core__DOT__pc;
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Imem__inst;
    IData/*31:0*/ top__DOT__Core__DOT__rs1_data;
    IData/*31:0*/ top__DOT__Core__DOT__alu_out;
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Dmem__read_data;
    IData/*31:0*/ top__DOT__Seven__DOT__seg_counter;
    IData/*31:0*/ __Vfunc_top__DOT__Seven__DOT__decode__4__binary;
    IData/*31:0*/ __Vfunc_top__DOT__Seven__DOT__decode__5__binary;
    IData/*31:0*/ __Vfunc_top__DOT__Seven__DOT__decode__6__binary;
    IData/*31:0*/ __Vfunc_top__DOT__Seven__DOT__decode__7__binary;
    QData/*63:0*/ top__DOT__Core__DOT__imem;
    VlWide<3>/*65:0*/ top__DOT__Core__DOT__de;
    VlWide<5>/*128:0*/ top__DOT__Core__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Core__DOT__register;
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__Core__DOT__Imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__Core__DOT__Dmem__DOT__mem;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard