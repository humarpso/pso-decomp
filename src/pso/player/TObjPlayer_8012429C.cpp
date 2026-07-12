#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void cast_megid__10TObjPlayerFPv(void *arg0);
void update_blink__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_80099EF8(void *);
s32 TObjPlayer__sub_8011E384();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK TObjPlayer__sub_8011F5E0(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
s32 TObjPlayer__sub_80121CA8(void *);
M2C_UNK TObjPlayer__sub_801241D4(void *, s32, s32, s32);
s32 TObjPlayer__sub_802034B0();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create_ex__9TTecMegidFiiii(void *, M2C_UNK *, s32, s32);

void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    if (arg0 != 0) {
        temp_r3 = (void *)__nw__7TObjectFUl(0x2C);
        if (temp_r3 != (void *)0U) {
            TObjPlayer__sub_801241D4(temp_r3, arg0, arg1, arg2);
        }
    }
}

void cast_megid__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (TObjPlayer__sub_8011E384() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__9TTecMegidFiiii(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), TObjPlayer__sub_80121CA8(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        TObjPlayer__sub_8011F5E0(arg0);
    }
}

extern s32 tl_05;

void update_blink__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
    temp_r3 = TObjPlayer__sub_800196EC();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x204) != temp_r3) && ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U)) {
        M2C_FIELD(arg0, s32 *, 0x204) = temp_r3;
        if (TObjPlayer__sub_802034B0() != 0) {
            create_icon__10TObjPlayerFiii((s32)(tl_05), (s32)(TObjPlayer__sub_80099EF8(arg0)), (s32)(5));
        }
    }
}

}
