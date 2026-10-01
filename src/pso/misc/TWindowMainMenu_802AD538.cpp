#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AE59C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Rect_802AE2B0 { f32 x, y, w, h; u8 pad[0x34 - 0x10]; u32 color; };

extern "C" {
s32 TWindowSubAreaMapDisp__sub_80246948();
void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0);
void update_scaled_position__15TWindowMainMenuFi(s32 arg0);
extern f32 lbl_805DE158;
extern f32 lbl_805DE1A8;
void TWindowMainMenu__sub_802AE380(void *arg0);
void TWindowMainMenu__sub_802AD538(void *, void *);
void TWindowMainMenu__sub_802ADED4(s32 arg0, u8 *arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TWindowMainMenu__sub_802AE44C(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 TWindowSubComCard__sub_80244AD8();
s32 is_player_input_active(int);
s32 is_flag_set__15TWindowMainMenuFPv(void *);
s32 get_menu_flag__15TWindowMainMenuFPv(void *);
void TWindowMainMenu__sub_802AE400(void *arg0);
void TWindowMainMenu__sub_802AE44C(u8 *arg0);
M2C_UNK TWindowMainMenu__sub_802AE4DC(void *, int);
extern RecoveredGlobal_802AE59C_lbl_8050E208 lbl_8050E208;
void TWindowMainMenu__sub_802AE59C(u8 *arg0);
f32 TWindowSubComCard__sub_80244784(void *);
M2C_UNK set_bounds__19TWindowKeyBoardSoftFPvffff(void *, f32, f32, f32, f32);
Rect_802AE2B0 *open_singleton__19TWindowKeyBoardSoftFiiii(void *, void *, s32, f32, s32);
s32 fn_8026CB68();
s32 is_not_split_screen__15TWindowMainMenuFv();
extern const f32 lbl_805DE148;
extern f32 lbl_805DE15C;
extern f32 lbl_805DE164;
extern const f32 lbl_805DE1A4;
Rect_802AE2B0 *TWindowMainMenu__sub_802AE2B0(u8 *arg0);
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

Rect_802AE2B0 *TWindowMainMenu__sub_802AE2B0(u8 *arg0) {
    f32 v;
    Rect_802AE2B0 *r;
    r = open_singleton__19TWindowKeyBoardSoftFiiii(arg0 + 0x40, arg0 + 0x48, fn_8026CB68(), M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x2C));
    if (((s32 (*)(void *))is_not_split_screen__15TWindowMainMenuFv)(arg0) != 0) {
        v = lbl_805DE15C;
    } else {
        v = lbl_805DE164;
    }
    set_bounds__19TWindowKeyBoardSoftFPvffff(r, lbl_805DE1A4 + r->x, r->y + v, (r->x + r->w) - lbl_805DE1A4, (r->y + r->h) - lbl_805DE164);
    r->color = ((s32)(lbl_805DE148 * TWindowSubComCard__sub_80244784(arg0)) << 24) | 0xFF0000 | 0xFFFF;
    return r;
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
void TWindowMainMenu__sub_802AE44C(u8 *arg0) {
  char new_var;
  u8 *new_var2;
  int new_var3;
  u8 *temp_r3;
  new_var2 = arg0;
  new_var2 = new_var2 + (((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))) * 4);
  temp_r3 = (unsigned char *) (*((void **) (((s8 *) new_var2) + 0x124)));
  if (temp_r3 != 0)
  {
    new_var = (int) 0;
    if ((*((u8 *) (((s8 *) temp_r3) + 0x13))) & 2)
    {
      TBoss3Volopt__sub_8022675C((M2C_UNK)((int) 0x53F06), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
      return;
    }
    new_var3 = (int) 0x52D01;
    TBoss3Volopt__sub_8022675C((M2C_UNK)(new_var3), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0), (M2C_UNK)(new_var));
    *((u8 *) (((s8 *) arg0) + 0x60)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x60))) | 1);
  }
}
typedef char RecoveredGlobal_802AE59C_lbl_8050E208_size[sizeof(RecoveredGlobal_802AE59C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowMainMenu__sub_802AE59C(u8 *arg0) {
    u8 *temp_r31;
    if ((TWindowSubComCard__sub_80244AD8() != 0) && (get_menu_flag__15TWindowMainMenuFPv((void *) (arg0)) == 0) && (is_flag_set__15TWindowMainMenuFPv((void *) (arg0)) == 0) && !(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
        temp_r31 = (u8 *)&lbl_8050E208.value + (is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20))) * 0x50) + 0x20;
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            TWindowMainMenu__sub_802AE4DC((void *) (arg0), (int) (-1));
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            TWindowMainMenu__sub_802AE4DC((void *) (arg0), (int) (1));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            TWindowMainMenu__sub_802AE44C((u8 *)((void *) (arg0)));
        }
        if ((get_menu_flag__15TWindowMainMenuFPv((void *) (arg0)) == 0) && ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0))) {
            TWindowMainMenu__sub_802AE400((void *) (arg0));
        }
    }
}

}
