#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_80265DEC(void *arg0, f32 farg0, f32 farg1);
M2C_UNK TWindowSubComCard__sub_802448C0(void *);
M2C_UNK TWindowSubComCard__sub_80265484(void *);
M2C_UNK TWindowSubComCard__sub_8026556C(void *);
M2C_UNK TWindowSubComCard__sub_80265E60();

extern const f32 lbl_805DD154;

void TWindowSubComCard__sub_80265DEC(void *arg0, f32 farg0, f32 farg1) {
    TWindowSubComCard__sub_80265E60();
    if (M2C_FIELD(arg0, f32 *, 0x3C) > farg1) {
        TWindowSubComCard__sub_8026556C(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (farg1 - lbl_805DD154);
    TWindowSubComCard__sub_802448C0(arg0);
    TWindowSubComCard__sub_80265484(arg0);
}

}
