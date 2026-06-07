#include "types.h"

asm u32 PPCMfmsr(void) {
#include "orig_asm/dolphin/ppc_hw/PPCMfmsr.inc"
}

asm void PPCMtmsr(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMtmsr.inc"
}

asm u32 PPCMfhid0(void) {
#include "orig_asm/dolphin/ppc_hw/PPCMfhid0.inc"
}

asm void PPCMthid0(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMthid0.inc"
}

asm u32 PPCMfl2cr(void) {
#include "orig_asm/dolphin/ppc_hw/PPCMfl2cr.inc"
}

asm void PPCMtl2cr(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMtl2cr.inc"
}

asm void PPCMtdec(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMtdec.inc"
}

asm void PPCSync(void) {
#include "orig_asm/dolphin/ppc_hw/PPCSync.inc"
}

asm void PPCHalt(void) {
#include "orig_asm/dolphin/ppc_hw/PPCHalt.inc"
}

asm u32 PPCMfhid2(void) {
#include "orig_asm/dolphin/ppc_hw/PPCMfhid2.inc"
}

asm void PPCMthid2(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMthid2.inc"
}

asm void PPCMtwpar(register u32 val) {
#include "orig_asm/dolphin/ppc_hw/PPCMtwpar.inc"
}

void PPCEnableDPM(void) {
    PPCMthid0(PPCMfhid0() | 0x200);
}

asm void PPCSetFpNonIEEEMode(void) {
#include "orig_asm/dolphin/ppc_hw/PPCSetFpNonIEEEMode.inc"
}
