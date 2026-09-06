#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowSubAreaMapDisp__sub_80246948();
void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0);
void update_scaled_position__15TWindowMainMenuFi(s32 arg0);
extern f32 lbl_805DE158;
extern f32 lbl_805DE1A8;
void TWindowMainMenu__sub_802AE380(void *arg0);
void TWindowMainMenu__sub_802AD538(void *, void *);
void TWindowMainMenu__sub_802ADED4(s32 arg0, u8 *arg1);
}

extern "C" {

void TWindowMainMenu__sub_802AE400(void *arg0);
void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0);
void update_scaled_position__15TWindowMainMenuFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 count_active_items__15TWindowMainMenuFi();
s32 is_not_split_screen__15TWindowMainMenuFv();

extern f32 lbl_805DE15C;
extern f32 lbl_805DE160;
extern f32 lbl_805DE164;

void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0) {
    if (is_not_split_screen__15TWindowMainMenuFv() != 0) {
        farg0 += lbl_805DE15C;
    } else {
        farg0 += lbl_805DE160;
    }
    farg0 += lbl_805DE164;
    if (M2C_FIELD(arg0, f32 *, 0x3C) != farg0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 8;
    }
}

extern f32 lbl_805DE150;

void update_scaled_position__15TWindowMainMenuFi(s32 arg0) {
    set_target_y__15TWindowMainMenuFPvf((void *)((void *)(arg0)), lbl_805DE150 * (f32) count_active_items__15TWindowMainMenuFi());
}

void TWindowMainMenu__sub_802ADED4(s32 arg0, u8 *arg1) {
    s32 var_r31;
    u8 *var_r30;
    var_r30 = (u8 *)(arg0 + 0x10C);
    var_r31 = 0;
    do {
        TWindowMainMenu__sub_802AD538(var_r30, arg1);
        var_r31 += 1;
        var_r30 -= 0x18;
    } while (var_r31 < 8);
}

void TWindowMainMenu__sub_802AE380(void *arg0) {
    s16 temp_r4;
    if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
        set_target_y__15TWindowMainMenuFPvf(arg0, lbl_805DE158);
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x22);
        M2C_FIELD(arg0, u32 *, 0x50) = (u32) (lbl_805DE1A8 - (f32) temp_r4);
        return;
    }
    update_scaled_position__15TWindowMainMenuFi((s32)(arg0));
}

void TWindowMainMenu__sub_802AE400(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
}

}
