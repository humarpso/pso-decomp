#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdTitleGC.h"

TAdTitleGC::~TAdTitleGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A0D30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TAdTitleGCFv(u8 *arg0);
M2C_UNK TAdTitleGC__sub_802A0C24(void *, void *, s32);
M2C_UNK TAdTitleGC__sub_802A0C84(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, s32);

void run_task__10TAdTitleGCFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_r3 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) (M2C_FIELD(arg0, s32 *, 0x12C) + 0xC);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x12C) > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x12C) = 0xFF;
    }
    TAdTitleGC__sub_802A0C84(arg0);
    TAdTitleGC__sub_802A0C24(arg0, arg0 + 0x120, TAdSinglePlyChrSelectGC__sub_80132F2C(0x13, M2C_FIELD(arg0, s32 *, 0x1C)));
}

}
#endif
#endif
