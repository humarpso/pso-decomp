#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0);
void advance_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0A34(void* p);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int is_ready__14TBoss6PlotFalzFv(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) == 0x69) {
        TBoss3Volopt__sub_8022675C(0x40030F00, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 0x12C) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 1);
    }
}
void advance_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }
void TBoss6PlotFalz__sub_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
