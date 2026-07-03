#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma fp_contract on

extern "C" {

f32 fn_803D64C0(s32);
extern const f32 lbl_805DC534;
extern const f32 lbl_805DC59C;
extern const f32 lbl_805DC5A0;

void TRaderMapCore__sub_801FB2B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) (M2C_FIELD(arg0, s32 *, 0x198) + 0x888);
    M2C_FIELD(arg0, f32 *, 0x19C) = lbl_805DC59C + lbl_805DC5A0 * (lbl_805DC534 + fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x198)));
}

}
