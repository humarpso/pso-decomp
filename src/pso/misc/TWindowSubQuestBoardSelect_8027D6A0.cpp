#include "types.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubQuestBoard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_8027D888_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Ent_8027D6A0 { u8 pad0[0x20]; u8 f20[0x30]; };

struct Win_8027D6A0 { u8 pad0[0x61]; s8 f61; };

extern "C" {
s32 draw_default_entry__9TWindowDDFl();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 TWindowSubQuestBoardSelect__sub_8027D444(void *, int);
s32 forward_render__20TWindowSubStatusDispFv(int, int);
void render__26TWindowSubQuestBoardSelectFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 update_window_entry_list(void *, void *);
extern RecoveredGlobal_8027D888_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD6B4;
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, s32, s32, s32);
void play_sound_effect(s32, s32, s32, s32);
void fn_8027D230(void *);
s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(void *, u8);
s32 is_shortcut_active__18TWindowSubShortCutFv();
extern RecoveredGlobal_8027D888_lbl_8050E208 controller_input_state;
}

extern "C" {

#define TBL_8027D6A0 ((Ent_8027D6A0 *)&controller_input_state)
s32 TWindowSubQuestBoardSelect::handle_page_input() {
    Win_8027D6A0 *self = (Win_8027D6A0 *)this;
    void *p;
    s8 d;
    if (is_shortcut_active__18TWindowSubShortCutFv() == 0 &&
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
    temp_r3 = draw_default_entry__9TWindowDDFl();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFv((int) (*(s32 *)((s8 *)arg0 + 0x64)), (int) (temp_r3));
    TWindowSubQuestBoardSelect__sub_8027D444((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}
typedef char RecoveredGlobal_8027D888_lbl_8050E208_size[sizeof(RecoveredGlobal_8027D888_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubQuestBoardSelect::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    if (((TWindowSubQuestBoard *)arg0)->is_open() == 0) {
        ((TWindowSubQuestBoardSelect *)arg0)->select_next();
        handle_page_input();
        temp_r31 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            ((TWindowSubQuestBoardSelect *)arg0)->handle_decide();
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            ((TWindowSubQuestBoardSelect *)arg0)->handle_cancel();
        }
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    if ((f32) *(s32 *)((s8 *)arg0 + 0x5C) >= lbl_805DD6B4) {
        *(s32 *)((s8 *)arg0 + 0x5C) = 0x186A0;
        ((TWindowSubStatusDisp *)(*(s32 *)((s8 *)arg0 + 0x64)))->update_subwindow();
    }
    ((TWindowSubComCard *)arg0)->update_fade();
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

}
