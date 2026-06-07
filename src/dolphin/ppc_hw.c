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

u32 PPCMfhid2(void) {
    return __PPCMfhid2();
}

void PPCMthid2(u32 val) {
    __PPCMthid2(val);
}

void PPCMtwpar(u32 val) {
    __PPCMtwpar(val);
}
