// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlWide<17>/*543:0*/ Vtop__ConstPool__CONST_h787e27d1_0;

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i;
    // Body
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(17, Vtop__ConstPool__CONST_h787e27d1_0)
                 ,  &(vlSelf->top__DOT__Core__DOT__Imem__DOT__mem)
                 , 0, ~0ULL);
    __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i = 0U;
    while ((0x1000U > __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i)) {
        vlSelf->top__DOT__Core__DOT__Dmem__DOT__mem[(0xfffU 
                                                     & __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i)] = 0U;
        __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__Core__DOT__Dmem__DOT__init_mem__2__unnamedblk1__DOT__i);
    }
    vlSelf->top__DOT__Core__DOT__state_idle = 1U;
    vlSelf->top__DOT__Core__DOT__state_if = 0U;
    vlSelf->top__DOT__Core__DOT__state_de = 0U;
    vlSelf->top__DOT__Core__DOT__state_ex = 0U;
    vlSelf->top__DOT__Core__DOT__state_ma = 0U;
    vlSelf->top__DOT__Core__DOT__state_wb = 0U;
    vlSelf->top__DOT__Core__DOT__pc = 0U;
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

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h936373d3__0;
    // Body
    vlSelf->top__DOT__Core__DOT__dmem[2U] = ((1U & 
                                              vlSelf->top__DOT__Core__DOT__dmem[2U]) 
                                             | (vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data 
                                                << 1U));
    vlSelf->top__DOT__Core__DOT__dmem[3U] = ((0xfffffffeU 
                                              & vlSelf->top__DOT__Core__DOT__dmem[3U]) 
                                             | (vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data 
                                                >> 0x1fU));
    vlSelf->led = (0xffffU & vlSelf->top__DOT__Core__DOT__register
                   [0xaU]);
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
    vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type 
        = (((3U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
            | (0x13U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
           | (0x67U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))));
    vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type 
        = ((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
           | (0x17U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))));
    vlSelf->top__DOT__Core__DOT__de[1U] = ((0x7ffffU 
                                            & vlSelf->top__DOT__Core__DOT__de[1U]) 
                                           | (0xfff80000U 
                                              & (((((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                                      | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
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
                                                           | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                         | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type))
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
                                                         | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
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
                                                           | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                                         | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__Core__DOT__imem 
                                                                    >> 7U)))
                                                         : 0U) 
                                                       >> 0xdU))));
    vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm 
        = ((IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)
            ? (((- (IData)((1U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                          >> 0x1fU))))) 
                << 0xcU) | (0xfffU & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                              >> 0x14U))))
            : ((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                ? (((- (IData)((1U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                              >> 0x1fU))))) 
                    << 0xcU) | ((0xfe0U & ((IData)(
                                                   (vlSelf->top__DOT__Core__DOT__imem 
                                                    >> 0x19U)) 
                                           << 5U)) 
                                | (0x1fU & (IData)(
                                                   (vlSelf->top__DOT__Core__DOT__imem 
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
                            << 0x14U) | ((0xff000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__Core__DOT__imem 
                                                      >> 0xcU)) 
                                             << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__Core__DOT__imem 
                                                         >> 0x14U)) 
                                                << 0xbU)) 
                                            | (0x7feU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__Core__DOT__imem 
                                                           >> 0x15U)) 
                                                  << 1U)))))
                        : ((IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type)
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
                                                          | (((QData)((IData)(vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm)) 
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
                                                           | (((QData)((IData)(vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm)) 
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
                                                              | (((QData)((IData)(vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm)) 
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
    vlSelf->top__DOT__Core__DOT__rs2_data = ((0U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                  >> 0x18U)))
                                              ? 0U : 
                                             vlSelf->top__DOT__Core__DOT__register
                                             [(0x1fU 
                                               & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                  >> 0x18U))]);
    vlSelf->top__DOT__Core__DOT__Alu__DOT__op2 = ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xe0U 
                                                            & vlSelf->top__DOT__Core__DOT__de[0U])))
                                                   ? 
                                                  ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                    << 0x17U) 
                                                   | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                      >> 9U))
                                                   : vlSelf->top__DOT__Core__DOT__rs2_data);
    vlSelf->top__DOT__Core__DOT__alu_out = ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x60U 
                                                      & vlSelf->top__DOT__Core__DOT__de[0U])))
                                             ? (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                + vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
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
                                                            & vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
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
                                                           - vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)))))))))
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
                                                            == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? vlSelf->top__DOT__Core__DOT__rs1_data
                                                            : 
                                                           VL_MODDIV_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          ((0U 
                                                            == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? vlSelf->top__DOT__Core__DOT__rs1_data
                                                            : 
                                                           (((0x80000000U 
                                                              == vlSelf->top__DOT__Core__DOT__rs1_data) 
                                                             & (0xffffffffU 
                                                                == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                             ? 0U
                                                             : 
                                                            VL_MODDIVS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          ((0U 
                                                            == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 0xffffffffU
                                                            : 
                                                           VL_DIV_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          ((0U 
                                                            == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 0xffffffffU
                                                            : 
                                                           (((0x80000000U 
                                                              == vlSelf->top__DOT__Core__DOT__rs1_data) 
                                                             & (0xffffffffU 
                                                                == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                             ? 0x80000000U
                                                             : 
                                                            VL_DIVS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)))))
                                                         : 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 0U
                                                           : 
                                                          (- 
                                                           (VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2) 
                                                            >> 0x1fU)))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (- 
                                                           (VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2) 
                                                            >> 0x1fU))
                                                           : 
                                                          VL_MULS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))))
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
                                                           & vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           | vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           >> 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           ^ vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)))
                                                         : 
                                                        ((0x20000U 
                                                          & vlSelf->top__DOT__Core__DOT__de[1U])
                                                          ? 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          ((vlSelf->top__DOT__Core__DOT__rs1_data 
                                                            < vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          (VL_LTS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                            ? 1U
                                                            : 0U))
                                                          : 
                                                         ((0x10000U 
                                                           & vlSelf->top__DOT__Core__DOT__de[1U])
                                                           ? 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                           : 
                                                          (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                           + vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)))))))))))
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
                                                     >= vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     < vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->top__DOT__Core__DOT__rs1_data, vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->top__DOT__Core__DOT__de[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->top__DOT__Core__DOT__de[1U])
                                                     ? 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     != vlSelf->top__DOT__Core__DOT__Alu__DOT__op2)
                                                     : 
                                                    (vlSelf->top__DOT__Core__DOT__rs1_data 
                                                     == vlSelf->top__DOT__Core__DOT__Alu__DOT__op2))))
                                                  : 0U)));
    vlSelf->top__DOT__Core__DOT__dmem[3U] = ((1U & 
                                              vlSelf->top__DOT__Core__DOT__dmem[3U]) 
                                             | (vlSelf->top__DOT__Core__DOT__alu_out 
                                                << 1U));
    vlSelf->top__DOT__Core__DOT__dmem[4U] = (vlSelf->top__DOT__Core__DOT__alu_out 
                                             >> 0x1fU);
    __Vtemp_h936373d3__0[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__Core__DOT__alu_out)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                  >> 0x10U)))
                                                              ? 
                                                             (0xffU 
                                                              & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                   >> 0x10U)))
                                                               ? 
                                                              (0xffffU 
                                                               & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                               : vlSelf->top__DOT__Core__DOT__rs2_data)))))) 
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
                                                                            & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                             ? 
                                                                            (0xffffU 
                                                                             & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                             : vlSelf->top__DOT__Core__DOT__rs2_data))))) 
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
                                                                           & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                            ? 
                                                                           (0xffffU 
                                                                            & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                            : vlSelf->top__DOT__Core__DOT__rs2_data)))))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->top__DOT__Core__DOT__state_ma) 
                                                & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                   >> 5U)));
    vlSelf->top__DOT__Core__DOT__dmem[1U] = __Vtemp_h936373d3__0[1U];
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
                                                                              & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                                                                >> 0x10U)))
                                                                               ? 
                                                                              (0xffffU 
                                                                               & vlSelf->top__DOT__Core__DOT__rs2_data)
                                                                               : vlSelf->top__DOT__Core__DOT__rs2_data))))) 
                                                         >> 0x20U)) 
                                                >> 0x1fU));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__Core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Core__DOT__state_idle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__state_if = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__state_de = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__state_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__state_ma = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__state_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__imem = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__Core__DOT____Vcellout__Imem__inst = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__Core__DOT__de);
    vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Core__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Core__DOT__rs2_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Core__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Core__DOT__alu_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__Core__DOT__dmem);
    vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__Core__DOT__Imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Core__DOT__Alu__DOT__op2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__Core__DOT__Dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
