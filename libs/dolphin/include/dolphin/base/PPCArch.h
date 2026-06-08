#ifndef PPCARCH_H
#define PPCARCH_H
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 PPCMfmsr(void);
void PPCMtmsr(u32);

u32 PPCMfhid0(void);
void PPCMthid0(u32);

u32 PPCMfl2cr(void);
void PPCMtl2cr(u32);

void PPCMtdec(u32);

void PPCSync(void);
void PPCHalt(void);

u32 PPCMfhid2(void);
void PPCMthid2(u32);

void PPCMtwpar(u32);

void PPCDisableSpeculation(void);
void PPCSetFpNonIEEEMode(void);

#define HID0_EMCP       0x80000000u
#define HID0_DBP        0x40000000u
#define HID0_EBA        0x20000000u
#define HID0_EBD        0x10000000u
#define HID0_BCLK       0x08000000u
#define HID0_ECLK       0x02000000u
#define HID0_PAR        0x01000000u
#define HID0_DOZE       0x00800000u
#define HID0_NAP        0x00400000u
#define HID0_SLEEP      0x00200000u
#define HID0_DPM        0x00100000u
#define HID0_NHR        0x00010000u
#define HID0_ICE        0x00008000u
#define HID0_DCE        0x00004000u
#define HID0_ILOCK      0x00002000u
#define HID0_DLOCK      0x00001000u
#define HID0_ICFI       0x00000800u
#define HID0_DCFI       0x00000400u
#define HID0_SPD        0x00000200u
#define HID0_IFEM       0x00000100u
#define HID0_SGE        0x00000080u
#define HID0_DCFA       0x00000040u
#define HID0_BTIC       0x00000020u
#define HID0_ABE        0x00000008u
#define HID0_BHT        0x00000004u
#define HID0_NOOPTI     0x00000001u

#define HID2_DCHERR         0x00800000
#define HID2_DNCERR         0x00400000
#define HID2_DCMERR         0x00200000
#define HID2_DQOERR         0x00100000
#define HID2_DCHEE          0x00080000
#define HID2_DNCEE          0x00040000
#define HID2_DCMEE          0x00020000
#define HID2_DQOEE          0x00010000

#define SRR1_DMA_BIT                0x00200000
#define SRR1_L2DP_BIT               0x00100000

#define L2CR_L2E                    0x80000000
#define L2CR_L2PE                   0x40000000

#define L2CR_L2DO                   0x00400000
#define L2CR_L2I                    0x00200000
#define L2CR_L2CTL                  0x00100000
#define L2CR_L2WT                   0x00080000
#define L2CR_L2TS                   0x00040000

#define MSR_POW         0x00040000
#define MSR_ILE         0x00010000
#define MSR_EE          0x00008000
#define MSR_PR          0x00004000
#define MSR_FP          0x00002000
#define MSR_ME          0x00001000
#define MSR_FE0         0x00000800
#define MSR_SE          0x00000400
#define MSR_BE          0x00000200
#define MSR_FE1         0x00000100
#define MSR_IP          0x00000040
#define MSR_IR          0x00000020
#define MSR_DR          0x00000010
#define MSR_PM          0x00000004
#define MSR_RI          0x00000002
#define MSR_LE          0x00000001

#define MSR_POW_BIT 13
#define MSR_ILE_BIT 15
#define MSR_EE_BIT  16
#define MSR_PR_BIT  17
#define MSR_FP_BIT  18
#define MSR_ME_BIT  19
#define MSR_FE0_BIT 20
#define MSR_SE_BIT  21
#define MSR_BE_BIT  22
#define MSR_FE1_BIT 23
#define MSR_IP_BIT  25
#define MSR_IR_BIT  26
#define MSR_DR_BIT  27
#define MSR_PM_BIT  29
#define MSR_RI_BIT  30
#define MSR_LE_BIT  31

#ifdef __cplusplus
}
#endif
#endif
