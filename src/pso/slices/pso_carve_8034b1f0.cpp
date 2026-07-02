#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B330();
s32 fn_8010EEDC(s32);
M2C_UNK fn_8024422C(u32, f32, f32);
M2C_UNK fn_80244D2C(u32, f32);
M2C_UNK fn_80265500(u32);
M2C_UNK fn_80265DEC(u32, f32, f32);
M2C_UNK TObjCityMainWarp__sub_80266354(u32, s32, M2C_UNK, s32);
u32 fn_802664A8(M2C_UNK, s32, s32);
M2C_UNK fn_8026CBB8(M2C_UNK);
s32 fn_8034BE30(s32);
extern M2C_UNK lbl_804F00A8[];
extern const f32 lbl_805DFD98;
extern const f32 lbl_805DFD9C;
extern const f32 lbl_805DFDA0;
extern const f32 lbl_805DFDA4;

void fn_8034B1F0(void *arg0) {
    s32 temp_r0;
    u16 temp_r30;
    s32 var_r29;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r30 = fn_8034BE30(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u32 *, 0x2C) = fn_802664A8(fn_8026CBB8(0x42), 8, temp_r30);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            var_r29 = 0;
            do {
                TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_8010EEDC(lbl_804F00A8[var_r29]), 6, var_r29);
                var_r29 += 1;
            } while (var_r29 < 8);
            fn_80265DEC(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFD98, lbl_805DFD9C);
            fn_80265500(M2C_FIELD(arg0, u32 *, 0x2C));
            fn_80244D2C(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA0);
            if (TCameraCtrl__sub_8006B330() > 2) {
                fn_8024422C(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA4, lbl_805DFDA4);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
    }
}

}
