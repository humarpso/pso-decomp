#ifndef GLOBAL_H
#define GLOBAL_H

#include "types.h"

u32 PPCMfmsr(void);
void PPCMtmsr(u32);
u32 PPCMfhid0(void);
void PPCMthid0(u32);
u32 PPCMfhid2(void);
void PPCMthid2(u32);
u32 PPCMfl2cr(void);
void PPCMtl2cr(u32);
void PPCMtwpar(u32);
void PPCMtdec(u32);
u32 PPCMfdec(void);
void PPCSync(void);
void PPCHalt(void);
void PPCMtmmcr0(u32);
void PPCMtmmcr1(u32);
void PPCMtpmc1(u32);
void PPCMtpmc2(u32);
void PPCMtpmc3(u32);
void PPCMtpmc4(u32);
u32 PPCMfmmcr0(void);
u32 PPCMfmmcr1(void);
u32 PPCMfpmc1(void);
u32 PPCMfpmc2(void);
u32 PPCMfpmc3(void);
u32 PPCMfpmc4(void);

#endif
