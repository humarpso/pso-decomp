#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TUnk_804D0658.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_802492C8_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
void render__20TWindowChoiceSettingFv(u8 *arg0);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 draw_window_scrollbar(s32, s32, void *);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);
void render__20TWindowChoiceSettingFv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFllll(void *, int, int, int);
s32 fn_80249078(void *);
extern RecoveredGlobal_802492C8_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DCBC0;
}

extern "C" {

void *TWindowChoiceSetting__ct(void *arg0);
void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void fn_80269004(void *);

extern s32 __vt__20TWindowChoiceSetting[];

void render__20TWindowChoiceSettingFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    ((TUnk_804D0658 *)arg0)->draw_setting(temp_r3);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFv(*(u32 *)((s8 *)arg0 + 0x78), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        draw_window_scrollbar(*(u32 *)((s8 *)arg0 + 0x7C), temp_r3, arg0 + 0x68);
    }
}

typedef char RecoveredGlobal_802492C8_lbl_8050E208_size[sizeof(RecoveredGlobal_802492C8_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowChoiceSetting::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    if ((((TUnk_804D0658 *)arg0)->is_selected() == 0) && (((TUnk_804D0658 *)arg0)->is_open() == 0)) {
        if (this->m_70 & 0x10) {
            temp_r30 = (u8 *)&controller_input_state.value + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFllll((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0658 *)arg0)->move_cursor_prev();
            }
            if ((apply_choice__20TWindowChoiceSettingFllll((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0658 *)arg0)->move_next_choice();
            }
        } else {
            temp_r30_2 = (u8 *)&controller_input_state.value + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll((int) (temp_r30_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0658 *)arg0)->move_cursor_prev();
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll((int) (temp_r30_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0658 *)arg0)->move_next_choice();
            }
        }
        temp_r30_3 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            ((TWindowChoiceSetting *)arg0)->draw();
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            ((TUnk_804D0658 *)arg0)->request_close();
        }
    }
    if ((f32) this->m_5c >= lbl_805DCBC0) {
        temp_r3 = this->m_78;
        if (temp_r3 != 0U) {
            ((TWindowSubStatusDisp *)temp_r3)->update_subwindow();
        }
        temp_r3_2 = *(u32 *)&this->unk_7C;
        if (temp_r3_2 != 0U) {
            ((TWindowSubStatusDisp *)temp_r3_2)->increment_counter();
        }
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    fn_80249078((void *) (arg0));
    ((TUnk_804CDFE8 *)arg0)->step_window_tween();
    ((TUnk_804D0658 *)arg0)->update_scroll_offset();
    ((TUnk_804D0658 *)arg0)->clamp_scroll();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *) (arg0 + 0x24));
}

void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TWindowChoiceSetting;
        ((TUnk_804D0658 *)arg0)->destroy_children(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__20TWindowChoiceSetting[];
extern void *lbl_805D38B8;

void *TWindowChoiceSetting__ct(void *arg0) {
    fn_80269004(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TWindowChoiceSetting;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D38B8;
    *(u16 *)((s8 *)arg0 + 0x80) = 0;
    return arg0;
}

}
