#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012BAA4(void *arg0);
void TObjPlayer__sub_8012BB1C(s32 arg0);
void TObjPlayer__sub_8012BB84(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_800112A4(s32, s16);
M2C_UNK TObjPlayer__sub_80101048();
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 TObjPlayer__sub_8011E384(s32);
M2C_UNK TObjPlayer__sub_8011F5E0(s32);
s32 TObjPlayer__sub_8011F63C();
s32 TObjPlayer__sub_80121200();
M2C_UNK TObjPlayer__sub_8012B9B4(s32);
s32 TObjPlayer__sub_802034EC();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjectV8047c128_subtract_hp(s32, s16);
s16 obj_getS16_32E(s32);

void TObjPlayer__sub_8012BAA4(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;

    if (TObjPlayer__sub_802034EC() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), temp_r0);
            TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) (temp_r0 / 2));
        }
    }
}

extern s32 tl_05;

void TObjPlayer__sub_8012BB1C(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
    if (TObjPlayer__sub_8011E384(arg0) != 0) {
        TObjPlayer__sub_8012B9B4(arg0);
        return;
    }
    TObjPlayer__sub_8011F5E0(arg0);
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void TObjPlayer__sub_8012BB84(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 1:
        TObjPlayer__sub_803D9624(0, lbl_805DAEC8, lbl_805DAECC * M2C_FIELD(arg0, f32 *, 0x274), lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        TObjPlayer__sub_80101048();
        return;
    }
}

}
