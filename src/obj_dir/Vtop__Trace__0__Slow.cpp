// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"reg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"reg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"reg2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"reg3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"reg4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"reg5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"reg6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"reg7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"reg8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"reg9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"reg10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"reg11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"reg12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"reg13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"reg14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"reg15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"reg16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"reg17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"reg18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"reg19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"reg20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"reg21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"reg22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"reg23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"reg24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"reg25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"reg26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"reg27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"reg28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"reg29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"reg30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"reg31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pcout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"reg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"reg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"reg2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"reg3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"reg4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"reg5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"reg6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"reg7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"reg8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"reg9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"reg10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"reg11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"reg12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"reg13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"reg14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"reg15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"reg16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"reg17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"reg18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"reg19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"reg20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"reg21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"reg22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"reg23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"reg24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"reg25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"reg26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"reg27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"reg28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"reg29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"reg30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"reg31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pcout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("Core ");
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"reg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"reg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"reg2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"reg3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"reg4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"reg5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"reg6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"reg7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"reg8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"reg9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"reg10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"reg11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"reg12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"reg13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"reg14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"reg15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"reg16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"reg17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"reg18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"reg19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"reg20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"reg21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"reg22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"reg23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"reg24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"reg25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"reg26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"reg27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"reg28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"reg29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"reg30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"reg31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pcout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"INST_ADDR_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+137,"DATA_ADDR_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,"state_idle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"state_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"state_de",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"state_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"state_ma",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"state_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("imem\206 ");
    tracep->declBus(c+8,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("de\206 ");
    tracep->declBus(c+10,"rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,"funct7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,"_arithmetic",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"_arithmetic_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"_store",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"_jal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"_jalr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"_lui",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"_auipc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+25,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"rd_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("dmem\206 ");
    tracep->declBus(c+61,"read_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"read_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,"write_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,"write_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+25,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"imm_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+68,"funct7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+69,"arithmetic",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"arithmetic_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"alu_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"op2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+75,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+77,"rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+78,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+79,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+81,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+82,"arithmetic",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"arithmetic_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"jal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"jalr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"lui",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"auipc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+82,"r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"s_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"b_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"j_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"u_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dmem ");
    tracep->declBus(c+137,"ADDR_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+94,"read_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"write_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"read_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Imem ");
    tracep->declBus(c+136,"ADDR_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+99,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__Core__DOT__pc),32);
    tracep->fullBit(oldp+2,(vlSelf->top__DOT__Core__DOT__state_idle));
    tracep->fullBit(oldp+3,(vlSelf->top__DOT__Core__DOT__state_if));
    tracep->fullBit(oldp+4,(vlSelf->top__DOT__Core__DOT__state_de));
    tracep->fullBit(oldp+5,(vlSelf->top__DOT__Core__DOT__state_ex));
    tracep->fullBit(oldp+6,(vlSelf->top__DOT__Core__DOT__state_ma));
    tracep->fullBit(oldp+7,(vlSelf->top__DOT__Core__DOT__state_wb));
    tracep->fullIData(oldp+8,((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                       >> 0x20U))),32);
    tracep->fullIData(oldp+9,((IData)(vlSelf->top__DOT__Core__DOT__imem)),32);
    tracep->fullCData(oldp+10,((0x1fU & ((vlSelf->top__DOT__Core__DOT__de[2U] 
                                          << 3U) | 
                                         (vlSelf->top__DOT__Core__DOT__de[1U] 
                                          >> 0x1dU)))),5);
    tracep->fullCData(oldp+11,((0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 0x18U))),5);
    tracep->fullCData(oldp+12,((0x1fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 0x13U))),5);
    tracep->fullCData(oldp+13,((7U & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                      >> 0x10U))),3);
    tracep->fullCData(oldp+14,((0x7fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 9U))),7);
    tracep->fullIData(oldp+15,(((vlSelf->top__DOT__Core__DOT__de[1U] 
                                 << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                              >> 9U))),32);
    tracep->fullBit(oldp+16,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 8U))));
    tracep->fullBit(oldp+17,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 7U))));
    tracep->fullBit(oldp+18,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 6U))));
    tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 5U))));
    tracep->fullBit(oldp+20,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 4U))));
    tracep->fullBit(oldp+21,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 3U))));
    tracep->fullBit(oldp+22,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 2U))));
    tracep->fullBit(oldp+23,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 1U))));
    tracep->fullBit(oldp+24,((1U & vlSelf->top__DOT__Core__DOT__de[0U])));
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__Core__DOT__rs1_data),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__Core__DOT__rs2_data),32);
    tracep->fullIData(oldp+27,(((IData)((0U != (0xcU 
                                                & vlSelf->top__DOT__Core__DOT__de[0U])))
                                 ? ((IData)(4U) + vlSelf->top__DOT__Core__DOT__pc)
                                 : ((0x40U & vlSelf->top__DOT__Core__DOT__de[0U])
                                     ? ((vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                           >> 1U)) : 
                                    ((2U & vlSelf->top__DOT__Core__DOT__de[0U])
                                      ? ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                          << 0x17U) 
                                         | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                            >> 9U))
                                      : ((1U & vlSelf->top__DOT__Core__DOT__de[0U])
                                          ? (vlSelf->top__DOT__Core__DOT__pc 
                                             + ((vlSelf->top__DOT__Core__DOT__de[1U] 
                                                 << 0x17U) 
                                                | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                                   >> 9U)))
                                          : vlSelf->top__DOT__Core__DOT__alu_out))))),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__Core__DOT__register[0]),32);
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__Core__DOT__register[1]),32);
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__Core__DOT__register[2]),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__Core__DOT__register[3]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__Core__DOT__register[4]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__Core__DOT__register[5]),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__Core__DOT__register[6]),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__Core__DOT__register[7]),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__Core__DOT__register[8]),32);
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__Core__DOT__register[9]),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__Core__DOT__register[10]),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__Core__DOT__register[11]),32);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__Core__DOT__register[12]),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__Core__DOT__register[13]),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__Core__DOT__register[14]),32);
    tracep->fullIData(oldp+43,(vlSelf->top__DOT__Core__DOT__register[15]),32);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__Core__DOT__register[16]),32);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__Core__DOT__register[17]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__Core__DOT__register[18]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__Core__DOT__register[19]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__Core__DOT__register[20]),32);
    tracep->fullIData(oldp+49,(vlSelf->top__DOT__Core__DOT__register[21]),32);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__Core__DOT__register[22]),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__Core__DOT__register[23]),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__Core__DOT__register[24]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__Core__DOT__register[25]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__Core__DOT__register[26]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__Core__DOT__register[27]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__Core__DOT__register[28]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__Core__DOT__register[29]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__Core__DOT__register[30]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__Core__DOT__register[31]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__Core__DOT__alu_out),32);
    tracep->fullIData(oldp+61,(((vlSelf->top__DOT__Core__DOT__dmem[4U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                              >> 1U))),32);
    tracep->fullIData(oldp+62,(((vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                              >> 1U))),32);
    tracep->fullIData(oldp+63,(((vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                              >> 1U))),32);
    tracep->fullIData(oldp+64,(((vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[0U] 
                                              >> 1U))),32);
    tracep->fullBit(oldp+65,((1U & vlSelf->top__DOT__Core__DOT__dmem[0U])));
    tracep->fullIData(oldp+66,(((vlSelf->top__DOT__Core__DOT__de[1U] 
                                 << 0x17U) | (vlSelf->top__DOT__Core__DOT__de[0U] 
                                              >> 9U))),32);
    tracep->fullCData(oldp+67,((7U & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                      >> 0x10U))),3);
    tracep->fullCData(oldp+68,((0x7fU & (vlSelf->top__DOT__Core__DOT__de[1U] 
                                         >> 9U))),7);
    tracep->fullBit(oldp+69,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 8U))));
    tracep->fullBit(oldp+70,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 7U))));
    tracep->fullBit(oldp+71,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 5U))));
    tracep->fullBit(oldp+72,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 6U))));
    tracep->fullBit(oldp+73,((1U & (vlSelf->top__DOT__Core__DOT__de[0U] 
                                    >> 4U))));
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__Core__DOT__Alu__DOT__op2),32);
    tracep->fullIData(oldp+75,((IData)(vlSelf->top__DOT__Core__DOT__imem)),32);
    tracep->fullCData(oldp+76,((((((0x33U == (0x7fU 
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
    tracep->fullCData(oldp+77,(((((0x33U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                  | (0x23U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                 | (0x63U == (0x7fU 
                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem))))
                                 ? (0x1fU & (IData)(
                                                    (vlSelf->top__DOT__Core__DOT__imem 
                                                     >> 0x14U)))
                                 : 0U)),5);
    tracep->fullCData(oldp+78,((((((0x33U == (0x7fU 
                                              & (IData)(vlSelf->top__DOT__Core__DOT__imem))) 
                                   | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type)) 
                                  | (0x6fU == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__Core__DOT__imem)))) 
                                 | (IData)(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type))
                                 ? (0x1fU & (IData)(
                                                    (vlSelf->top__DOT__Core__DOT__imem 
                                                     >> 7U)))
                                 : 0U)),5);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__Core__DOT____Vcellout__Decode__imm),32);
    tracep->fullCData(oldp+80,((7U & (IData)((vlSelf->top__DOT__Core__DOT__imem 
                                              >> 0xcU)))),3);
    tracep->fullCData(oldp+81,(((0x33U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))
                                 ? (0x7fU & (IData)(
                                                    (vlSelf->top__DOT__Core__DOT__imem 
                                                     >> 0x19U)))
                                 : 0U)),7);
    tracep->fullBit(oldp+82,((0x33U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+83,((0x13U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+84,((3U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+85,((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+86,((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+87,((0x6fU == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+88,((0x67U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+89,((0x37U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullBit(oldp+90,((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem)))));
    tracep->fullCData(oldp+91,((0x7fU & (IData)(vlSelf->top__DOT__Core__DOT__imem))),7);
    tracep->fullBit(oldp+92,(vlSelf->top__DOT__Core__DOT__Decode__DOT__i_type));
    tracep->fullBit(oldp+93,(vlSelf->top__DOT__Core__DOT__Decode__DOT__u_type));
    tracep->fullIData(oldp+94,(((vlSelf->top__DOT__Core__DOT__dmem[4U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[3U] 
                                              >> 1U))),32);
    tracep->fullIData(oldp+95,(((vlSelf->top__DOT__Core__DOT__dmem[2U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                              >> 1U))),32);
    tracep->fullIData(oldp+96,(((vlSelf->top__DOT__Core__DOT__dmem[1U] 
                                 << 0x1fU) | (vlSelf->top__DOT__Core__DOT__dmem[0U] 
                                              >> 1U))),32);
    tracep->fullBit(oldp+97,((1U & vlSelf->top__DOT__Core__DOT__dmem[0U])));
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__Core__DOT____Vcellout__Dmem__read_data),32);
    tracep->fullIData(oldp+99,((IData)((vlSelf->top__DOT__Core__DOT__imem 
                                        >> 0x20U))),32);
    tracep->fullIData(oldp+100,(vlSelf->top__DOT__Core__DOT____Vcellout__Imem__inst),32);
    tracep->fullBit(oldp+101,(vlSelf->clk));
    tracep->fullBit(oldp+102,(vlSelf->rst));
    tracep->fullIData(oldp+103,(vlSelf->reg0),32);
    tracep->fullIData(oldp+104,(vlSelf->reg1),32);
    tracep->fullIData(oldp+105,(vlSelf->reg2),32);
    tracep->fullIData(oldp+106,(vlSelf->reg3),32);
    tracep->fullIData(oldp+107,(vlSelf->reg4),32);
    tracep->fullIData(oldp+108,(vlSelf->reg5),32);
    tracep->fullIData(oldp+109,(vlSelf->reg6),32);
    tracep->fullIData(oldp+110,(vlSelf->reg7),32);
    tracep->fullIData(oldp+111,(vlSelf->reg8),32);
    tracep->fullIData(oldp+112,(vlSelf->reg9),32);
    tracep->fullIData(oldp+113,(vlSelf->reg10),32);
    tracep->fullIData(oldp+114,(vlSelf->reg11),32);
    tracep->fullIData(oldp+115,(vlSelf->reg12),32);
    tracep->fullIData(oldp+116,(vlSelf->reg13),32);
    tracep->fullIData(oldp+117,(vlSelf->reg14),32);
    tracep->fullIData(oldp+118,(vlSelf->reg15),32);
    tracep->fullIData(oldp+119,(vlSelf->reg16),32);
    tracep->fullIData(oldp+120,(vlSelf->reg17),32);
    tracep->fullIData(oldp+121,(vlSelf->reg18),32);
    tracep->fullIData(oldp+122,(vlSelf->reg19),32);
    tracep->fullIData(oldp+123,(vlSelf->reg20),32);
    tracep->fullIData(oldp+124,(vlSelf->reg21),32);
    tracep->fullIData(oldp+125,(vlSelf->reg22),32);
    tracep->fullIData(oldp+126,(vlSelf->reg23),32);
    tracep->fullIData(oldp+127,(vlSelf->reg24),32);
    tracep->fullIData(oldp+128,(vlSelf->reg25),32);
    tracep->fullIData(oldp+129,(vlSelf->reg26),32);
    tracep->fullIData(oldp+130,(vlSelf->reg27),32);
    tracep->fullIData(oldp+131,(vlSelf->reg28),32);
    tracep->fullIData(oldp+132,(vlSelf->reg29),32);
    tracep->fullIData(oldp+133,(vlSelf->reg30),32);
    tracep->fullIData(oldp+134,(vlSelf->reg31),32);
    tracep->fullIData(oldp+135,(vlSelf->pcout),32);
    tracep->fullIData(oldp+136,(7U),32);
    tracep->fullIData(oldp+137,(0xaU),32);
}
