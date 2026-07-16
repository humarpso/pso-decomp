#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_8014556C(void *, s32, s32, f32, f32, f32);
extern const f32 lbl_805DB1A8;

void TAdSinglePlyChrSelectGC__sub_80145778(void *arg0, f32 arg1, f32 arg2) {
    TWindowSubStatusDisp__sub_8014556C(arg0, -1, 0, arg1, arg2, lbl_805DB1A8);
}

}
