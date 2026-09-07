#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80283F38
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80283A70_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80284074_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubSymbolChatFaceType__sub_80283FA8(void *);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 fn_802839A4(void *);
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
extern const f32 lbl_805DD778;
extern const f32 lbl_805DD77C;
extern const f32 lbl_805DD780;
void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80283A70_lbl_8050E208 lbl_8050E208;
void TWindowSubSymbolChatFaceType__sub_80283A70(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 is_open__20TWindowSubSymbolChatFPv(void *);
s32 close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(void *);
s32 confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *);
void TWindowSubSymbolChatFaceType__sub_80283A70(u8 *arg0);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80283A70_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD784;
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
}

extern "C" {

typedef struct Stack_80283F38 Stack_80283F38;

typedef char RecoveredGlobal_80283A70_lbl_8050E208_size[sizeof(RecoveredGlobal_80283A70_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubSymbolChatFaceType__sub_80283A70(u8 *arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)&lbl_8050E208.value + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        TBoss3Volopt__sub_8022675C(0x54100, 0U, 0, 0);
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x62) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x62) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x61) < 0) {
            M2C_FIELD(arg0, u8 *, 0x61) = 0U;
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x61) >= 2) {
            M2C_FIELD(arg0, u8 *, 0x61) = 1U;
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x62) < 0) {
            M2C_FIELD(arg0, u8 *, 0x62) = 0U;
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x62) >= 2) {
            M2C_FIELD(arg0, u8 *, 0x62) = 1U;
        }
    }
}

void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1) {
  int new_var;
  u8 *temp_r3;
  Stack_80283F38 stack;
  new_var = fn_802839A4(arg0);
  temp_r3 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, new_var);
  stack.sp8 = (*((f32 *) (((s8 *) temp_r3) + 8))) - lbl_805DD778;
  stack.spC = (*((f32 *) (((s8 *) temp_r3) + 0xC))) - lbl_805DD778;
  TWindowSubSymbolChatFaceType__sub_80283C84(arg1, &stack.sp8, lbl_805DD77C, lbl_805DD780);
}

void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = draw_default_entry__9TWindowDDFi();
    TWindowSubSymbolChatFaceType__sub_80283FA8((void *) (arg0));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r31));
    TWindowSubSymbolChatFaceType__sub_80283F38((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r31)));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x68)), (int) (temp_r31));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r31));
}
typedef char RecoveredGlobal_80284074_lbl_8050E208_size[sizeof(RecoveredGlobal_80284074_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    u8 *temp_r31;
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (is_open__20TWindowSubSymbolChatFPv((void *) (arg0)) == 0) {
        TWindowSubSymbolChatFaceType__sub_80283A70((u8 *)((void *) (arg0)));
        temp_r31 = (u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&lbl_8050E208).value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (4)) != 0)) {
            confirm_selection__28TWindowSubSymbolChatFaceTypeFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (2)) != 0)) {
            close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv((void *) (arg0));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD784) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x68)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
}

}
