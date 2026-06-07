#include "types.h"

u32 PPCMfmsr(void) {
    return __PPCMfmsr();
}

void PPCMtmsr(u32 val) {
    __PPCMtmsr(val);
}

u32 PPCMfhid0(void) {
    return __PPCMfhid0();
}

void PPCMthid0(u32 val) {
    __PPCMthid0(val);
}

u32 PPCMfl2cr(void) {
    return __PPCMfl2cr();
}

void PPCMtl2cr(u32 val) {
    __PPCMtl2cr(val);
}

void PPCMtdec(u32 val) {
    __PPCMtdec(val);
}

asm void PPCSync(void) {
#include "orig_asm/dolphin/ppc_hw/PPCSync.inc"
}

asm void PPCHalt(void) {
#include "orig_asm/dolphin/ppc_hw/PPCHalt.inc"
}

u32 PPCMfhid2(void) {
    return __PPCMfhid2();
}

void PPCMthid2(u32 val) {
    __PPCMthid2(val);
}

void PPCMtwpar(u32 val) {
    __PPCMtwpar(val);
}

void PPCEnableDPM(void) {
    PPCMthid0(PPCMfhid0() | 0x200);
}

asm void PPCSetFpNonIEEEMode(void) {
#include "orig_asm/dolphin/ppc_hw/PPCSetFpNonIEEEMode.inc"
}
