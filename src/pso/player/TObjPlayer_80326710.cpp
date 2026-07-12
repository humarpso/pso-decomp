#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80326710(void *arg0);
void TObjPlayer__sub_80326794(void* p);
void TObjPlayer__sub_803267A8(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
s32 TObjPlayer__sub_800112A4(s32, s16);
M2C_UNK TObjPlayer__sub_80126414(s32, u32, s32, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80127F40(s32, u32, s32, M2C_UNK, f32);
s32 TObjPlayer__sub_802034EC();
M2C_UNK TObjPlayer__sub_8032697C(s32, u32, s32, M2C_UNK, f32);
s32 TObjectV8047c128_subtract_hp(s32, s16);
s32 alloc__13TItemProArmorFi(M2C_UNK);
s16 obj_getS16_32E(s32);

void TObjPlayer__sub_80326710(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;

    if (TObjPlayer__sub_802034EC() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1FC) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1FC) = temp_r3;
        }
        if (temp_r0 > 0) {
            temp_r31 = temp_r0 / 2;
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
            TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 1);
}
void TObjPlayer__sub_80326794(void* p) { *(s16*)((char*)p + 0x1fc) = -1; *(s32*)((char*)p + 0x1f8) = 0; }

extern const f32 lbl_805DF658;

void TObjPlayer__sub_803267A8(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_80126414(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_2 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3_2 != 0) {
            TObjPlayer__sub_80127F40(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3_3 != 0) {
            TObjPlayer__sub_8032697C(temp_r3_3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x2328, lbl_805DF658);
        }
    }
}

}
