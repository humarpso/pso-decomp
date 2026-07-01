#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 obj_getS16_32E(s32);
s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK fn_80126414(s32, u32, s32, M2C_UNK, f32);
M2C_UNK fn_80127F40(s32, u32, s32, M2C_UNK, f32);
M2C_UNK fn_8032697C(s32, u32, s32, M2C_UNK, f32);
s32 TItemProArmor__sub_80364300(M2C_UNK);
extern const f32 lbl_805DF658;

void fn_803267A8(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = TItemProArmor__sub_80364300(0x30);
        if (temp_r3 != 0) {
            fn_80126414(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_2 = TItemProArmor__sub_80364300(0x30);
        if (temp_r3_2 != 0) {
            fn_80127F40(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_3 = TItemProArmor__sub_80364300(0x30);
        if (temp_r3_3 != 0) {
            fn_8032697C(temp_r3_3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
    }
}

}
