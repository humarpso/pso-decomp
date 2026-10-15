#include "types.h"

struct RecoveredGlobal_8027D888_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Ent_8027D6A0 { u8 pad0[0x20]; u8 f20[0x30]; };

struct Win_8027D6A0 { u8 pad0[0x61]; s8 f61; };

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 TWindowSubQuestBoardSelect__sub_8027D444(void *, int);
s32 forward_render__20TWindowSubStatusDispFPv(int, int);
void render__26TWindowSubQuestBoardSelectFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 is_open__20TWindowSubQuestBoardFPv(void *);
s32 select_next__26TWindowSubQuestBoardSelectFPv(void *);
s32 handle_cancel__26TWindowSubQuestBoardSelectFPv(void *);
s32 handle_decide__26TWindowSubQuestBoardSelectFPv(void *);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_8027D888_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD6B4;
void run_task__26TWindowSubQuestBoardSelectFv(u8 *arg0);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, s32, s32, s32);
void play_sound_effect(s32, s32, s32, s32);
void fn_8027D230(void *);
s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(void *, u8);
s32 is_shortcut_active__18TWindowSubShortCutFPv();
extern RecoveredGlobal_8027D888_lbl_8050E208 controller_input_state;
s32 handle_page_input__26TWindowSubQuestBoardSelectFPv(void *arg0);
}

extern "C" {

#define TBL_8027D6A0 ((Ent_8027D6A0 *)&controller_input_state)
s32 handle_page_input__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    Win_8027D6A0 *self = (Win_8027D6A0 *)arg0;
    void *p;
    s8 d;
    if (is_shortcut_active__18TWindowSubShortCutFPv() == 0 &&
        (apply_choice__20TWindowChoiceSettingFiiii(p = TBL_8027D6A0[0].f20, 0xC0, 6, 1) != 0 ||
        apply_choice__20TWindowChoiceSettingFiiii(TBL_8027D6A0[4].f20, 0xC0, 6, 1) != 0)) {
        play_sound_effect(0x54100, 0, 0, 0);
        d = 0;
        if (apply_choice__20TWindowChoiceSettingFiiii(p, 0x80, 6, 1) != 0 ||
            apply_choice__20TWindowChoiceSettingFiiii(TBL_8027D6A0[4].f20, 0x80, 6, 1) != 0) {
            d = 1;
        }
        if (apply_choice__20TWindowChoiceSettingFiiii(p, 0x40, 6, 1) != 0 ||
            apply_choice__20TWindowChoiceSettingFiiii(TBL_8027D6A0[4].f20, 0x40, 6, 1) != 0) {
            d--;
        }
        if (d != 0) {
            do {
                self->f61 += d;
                if (self->f61 < 0) {
                    self->f61 += 6;
                }
                if (self->f61 >= 6) {
                    self->f61 -= 6;
                }
            } while (get_slot_flag__26TWindowSubQuestBoardSelectFic(self, self->f61) == 0);
            fn_8027D230(self);
        }
    }
}

void render__26TWindowSubQuestBoardSelectFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFPv((int) (*(s32 *)((s8 *)arg0 + 0x64)), (int) (temp_r3));
    TWindowSubQuestBoardSelect__sub_8027D444((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}
typedef char RecoveredGlobal_8027D888_lbl_8050E208_size[sizeof(RecoveredGlobal_8027D888_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__26TWindowSubQuestBoardSelectFv(u8 *arg0) {
    u8 *temp_r31;
    if (is_open__20TWindowSubQuestBoardFPv((void *) (arg0)) == 0) {
        select_next__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        handle_page_input__26TWindowSubQuestBoardSelectFPv((void *)((void *) (arg0)));
        temp_r31 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            handle_decide__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    if ((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DD6B4) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x186A0;
        update_subwindow__20TWindowSubStatusDispFPv((int) (*(s32 *)((s8 *)arg0 + 0x64)));
    }
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

}
