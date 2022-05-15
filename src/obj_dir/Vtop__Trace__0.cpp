// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__Core__DOT__register
                                 [0xaU]),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__Core__DOT__pc),32);
        tracep->chgBit(oldp+2,(vlSelf->top__DOT__Core__DOT__state_idle));
        tracep->chgBit(oldp+3,(vlSelf->top__DOT__Core__DOT__state_if));
        tracep->chgBit(oldp+4,(vlSelf->top__DOT__Core__DOT__state_de));
        tracep->chgBit(oldp+5,(vlSelf->top__DOT__Core__DOT__state_ex));
        tracep->chgBit(oldp+6,(vlSelf->top__DOT__Core__DOT__state_ma));
        tracep->chgBit(oldp+7,(vlSelf->top__DOT__Core__DOT__state_wb));
        tracep->chgIData(oldp+8,((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                          >> 0x20U))),32);
        tracep->chgIData(oldp+9,((IData)(vlSelf->top__DOT__Core__DOT__imem)),32);
        tracep->chgCData(oldp+10,((0x1fU & ((vlSelf->top__DOT__Core__DOT__de[2U] 
                                             << 3U) 
                                            | (vlSelf->top__DOT__Core__DOT__de[1U] 
                                               >> 0x1dU)))),5);
        tracep->chgCData(oldp+11,((0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                            >> 0x18U))),5);
        tracep->chgCData(oldp+12,((0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+13,((7U & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 0x10U))),3);
        tracep->chgCData(oldp+14,((0x7fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                            >> 9U))),7);
        tracep->chgIData(oldp+15,(((vlSelf->top__DOT__Core__DOT__de[1U] 
                                    << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                 >> 9U))),32);
        tracep->chgBit(oldp+16,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 8U))));
        tracep->chgBit(oldp+17,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 7U))));
        tracep->chgBit(oldp+18,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 6U))));
        tracep->chgBit(oldp+19,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 5U))));
        tracep->chgBit(oldp+20,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 4U))));
        tracep->chgBit(oldp+21,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 3U))));
        tracep->chgBit(oldp+22,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 2U))));
        tracep->chgBit(oldp+23,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 1U))));
        tracep->chgBit(oldp+24,((1U & vlSelf->top__DOT__Core__DOT__de[0U])));
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__Core__DOT__rs1_data),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__Core__DOT__rs2_data),32);
        tracep->chgIData(oldp+27,(((IData)((0U != (0xcU 
                                                   & vlSelf->top__DOT__Core__DOT__de[0U])))
                                    ? ((IData)(4U) 
                                       + vlSelf->top__DOT__Core__DOT__pc)
                                    : ((0x40U & vlSelf->top__DOT__Core__DOT__de[0U])
                                        ? ((vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                            << 0x1fU) 
                                           | (vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                              >> 1U))
                                        : ((2U & vlSelf->top__DOT__Core__DOT__de[0U])
                                            ? ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                << 0x17U) 
                                               | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                  >> 9U))
                                            : ((1U 
                                                & vlSelf->top__DOT__Core__DOT__de[0U])
                                                ? (vlSelf->top__DOT__Core__DOT__pc 
                                                   + 
                                                   ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                     << 0x17U) 
                                                    | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                       >> 9U)))
                                                : vlSelf->top__DOT__Core__DOT__alu_out))))),32);
        tracep->chgIData(oldp+28,(vlSelf->top__DOT__Core__DOT__register[0]),32);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__Core__DOT__register[1]),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__Core__DOT__register[2]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__Core__DOT__register[3]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__Core__DOT__register[4]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__Core__DOT__register[5]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__Core__DOT__register[6]),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__Core__DOT__register[7]),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__Core__DOT__register[8]),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__Core__DOT__register[9]),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__Core__DOT__register[10]),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__Core__DOT__register[11]),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__Core__DOT__register[12]),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__Core__DOT__register[13]),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__Core__DOT__register[14]),32);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__Core__DOT__register[15]),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__Core__DOT__register[16]),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__Core__DOT__register[17]),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__Core__DOT__register[18]),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__Core__DOT__register[19]),32);
        tracep->chgIData(oldp+48,(vlSelf->top__DOT__Core__DOT__register[20]),32);
        tracep->chgIData(oldp+49,(vlSelf->top__DOT__Core__DOT__register[21]),32);
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__Core__DOT__register[22]),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__Core__DOT__register[23]),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__Core__DOT__register[24]),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__Core__DOT__register[25]),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__Core__DOT__register[26]),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__Core__DOT__register[27]),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__Core__DOT__register[28]),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__Core__DOT__register[29]),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__Core__DOT__register[30]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__Core__DOT__register[31]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__Core__DOT__alu_out),32);
        tracep->chgIData(oldp+61,(((vlSelf->top__DOT__Core__DOT__dmem[4U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                                 >> 1U))),32);
        tracep->chgIData(oldp+62,(((vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                                 >> 1U))),32);
        tracep->chgIData(oldp+63,(((vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                                 >> 1U))),32);
        tracep->chgIData(oldp+64,(((vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[0U] 
                                                 >> 1U))),32);
        tracep->chgBit(oldp+65,((1U & vlSelf->top__DOT__Core__DOT__dmem[0U])));
        tracep->chgIData(oldp+66,(((vlSelf->top__DOT__Core__DOT__de[1U] 
                                    << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                 >> 9U))),32);
        tracep->chgCData(oldp+67,((7U & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 0x10U))),3);
        tracep->chgCData(oldp+68,((0x7fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                            >> 9U))),7);
        tracep->chgBit(oldp+69,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 8U))));
        tracep->chgBit(oldp+70,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 7U))));
        tracep->chgBit(oldp+71,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 5U))));
        tracep->chgBit(oldp+72,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 6U))));
        tracep->chgBit(oldp+73,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                       >> 4U))));
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__Core__DOT__Alu__DOT__op2),32);
        tracep->chgIData(oldp+75,((IData)(vlSelf->top__DOT__Core__DOT__imem)),32);
        tracep->chgCData(oldp+76,((((((0x33U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                      | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                     | (0x23U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                    | (0x63U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__Core__DOT__imem 
                                                        >> 0xfU)))
                                    : 0U)),5);
        tracep->chgCData(oldp+77,(((((0x33U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                     | (0x23U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                    | (0x63U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__Core__DOT__imem 
                                                        >> 0x14U)))
                                    : 0U)),5);
        tracep->chgCData(oldp+78,((((((0x33U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                      | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                     | (0x6fU == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                    | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type))
                                    ? (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__Core__DOT__imem 
                                                        >> 7U)))
                                    : 0U)),5);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm),32);
        tracep->chgCData(oldp+80,((7U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                                 >> 0xcU)))),3);
        tracep->chgCData(oldp+81,(((0x1bU == (0x7fU 
                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                                    ? (0x7fU & (IData)(
                                                       (vlSelf->top__DOT__Core__DOT__imem 
                                                        >> 0x19U)))
                                    : 0U)),7);
        tracep->chgBit(oldp+82,((0x33U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+83,((0x13U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+84,((3U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+85,((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+86,((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+87,((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+88,((0x67U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+89,((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgBit(oldp+90,((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
        tracep->chgCData(oldp+91,((0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))),7);
        tracep->chgBit(oldp+92,(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type));
        tracep->chgBit(oldp+93,(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type));
        tracep->chgIData(oldp+94,(((vlSelf->top__DOT__Core__DOT__dmem[4U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                                 >> 1U))),32);
        tracep->chgIData(oldp+95,(((vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                                 >> 1U))),32);
        tracep->chgIData(oldp+96,(((vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                    << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[0U] 
                                                 >> 1U))),32);
        tracep->chgBit(oldp+97,((1U & vlSelf->top__DOT__Core__DOT__dmem[0U])));
        tracep->chgIData(oldp+98,(vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data),32);
        tracep->chgIData(oldp+99,((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                           >> 0x20U))),32);
        tracep->chgIData(oldp+100,(vlSelf->top__DOT__Core__DOT____Vcellout__Imem__inst),32);
        tracep->chgIData(oldp+101,(vlSelf->top__DOT__Seven__DOT__seg_counter),32);
    }
    tracep->chgBit(oldp+102,(vlSelf->clk));
    tracep->chgBit(oldp+103,(vlSelf->rst));
    tracep->chgSData(oldp+104,(vlSelf->led),16);
    tracep->chgCData(oldp+105,(vlSelf->anode),4);
    tracep->chgCData(oldp+106,(vlSelf->seg),7);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
