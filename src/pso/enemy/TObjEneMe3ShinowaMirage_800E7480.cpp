#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

s32 TObjEneMe3ShinowaMirage__sub_800E7480(void *arg0);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

extern const f32 lbl_805DA5E4;

s32 TObjEneMe3ShinowaMirage__sub_800E7480(void *arg0) {
    f32 f31;

    if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805DA5E4) {
        return 0;
    }
    f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    f31 += M2C_FIELD(arg0, f32 *, 0x3A0) * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    return (s32)((u32)__cntlzw(f31 < fn_803D64DC(0x1E00)) >> 5);
}

}
