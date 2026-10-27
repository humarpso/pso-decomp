#ifndef PSO_MISC_TEFFSTARLIGHT2D_BASE_H
#define PSO_MISC_TEFFSTARLIGHT2D_BASE_H

#include "types.h"

struct TEffStarLight2D_Base
{
};

extern "C" {
void *TEffStarLight2D_Base__create(void *arg0, s32 _w1);
u8 *TEffStarLight2D_Base__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1);
int copy_position__15TEffStarLight2DFPv(void *p);
}

// --- C functions defined in TEffStarLight2D_Base.cpp ---
extern "C" {
void *TEffStarLight2D_Base__create(void *arg0, s32 _w1);
u8 *TEffStarLight2D_Base__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1);
int copy_position__15TEffStarLight2DFPv(void *p);
}
// --- end of C functions

#endif
