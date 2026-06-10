#include "dolphin/base/PPCArch.h"

asm u32 PPCMfmsr(void) {
#include "orig_asm/base/PPCArch/PPCMfmsr.inc"
}

asm void PPCMtmsr(register u32 value) {
#include "orig_asm/base/PPCArch/PPCMtmsr.inc"
}

asm u32 PPCMfhid0(void) {
#include "orig_asm/base/PPCArch/PPCMfhid0.inc"
}

asm void PPCMthid0(register u32 value) {
#include "orig_asm/base/PPCArch/PPCMthid0.inc"
}

asm u32 PPCMfl2cr(void) {
#include "orig_asm/base/PPCArch/PPCMfl2cr.inc"
}

asm void PPCMtl2cr(register u32 value) {
#include "orig_asm/base/PPCArch/PPCMtl2cr.inc"
}
asm void PPCMtdec(register u32 value) {
#include "orig_asm/base/PPCArch/PPCMtdec.inc"
}

asm void PPCSync(void) {
#include "orig_asm/base/PPCArch/PPCSync.inc"
}

asm void PPCHalt(void) {
#include "orig_asm/base/PPCArch/PPCHalt.inc"
}
asm u32 PPCMfhid2(void) {
#include "orig_asm/base/PPCArch/PPCMfhid2.inc"
}

asm void PPCMthid2(u32 register value) {
#include "orig_asm/base/PPCArch/PPCMthid2.inc"
}
asm void PPCMtwpar(u32 register value) {
#include "orig_asm/base/PPCArch/PPCMtwpar.inc"
}

void PPCDisableSpeculation(void) {
    PPCMthid0(PPCMfhid0() | (1 << (31 - 22)));
}

asm void PPCSetFpNonIEEEMode(void) {
#include "orig_asm/base/PPCArch/PPCSetFpNonIEEEMode.inc"
}
