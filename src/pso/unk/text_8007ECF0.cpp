#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 fn_8007F3F8(void *, f32);
s32 fn_8007F4B8(void *, s32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D9298;
extern const f32 lbl_805D929C;
extern const f32 lbl_805D92A0;
extern const f32 lbl_805D92A4;
void fn_8007ECF0(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void fn_8007ECF0(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r3;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((f32) arg1 / (f32) arg2);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    if (temp_f1 < lbl_805D9298) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D9298;
    } else if (temp_f1 > lbl_805D929C) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D929C;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && (fn_8007F4B8(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x1C)) != 0)) {
        temp_r3 = fn_8007F3F8(arg0, M2C_FIELD(arg0, f32 *, 0x1C));
        if (temp_r3 >= 0) {
            var_r3 = temp_r3 + (s32) ((lbl_805D92A0 * ((f32) temp_r3 / lbl_805D92A4)) + lbl_805D92A0);
            if (var_r3 > 0x464F) {
                var_r3 = 0x464F;
            }
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
            switch (temp_r0) {
            case 0:
                break;
            case -1:
                if (var_r3 >= 0x12C) {
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                }
                break;
            case 1:
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
                if (temp_r0_2 > var_r3) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                } else if ((s32) (var_r3 - temp_r0_2) >= 0x4B) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = var_r3;
                }
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
                break;
            }
        }
    }
    if (lbl_805D929C == M2C_FIELD(arg0, f32 *, 0x1C)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

}
