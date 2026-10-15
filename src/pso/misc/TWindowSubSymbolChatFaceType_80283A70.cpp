#include "types.h"

struct Stack_80283F38
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80283A70_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80284074_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Win_80283FA8 { u8 pad[0x64]; s8 *f64; };

struct Ent_80283FA8 { u8 pad[0x2c]; s32 f2c; };

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 forward_render__20TWindowSubStatusDispFPv(int, int);
void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 fn_802839A4(void *);
void TWindowSubSymbolChatFaceType__sub_80283C84(void *, void *, f32, f32);
extern const f32 lbl_805DD778;
extern const f32 lbl_805DD77C;
extern const f32 lbl_805DD780;
void TWindowSubSymbolChatFaceType__sub_80283F38(u8 *arg0, u8 *arg1);
s32 play_sound_effect(s32, u32, s16, s32);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80283A70_lbl_8050E208 controller_input_state;
void handle_input__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 is_open__20TWindowSubSymbolChatFPv(void *);
s32 close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(void *);
s32 confirm_selection__28TWindowSubSymbolChatFaceTypeFPv(void *);
void handle_input__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80283A70_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD784;
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int);
void update_parts_entries__28TWindowSubSymbolChatFaceTypeFPv(Win_80283FA8 *arg0);
}

extern "C" {

typedef struct Stack_80283F38 Stack_80283F38;

typedef char RecoveredGlobal_80283A70_lbl_8050E208_size[sizeof(RecoveredGlobal_80283A70_lbl_8050E208) == 0x1B0 ? 1 : -1];
void handle_input__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)&controller_input_state.value + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        play_sound_effect(0x54100, 0U, 0, 0);
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x62) = (u8) (*(u8 *)((s8 *)arg0 + 0x62) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x62) = (u8) (*(u8 *)((s8 *)arg0 + 0x62) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            *(u8 *)((s8 *)arg0 + 0x61) = (u8) (*(u8 *)((s8 *)arg0 + 0x61) - 1);
        }
        if ((s8) *(u8 *)((s8 *)arg0 + 0x61) < 0) {
            *(u8 *)((s8 *)arg0 + 0x61) = 0U;
        }
        if ((s8) *(u8 *)((s8 *)arg0 + 0x61) >= 2) {
            *(u8 *)((s8 *)arg0 + 0x61) = 1U;
        }
        if ((s8) *(u8 *)((s8 *)arg0 + 0x62) < 0) {
            *(u8 *)((s8 *)arg0 + 0x62) = 0U;
        }
        if ((s8) *(u8 *)((s8 *)arg0 + 0x62) >= 2) {
            *(u8 *)((s8 *)arg0 + 0x62) = 1U;
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

void update_parts_entries__28TWindowSubSymbolChatFaceTypeFPv(Win_80283FA8 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_80283FA8 *e = (Ent_80283FA8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        e->f2c = get_parts_entry__28TWindowSubSymbolChatPartsSetFi(*arg0->f64);
    }
}

void render__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = draw_default_entry__9TWindowDDFi();
    update_parts_entries__28TWindowSubSymbolChatFaceTypeFPv((Win_80283FA8 *)((void *) (arg0)));
    draw_window_frame((void *) (arg0), (int) (temp_r31));
    TWindowSubSymbolChatFaceType__sub_80283F38((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r31)));
    forward_render__20TWindowSubStatusDispFPv((int) (*(s32 *)((s8 *)arg0 + 0x68)), (int) (temp_r31));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r31));
}
typedef char RecoveredGlobal_80284074_lbl_8050E208_size[sizeof(RecoveredGlobal_80284074_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__28TWindowSubSymbolChatFaceTypeFv(u8 *arg0) {
    u8 *temp_r31;
    if (!(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x01000000;
    }
    if (is_open__20TWindowSubSymbolChatFPv((void *) (arg0)) == 0) {
        handle_input__28TWindowSubSymbolChatFaceTypeFPv((u8 *)((void *) (arg0)));
        temp_r31 = (u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (4)) != 0)) {
            confirm_selection__28TWindowSubSymbolChatFaceTypeFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80284074_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (2)) != 0)) {
            close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv((void *) (arg0));
        }
    }
    if ((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DD784) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (*(s32 *)((s8 *)arg0 + 0x68)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

}
