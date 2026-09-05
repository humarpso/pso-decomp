#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TWindowActionPalette__sub_80243B6C(void *, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
void render__20TWindowActionPaletteFv(s32 arg0);
}

extern "C" {

void render__20TWindowActionPaletteFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubComCard__sub_80244C0C((void *)(arg0), (void *) (arg0 + 0x70));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    TWindowActionPalette__sub_80243B6C((void *) (arg0), (int) (temp_r3));
}

}
