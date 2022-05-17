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
    CData/*0:0*/ top__DOT__Core__DOT__state_idle;
    CData/*0:0*/ top__DOT__Core__DOT__state_if;
    CData/*0:0*/ top__DOT__Core__DOT__state_de;
    CData/*0:0*/ top__DOT__Core__DOT__state_ex;
    CData/*0:0*/ top__DOT__Core__DOT__state_ma;
    CData/*0:0*/ top__DOT__Core__DOT__state_wb;
    CData/*0:0*/ top__DOT__Core__DOT__Decode__DOT__i_type;
    CData/*0:0*/ top__DOT__Core__DOT__Decode__DOT__u_type;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(reg0,31,0);
    VL_OUT(reg1,31,0);
    VL_OUT(reg2,31,0);
    VL_OUT(reg3,31,0);
    VL_OUT(reg4,31,0);
    VL_OUT(reg5,31,0);
    VL_OUT(reg6,31,0);
    VL_OUT(reg7,31,0);
    VL_OUT(reg8,31,0);
    VL_OUT(reg9,31,0);
    VL_OUT(reg10,31,0);
    VL_OUT(reg11,31,0);
    VL_OUT(reg12,31,0);
    VL_OUT(reg13,31,0);
    VL_OUT(reg14,31,0);
    VL_OUT(reg15,31,0);
    VL_OUT(reg16,31,0);
    VL_OUT(reg17,31,0);
    VL_OUT(reg18,31,0);
    VL_OUT(reg19,31,0);
    VL_OUT(reg20,31,0);
    VL_OUT(reg21,31,0);
    VL_OUT(reg22,31,0);
    VL_OUT(reg23,31,0);
    VL_OUT(reg24,31,0);
    VL_OUT(reg25,31,0);
    VL_OUT(reg26,31,0);
    VL_OUT(reg27,31,0);
    VL_OUT(reg28,31,0);
    VL_OUT(reg29,31,0);
    VL_OUT(reg30,31,0);
    VL_OUT(reg31,31,0);
    IData/*31:0*/ top__DOT__Core__DOT__pc;
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Imem__inst;
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Decode__imm;
    IData/*31:0*/ top__DOT__Core__DOT__rs1_data;
    IData/*31:0*/ top__DOT__Core__DOT__rs2_data;
    IData/*31:0*/ top__DOT__Core__DOT__alu_out;
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Dmem__read_data;
    IData/*31:0*/ top__DOT__Core__DOT__Alu__DOT__op2;
    QData/*63:0*/ top__DOT__Core__DOT__imem;
    VlWide<3>/*65:0*/ top__DOT__Core__DOT__de;
    VlWide<5>/*128:0*/ top__DOT__Core__DOT__dmem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Core__DOT__register;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__Core__DOT__Imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 512> top__DOT__Core__DOT__Dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
