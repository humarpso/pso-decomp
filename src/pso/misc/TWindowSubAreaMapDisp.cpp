#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TWindowSubAreaMapDispFv(void *arg0);
s32 TWindowDD__sub_80244CF4();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK fn_80271848(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80271A6C(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80288030(s32, s32);

void render__21TWindowSubAreaMapDispFv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowDD__sub_80244CF4();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80288030(M2C_FIELD(arg0, s32 *, 0x70), temp_r3);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        TWindowSubStatusDisp__sub_80271A6C(arg0, temp_r3);
        fn_80271848(arg0, temp_r3);
    }
}

}
