// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*5:0*/, 64> Vtop__ConstPool__TABLE_h4a7513c7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h257aa433_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h6cdfa4e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h42a16b78_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h09bf5bc9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h195d03e7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h366c77ba_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__Core__DOT____Vcellout__Decode__imm;
    IData/*31:0*/ top__DOT__Core__DOT__rs2_data;
    CData/*0:0*/ top__DOT__Core__DOT__Decode__DOT__i_type;
    CData/*0:0*/ top__DOT__Core__DOT__Decode__DOT__u_type;
    IData/*31:0*/ top__DOT__Core__DOT__Alu__DOT__op2;
    IData/*31:0*/ __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i;
    CData/*5:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__Core__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__Core__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Core__DOT__register__v0;
    IData/*31:0*/ __Vdly__top__DOT__Core__DOT__pc;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__Core__DOT__Dmem__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__Core__DOT__Dmem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Core__DOT__Dmem__DOT__mem__v0;
    VlWide<3>/*95:0*/ __Vtemp_h36d70bb2__0;
    // Body
    __Vdlyvset__top__DOT__Core__DOT__Dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__Core__DOT__register__v0 = 0U;
    __Vdly__top__DOT__Core__DOT__pc = vlSelf->top__DOT__Core__DOT__pc;
    if (vlSelf->rst) {
        vlSelf->top__DOT__Core__DOT__register[0U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[1U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[2U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[3U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[4U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[5U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[6U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[7U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[8U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[9U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__Core__DOT__register[0x1fU] = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U & vlSelf->top__DOT__Core__DOT__dmem[0U])) {
            __Vdlyvval__top__DOT__Core__DOT__Dmem__DOT__mem__v0 
                = ((vlSelf->top__DOT__Core__DOT__dmem[1U] 
                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[0U] 
                                 >> 1U));
            __Vdlyvset__top__DOT__Core__DOT__Dmem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__Core__DOT__Dmem__DOT__mem__v0 
                = (0xfffU & (vlSelf->top__DOT__Core__DOT__dmem[1U] 
                             >> 1U));
        }
    }
    if (vlSelf->rst) {
        __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i = 0U;
        while ((0x1000U > __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i)) {
            vlSelf->top__DOT__Core__DOT__Dmem__DOT__mem[(0xfffU 
                                                         & __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i)] = 0U;
            __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__3__unnamedblk1__DOT__i);
        }
        vlSelf->top__DOT__Seven__DOT__seg_counter = 0U;
    } else {
        vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data 
            = vlSelf->top__DOT__Core__DOT__Dmem__DOT__mem
            [(0xfffU & (vlSelf->top__DOT__Core__DOT__dmem[3U] 
                        >> 1U))];
        vlSelf->top__DOT__Seven__DOT__seg_counter = 
            ((0x61a80U == vlSelf->top__DOT__Seven__DOT__seg_counter)
              ? 0U : ((IData)(1U) + vlSelf->top__DOT__Seven__DOT__seg_counter));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->top__DOT__Core__DOT__state_wb) {
            __Vdlyvval__top__DOT__Core__DOT__register__v0 
                = ((IData)((0U != (0xcU & vlSelf->top__DOT__Core__DOT__de[0U])))
                    ? ((IData)(4U) + vlSelf->top__DOT__Core__DOT__pc)
                    : ((0x40U & vlSelf->top__DOT__Core__DOT__de[0U])
                        ? ((vlSelf->top__DOT__Core__DOT__dmem[3U] 
                            << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                         >> 1U)) : 
                       ((2U & vlSelf->top__DOT__Core__DOT__de[0U])
                         ? ((vlSelf->top__DOT__Core__DOT__de[1U] 
                             << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                          >> 9U)) : 
                        ((1U & vlSelf->top__DOT__Core__DOT__de[0U])
                          ? (vlSelf->top__DOT__Core__DOT__pc 
                             + ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                 << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                              >> 9U)))
                          : vlSelf->top__DOT__Core__DOT__alu_out))));
            __Vdlyvset__top__DOT__Core__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__Core__DOT__register__v0 
                = (0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                            >> 0x13U));
        }
        vlSelf->top__DOT__Core__DOT____Vcellout__Imem__inst 
            = vlSelf->top__DOT__Core__DOT__Imem__DOT__mem
            [(0x3ffU & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                >> 0x20U)))];
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__Core__DOT__pc = 0U;
    } else if (vlSelf->top__DOT__Core__DOT__state_wb) {
        __Vdly__top__DOT__Core__DOT__pc = ((0x10U & 
                                            vlSelf->top__DOT__Core__DOT__de[0U])
                                            ? ((0U 
                                                != vlSelf->top__DOT__Core__DOT__alu_out)
                                                ? (vlSelf->top__DOT__Core__DOT__pc 
                                                   + 
                                                   ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                     << 0x17U) 
                                                    | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                       >> 9U)))
                                                : ((IData)(4U) 
                                                   + vlSelf->top__DOT__Core__DOT__pc))
                                            : ((8U 
                                                & vlSelf->top__DOT__Core__DOT__de[0U])
                                                ? (vlSelf->top__DOT__Core__DOT__pc 
                                                   + 
                                                   ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                     << 0x17U) 
                                                    | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                       >> 9U)))
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__Core__DOT__de[0U])
                                                    ? 
                                                   (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                    + 
                                                    ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                      << 0x17U) 
                                                     | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                        >> 9U)))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__Core__DOT__de[0U])
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__Core__DOT__pc)
                                                     : 
                                                    ((1U 
                                                      & vlSelf->top__DOT__Core__DOT__de[0U])
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__Core__DOT__pc)
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__Core__DOT__pc))))));
    }
    if (__Vdlyvset__top__DOT__Core__DOT__Dmem__DOT__mem__v0) {
        vlSelf->top__DOT__Core__DOT__Dmem__DOT__mem[__Vdlyvdim0__top__DOT__Core__DOT__Dmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__Core__DOT__Dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__Core__DOT__register__v0) {
        vlSelf->top__DOT__Core__DOT__register[__Vdlyvdim0__top__DOT__Core__DOT__register__v0] 
            = __Vdlyvval__top__DOT__Core__DOT__register__v0;
    }
    vlSelf->top__DOT__Core__DOT__pc = __Vdly__top__DOT__Core__DOT__pc;
    vlSelf->top__DOT__Core__DOT__dmem[2U] = ((1U & 
                                              vlSelf->top__DOT__Core__DOT__dmem[2U]) 
                                             | (vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data 
                                                << 1U));
    vlSelf->top__DOT__Core__DOT__dmem[3U] = ((0xfffffffeU 
                                              & vlSelf->top__DOT__Core__DOT__dmem[3U]) 
                                             | (vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data 
                                                >> 0x1fU));
    if ((0x186a0U > vlSelf->top__DOT__Seven__DOT__seg_counter)) {
        vlSelf->anode = 0xeU;
        vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary 
            = VL_MODDIV_III(32, vlSelf->top__DOT__Core__DOT__register
                            [0xaU], (IData)(0xaU));
        if (((((((((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary) 
                   | (1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                  | (2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                 | (3U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                | (4U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
               | (5U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
              | (6U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
             | (7U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__Vfuncout 
                = ((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                    ? 0x40U : ((1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                ? 0x79U : ((2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                            ? 0x24U
                                            : ((3U 
                                                == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                ? 0x30U
                                                : (
                                                   (4U 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                    ? 0x19U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                     ? 0x12U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                      ? 2U
                                                      : 0x58U)))))));
        } else if (((((((((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary) 
                          | (9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                         | (0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                        | (0xbU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                       | (0xcU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                      | (0xdU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                     | (0xeU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)) 
                    | (0xfU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__Vfuncout 
                = ((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                    ? 0U : ((9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                             ? 0x10U : ((0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                         ? 8U : ((0xbU 
                                                  == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                  ? 3U
                                                  : 
                                                 ((0xcU 
                                                   == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                   ? 0x46U
                                                   : 
                                                  ((0xdU 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                    ? 0x21U
                                                    : 
                                                   ((0xeU 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__binary)
                                                     ? 6U
                                                     : 0xeU)))))));
        }
        vlSelf->seg = vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__4__Vfuncout;
    } else if ((0x30d40U > vlSelf->top__DOT__Seven__DOT__seg_counter)) {
        vlSelf->anode = 0xdU;
        vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary 
            = VL_MODDIV_III(32, VL_DIV_III(32, vlSelf->top__DOT__Core__DOT__register
                                           [0xaU], (IData)(0xaU)), (IData)(0xaU));
        if (((((((((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary) 
                   | (1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                  | (2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                 | (3U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                | (4U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
               | (5U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
              | (6U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
             | (7U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__Vfuncout 
                = ((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                    ? 0x40U : ((1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                ? 0x79U : ((2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                            ? 0x24U
                                            : ((3U 
                                                == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                ? 0x30U
                                                : (
                                                   (4U 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                    ? 0x19U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                     ? 0x12U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                      ? 2U
                                                      : 0x58U)))))));
        } else if (((((((((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary) 
                          | (9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                         | (0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                        | (0xbU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                       | (0xcU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                      | (0xdU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                     | (0xeU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)) 
                    | (0xfU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__Vfuncout 
                = ((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                    ? 0U : ((9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                             ? 0x10U : ((0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                         ? 8U : ((0xbU 
                                                  == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                  ? 3U
                                                  : 
                                                 ((0xcU 
                                                   == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                   ? 0x46U
                                                   : 
                                                  ((0xdU 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                    ? 0x21U
                                                    : 
                                                   ((0xeU 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__binary)
                                                     ? 6U
                                                     : 0xeU)))))));
        }
        vlSelf->seg = vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__5__Vfuncout;
    } else if ((0x493e0U > vlSelf->top__DOT__Seven__DOT__seg_counter)) {
        vlSelf->anode = 0xbU;
        vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary 
            = VL_MODDIV_III(32, VL_DIV_III(32, vlSelf->top__DOT__Core__DOT__register
                                           [0xaU], (IData)(0x64U)), (IData)(0xaU));
        if (((((((((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary) 
                   | (1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                  | (2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                 | (3U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                | (4U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
               | (5U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
              | (6U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
             | (7U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__Vfuncout 
                = ((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                    ? 0x40U : ((1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                ? 0x79U : ((2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                            ? 0x24U
                                            : ((3U 
                                                == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                ? 0x30U
                                                : (
                                                   (4U 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                    ? 0x19U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                     ? 0x12U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                      ? 2U
                                                      : 0x58U)))))));
        } else if (((((((((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary) 
                          | (9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                         | (0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                        | (0xbU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                       | (0xcU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                      | (0xdU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                     | (0xeU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)) 
                    | (0xfU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__Vfuncout 
                = ((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                    ? 0U : ((9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                             ? 0x10U : ((0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                         ? 8U : ((0xbU 
                                                  == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                  ? 3U
                                                  : 
                                                 ((0xcU 
                                                   == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                   ? 0x46U
                                                   : 
                                                  ((0xdU 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                    ? 0x21U
                                                    : 
                                                   ((0xeU 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__binary)
                                                     ? 6U
                                                     : 0xeU)))))));
        }
        vlSelf->seg = vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__6__Vfuncout;
    } else {
        vlSelf->anode = 7U;
        vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary 
            = VL_MODDIV_III(32, VL_DIV_III(32, vlSelf->top__DOT__Core__DOT__register
                                           [0xaU], (IData)(0x3e8U)), (IData)(0xaU));
        if (((((((((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary) 
                   | (1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                  | (2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                 | (3U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                | (4U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
               | (5U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
              | (6U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
             | (7U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__Vfuncout 
                = ((0U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                    ? 0x40U : ((1U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                ? 0x79U : ((2U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                            ? 0x24U
                                            : ((3U 
                                                == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                ? 0x30U
                                                : (
                                                   (4U 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                    ? 0x19U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                     ? 0x12U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                      ? 2U
                                                      : 0x58U)))))));
        } else if (((((((((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary) 
                          | (9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                         | (0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                        | (0xbU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                       | (0xcU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                      | (0xdU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                     | (0xeU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)) 
                    | (0xfU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary))) {
            vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__Vfuncout 
                = ((8U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                    ? 0U : ((9U == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                             ? 0x10U : ((0xaU == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                         ? 8U : ((0xbU 
                                                  == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                  ? 3U
                                                  : 
                                                 ((0xcU 
                                                   == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                   ? 0x46U
                                                   : 
                                                  ((0xdU 
                                                    == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                    ? 0x21U
                                                    : 
                                                   ((0xeU 
                                                     == vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__binary)
                                                     ? 6U
                                                     : 0xeU)))))));
        }
        vlSelf->seg = vlSelf->__Vfunc_top__DOT__Seven__DOT__decode__7__Vfuncout;
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__Core__DOT__state_ma) 
                     << 5U) | (((IData)(vlSelf->top__DOT__Core__DOT__state_ex) 
                                << 4U) | (((IData)(vlSelf->top__DOT__Core__DOT__state_de) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT__Core__DOT__state_if) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__Core__DOT__state_idle) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if ((1U & Vtop__ConstPool__TABLE_h4a7513c7_0[__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_idle = Vtop__ConstPool__TABLE_h257aa433_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h4a7513c7_0[__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_if = Vtop__ConstPool__TABLE_h6cdfa4e7_0
            [__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_h4a7513c7_0[__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_de = Vtop__ConstPool__TABLE_h42a16b78_0
            [__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_h4a7513c7_0[__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_ex = Vtop__ConstPool__TABLE_h09bf5bc9_0
            [__Vtableidx1];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_h4a7513c7_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_ma = Vtop__ConstPool__TABLE_h195d03e7_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_h4a7513c7_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__Core__DOT__state_wb = Vtop__ConstPool__TABLE_h366c77ba_0
            [__Vtableidx1];
    }
    vlSelf->led = (0xffffU & vlSelf->top__DOT__Core__DOT__pc);
    vlSelf->top__DOT__Core__DOT__imem = (((QData)((IData)(vlSelf->top__DOT__Core__DOT__pc)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__Core__DOT____Vcellout__Imem__inst)));
    vlSelf->top__DOT__Core__DOT__de[0U] = ((0xfffffff0U 
                                            & vlSelf->top__DOT__Core__DOT__de[0U]) 
                                           | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                               << 3U) 
                                              | (((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                  << 2U) 
                                                 | (((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                     << 1U) 
                                                    | (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__Core__DOT__imem)))))));
    vlSelf->top__DOT__Core__DOT__de[0U] = ((0xffffff0fU 
                                            & vlSelf->top__DOT__Core__DOT__de[0U]) 
                                           | (0xfffffff0U 
                                              & (((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                  << 7U) 
                                                 | (((3U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                     << 6U) 
                                                    | (((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                        << 5U) 
                                                       | ((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                          << 4U))))));
    top__DOT__Core__DOT__Decode__DOT__i_type = (((3U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__Core__DOT__imem))));
    top__DOT__Core__DOT__Decode__DOT__u_type = ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                | (0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__Core__DOT__imem))));
    vlSelf->top__DOT__Core__DOT__de[1U] = ((0x7ffffU 
                                            & vlSelf->top__DOT__Core__DOT__de[1U]) 
                                           | (0xfff80000U 
                                              & (((((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                      | (IData)(top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                     | (0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                    | (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                                    ? 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Core__DOT__imem 
                                                               >> 0xfU)))
                                                    : 0U) 
                                                  << 0x1dU) 
                                                 | ((((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                       | (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__Core__DOT__imem 
                                                                  >> 0x14U)))
                                                       : 0U) 
                                                     << 0x18U) 
                                                    | ((((((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                           | (IData)(top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                         | (IData)(top__DOT__Core__DOT__Decode__DOT__u_type))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__Core__DOT__imem 
                                                                    >> 7U)))
                                                         : 0U) 
                                                       << 0x13U)))));
    vlSelf->top__DOT__Core__DOT__de[2U] = (3U & ((0x7ffffU 
                                                  & ((((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                         | (IData)(top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                       | (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__Core__DOT__imem 
                                                                  >> 0xfU)))
                                                       : 0U) 
                                                     >> 3U)) 
                                                 | ((0x7ffffU 
                                                     & (((((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__Core__DOT__imem 
                                                                     >> 0x14U)))
                                                          : 0U) 
                                                        >> 8U)) 
                                                    | ((((((0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                           | (IData)(top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                         | (IData)(top__DOT__Core__DOT__Decode__DOT__u_type))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__Core__DOT__imem 
                                                                    >> 7U)))
                                                         : 0U) 
                                                       >> 0xdU))));
    top__DOT__Core__DOT____Vcellout__Decode__imm = 
        ((IData)(top__DOT__Core__DOT__Decode__DOT__i_type)
          ? (((- (IData)((1U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                        >> 0x1fU))))) 
              << 0xcU) | (0xfffU & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                            >> 0x14U))))
          : ((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
              ? (((- (IData)((1U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                            >> 0x1fU))))) 
                  << 0xcU) | ((0xfe0U & ((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                                  >> 0x19U)) 
                                         << 5U)) | 
                              (0x1fU & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                                >> 7U)))))
              : ((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                  ? (((- (IData)((1U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                                >> 0x1fU))))) 
                      << 0xcU) | ((0x800U & ((IData)(
                                                     (vlSelf->top__DOT__Core__DOT__imem 
                                                      >> 7U)) 
                                             << 0xbU)) 
                                  | ((0x7e0U & ((IData)(
                                                        (vlSelf->top__DOT__Core__DOT__imem 
                                                         >> 0x19U)) 
                                                << 5U)) 
                                     | (0x1eU & ((IData)(
                                                         (vlSelf->top__DOT__Core__DOT__imem 
                                                          >> 8U)) 
                                                 << 1U)))))
                  : ((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                      ? (((- (IData)((1U & (IData)(
                                                   (vlSelf->top__DOT__Core__DOT__imem 
                                                    >> 0x1fU))))) 
                          << 0x14U) | ((0xff000U & 
                                        ((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                                  >> 0xcU)) 
                                         << 0xcU)) 
                                       | ((0x800U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__Core__DOT__imem 
                                                     >> 0x14U)) 
                                            << 0xbU)) 
                                          | (0x7feU 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__Core__DOT__imem 
                                                         >> 0x15U)) 
                                                << 1U)))))
                      : ((IData)(top__DOT__Core__DOT__Decode__DOT__u_type)
                          ? ((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                      >> 0xcU)) << 0xcU)
                          : 0U)))));
    vlSelf->top__DOT__Core__DOT__de[0U] = ((0xffU & 
                                            vlSelf->top__DOT__Core__DOT__de[0U]) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0xcU))))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           ((0x1bU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                                                                             ? 
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0x19U)))
                                                                             : 0U))) 
                                                           << 0x21U) 
                                                          | (((QData)((IData)(top__DOT__Core__DOT____Vcellout__Decode__imm)) 
                                                              << 1U) 
                                                             | (QData)((IData)(
                                                                               (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__Core__DOT__imem))))))))) 
                                              << 8U));
    vlSelf->top__DOT__Core__DOT__de[1U] = ((0xfff80000U 
                                            & vlSelf->top__DOT__Core__DOT__de[1U]) 
                                           | (((IData)(
                                                       (((QData)((IData)(
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0xcU))))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            ((0x1bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                                                                              ? 
                                                                             (0x7fU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0x19U)))
                                                                              : 0U))) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(top__DOT__Core__DOT____Vcellout__Decode__imm)) 
                                                               << 1U) 
                                                              | (QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__Core__DOT__imem))))))))) 
                                               >> 0x18U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0xcU))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               ((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                                                                                 ? 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__Core__DOT__imem 
                                                                                >> 0x19U)))
                                                                                 : 0U))) 
                                                               << 0x21U) 
                                                              | (((QData)((IData)(top__DOT__Core__DOT____Vcellout__Decode__imm)) 
                                                                  << 1U) 
                                                                 | (QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->top__DOT__Core__DOT__imem)))))))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    vlSelf->top__DOT__Core__DOT__rs1_data = ((0U == 
                                              (0x1fU 
                                               & ((vlSelf->top__DOT__Core__DOT__de[2U] 
                                                   << 3U) 
                                                  | (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                     >> 0x1dU))))
                                              ? 0U : 
                                             vlSelf->top__DOT__Core__DOT__register
                                             [(0x1fU 
                                               & ((vlSelf->top__DOT__Core__DOT__de[2U] 
                                                   << 3U) 
                                                  | (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                     >> 0x1dU)))]);
    top__DOT__Core__DOT__rs2_data = ((0U == (0x1fU 
                                             & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                >> 0x18U)))
                                      ? 0U : vlSelf->top__DOT__Core__DOT__register
                                     [(0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                >> 0x18U))]);
    top__DOT__Core__DOT__Alu__DOT__op2 = ((IData)((0U 
                                                   != 
                                                   (0xe0U 
                                                    & vlSelf->top__DOT__Core__DOT__de[0U])))
                                           ? ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                               << 0x17U) 
                                              | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                 >> 9U))
                                           : top__DOT__Core__DOT__rs2_data);
    vlSelf->top__DOT__Core__DOT__alu_out = ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x60U 
                                                      & vlSelf->top__DOT__Core__DOT__de[0U])))
                                             ? (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                + top__DOT__Core__DOT__Alu__DOT__op2)
                                             : ((IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & vlSelf->top__DOT__Core__DOT__de[0U])))
                                                 ? 
                                                ((0x8000U 
                                                  & vlSelf->top__DOT__Core__DOT__de[1U])
                                                  ? 0U
                                                  : 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__Core__DOT__de[1U])
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__Core__DOT__de[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->top__DOT__Core__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->top__DOT__Core__DOT__de[1U])
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->top__DOT__Core__DOT__de[1U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->top__DOT__Core__DOT__de[1U])
                                                         ? 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 0U
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           >> 
                                                           (0x1fU 
                                                            & top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 0U))
                                                         : 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 0U
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 0U
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           - top__DOT__Core__DOT__Alu__DOT__op2)))))))))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__Core__DOT__de[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->top__DOT__Core__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->top__DOT__Core__DOT__de[1U])
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->top__DOT__Core__DOT__de[1U])
                                                        ? 
                                                       ((0x40000U 
                                                         & vlSelf->top__DOT__Core__DOT__de[1U])
                                                         ? 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          ((0U 
                                                            == top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? vlSelf->top__DOT__Core__DOT__rs1_data
                                                            : 
                                                           VL_MODDIV_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          ((0U 
                                                            == top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? vlSelf->top__DOT__Core__DOT__rs1_data
                                                            : 
                                                           (((0x80000000U 
                                                              == vlSelf->top__DOT__Core__DOT__rs1_data) 
                                                             & (0xffffffffU 
                                                                == top__DOT__Core__DOT__Alu__DOT__op2))
                                                             ? 0U
                                                             : 
                                                            VL_MODDIVS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2))))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          ((0U 
                                                            == top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 0xffffffffU
                                                            : 
                                                           VL_DIV_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          ((0U 
                                                            == top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 0xffffffffU
                                                            : 
                                                           (((0x80000000U 
                                                              == vlSelf->top__DOT__Core__DOT__rs1_data) 
                                                             & (0xffffffffU 
                                                                == top__DOT__Core__DOT__Alu__DOT__op2))
                                                             ? 0x80000000U
                                                             : 
                                                            VL_DIVS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2)))))
                                                         : 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 0U
                                                           : 
                                                          (- 
                                                           (VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2) 
                                                            >> 0x1fU)))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (- 
                                                           (VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2) 
                                                            >> 0x1fU))
                                                           : 
                                                          VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2))))
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->top__DOT__Core__DOT__de[1U])
                                                         ? 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           & top__DOT__Core__DOT__Alu__DOT__op2)
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           | top__DOT__Core__DOT__Alu__DOT__op2))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           >> 
                                                           (0x1fU 
                                                            & top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           ^ top__DOT__Core__DOT__Alu__DOT__op2)))
                                                         : 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          ((vlSelf->top__DOT__Core__DOT__rs1_data 
                                                            < top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          (VL_LTS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 1U
                                                            : 0U))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           << 
                                                           (0x1fU 
                                                            & top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           + top__DOT__Core__DOT__Alu__DOT__op2)))))))))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->top__DOT__Core__DOT__de[0U])
                                                  ? 
                                                 ((0x40000U 
                                                   & vlSelf->top__DOT__Core__DOT__de[1U])
                                                   ? 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__Core__DOT__de[1U])
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     >= top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     < top__DOT__Core__DOT__Alu__DOT__op2))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, top__DOT__Core__DOT__Alu__DOT__op2)))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__Core__DOT__de[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     != top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     == top__DOT__Core__DOT__Alu__DOT__op2))))
                                                  : 0U)));
    vlSelf->top__DOT__Core__DOT__dmem[3U] = ((1U & 
                                              vlSelf->top__DOT__Core__DOT__dmem[3U]) 
                                             | (vlSelf->top__DOT__Core__DOT__alu_out 
                                                << 1U));
    vlSelf->top__DOT__Core__DOT__dmem[4U] = (vlSelf->top__DOT__Core__DOT__alu_out 
                                             >> 0x1fU);
    __Vtemp_h36d70bb2__0[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__Core__DOT__alu_out)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                  >> 0x10U)))
                                                              ? 
                                                             (0xffU 
                                                              & top__DOT__Core__DOT__rs2_data)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                   >> 0x10U)))
                                                               ? 
                                                              (0xffffU 
                                                               & top__DOT__Core__DOT__rs2_data)
                                                               : top__DOT__Core__DOT__rs2_data)))))) 
                                 >> 0x1fU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->top__DOT__Core__DOT__alu_out)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                            ? 
                                                                           (0xffU 
                                                                            & top__DOT__Core__DOT__rs2_data)
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                             ? 
                                                                            (0xffffU 
                                                                             & top__DOT__Core__DOT__rs2_data)
                                                                             : top__DOT__Core__DOT__rs2_data))))) 
                                                       >> 0x20U)) 
                                              << 1U));
    vlSelf->top__DOT__Core__DOT__dmem[0U] = (((IData)(
                                                      (((QData)((IData)(vlSelf->top__DOT__Core__DOT__alu_out)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (7U 
                                                                            & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                               >> 0x10U)))
                                                                           ? 
                                                                          (0xffU 
                                                                           & top__DOT__Core__DOT__rs2_data)
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                            ? 
                                                                           (0xffffU 
                                                                            & top__DOT__Core__DOT__rs2_data)
                                                                            : top__DOT__Core__DOT__rs2_data)))))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->top__DOT__Core__DOT__state_ma) 
                                                & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                   >> 5U)));
    vlSelf->top__DOT__Core__DOT__dmem[1U] = __Vtemp_h36d70bb2__0[1U];
    vlSelf->top__DOT__Core__DOT__dmem[2U] = ((0xfffffffeU 
                                              & vlSelf->top__DOT__Core__DOT__dmem[2U]) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->top__DOT__Core__DOT__alu_out)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0U 
                                                                              == 
                                                                              (7U 
                                                                               & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                              ? 
                                                                             (0xffU 
                                                                              & top__DOT__Core__DOT__rs2_data)
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                               ? 
                                                                              (0xffffU 
                                                                               & top__DOT__Core__DOT__rs2_data)
                                                                               : top__DOT__Core__DOT__rs2_data))))) 
                                                         >> 0x20U)) 
                                                >> 0x1fU));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG