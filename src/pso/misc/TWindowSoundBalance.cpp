#include "types.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSoundBalance.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProShield.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_80270C98_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80270ACC_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct State_80270DCC { u8 pad[4]; s16 f4; s8 f6; };

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 is_active__19TWindowSoundBalanceFv();
s32 TWindowSoundBalance__sub_8027095C(void *);
extern RecoveredGlobal_80270C98_lbl_8050E208 controller_input_state;
s32 play_sound_effect(s32, s32, s32, s32);
State_80270DCC *get_global_state__23TAdSinglePlyChrSelectGCFv();
u32 calc_text_width();
u8 *get_array_entry__13TUnk_804CE018Fi(void *, s32);
s32 get_field_20__17TWindowSubComCardFv();
s32 refresh_status_display__9TWindowDDFv(u8 *);
extern s32 window_sound_balance_settings[];
extern s32 __vt__19TWindowSoundBalance[];
extern s32 TWindowSoundBalance__name;
extern const f32 lbl_805DD414;
extern const f32 lbl_805DD418;
s32 draw_visible_window_entries(s32, s32, void *);
void __dl__7TObjectFPv(void *);
s32 apply_balance__19TWindowSoundBalanceFPv(s32, void *, f32, f32);
void *draw_default_entry__9TWindowDDFl();

void TWindowSoundBalance::play_open_sound() {
    play_sound_effect(0x52D01, 0, 0, 0);
    this->m_60 = (u8) (this->m_60 | 1);
}

extern const f32 lbl_805DD40C;
extern const f32 lbl_805DD410;

typedef char RecoveredGlobal_80270ACC_lbl_8050E208_size[sizeof(RecoveredGlobal_80270ACC_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSoundBalance::handle_lr_input() {
    u8 *input;
    input = (u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&controller_input_state).value + 0x20;
    if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)input, 0x30, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&controller_input_state).value + 0x160)), 0x30, 6, 1) != 0)) {
        play_sound_effect(0x54100, (s32)(0U), 0, 0);
        if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)input, 0x10, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&controller_input_state).value + 0x160)), 0x10, 6, 1) != 0)) {
            this->m_61 = (this->m_61 - 1);
        }
        if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)input, 0x20, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&controller_input_state).value + 0x160)), 0x20, 6, 1) != 0)) {
            this->m_61 = (this->m_61 + 1);
        }
        if ((s8) this->m_61 < 0) {
            this->m_61 = 0U;
        }
        if ((s8) this->m_61 > 1) {
            this->m_61 = 1U;
        }
    }
}

void render__19TWindowSoundBalanceFv(s32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFl();
    ((TUnk_804CE018 *)arg0)->draw_window_frame(temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    temp_f2 = *(f32 *)((s8 *)temp_r3 + 0x10);
    *(f32 *)((s8 *)temp_r3 + 0x10) = (f32) (temp_f2 + lbl_805DD40C);
    temp_f1 = *(f32 *)((s8 *)temp_r3 + 0x18);
    *(f32 *)((s8 *)temp_r3 + 0x18) = (f32) (temp_f1 - lbl_805DD410);
    apply_balance__19TWindowSoundBalanceFPv(arg0, temp_r3, temp_f1, temp_f2);
}

typedef char RecoveredGlobal_80270C98_lbl_8050E208_size[sizeof(RecoveredGlobal_80270C98_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSoundBalance::run_task() {
    s32 arg0 = (s32)this;
    u8 *temp_r31;
    if (is_active__19TWindowSoundBalanceFv() == 0) {
        handle_lr_input();
        TWindowSoundBalance__sub_8027095C((void *)arg0);
        temp_r31 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int)temp_r31, 4) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), 4) != 0)) {
            play_open_sound();
        }
        if ((TWindowShortListCtrl__check_controller_button((int)temp_r31, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), 2) != 0)) {
            ((TWindowSoundBalance *)arg0)->handle_cancel();
        }
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_fade();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *)(arg0 + 0x24));
}

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSoundBalance;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TWindowSoundBalance__ct(u8 *arg0, s32 arg1) {
    u8 *e;
    State_80270DCC *st;
    ((TWindowDD *)arg0)->construct_base((u8 *)window_sound_balance_settings, (s16)4, (u8 *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSoundBalance;
    *(s32 *)((s8 *)arg0 + 0) = TWindowSoundBalance__name;
    ((TWindowSoundBalance *)arg0)->m_60 = 0;
    ((TWindowSoundBalance *)arg0)->m_61 = 0;
    ((TWindowSoundBalance *)arg0)->music_gain = 1;
    ((TWindowSoundBalance *)arg0)->sound_effect_gain = 1;
    e = get_array_entry__13TUnk_804CE018Fi(arg0, 0);
    get_field_20__17TWindowSubComCardFv();
    *(f32 *)((s8 *)e + 8) = lbl_805DD414 - lbl_805DD418 * calc_text_width();
    refresh_status_display__9TWindowDDFv(e);
    e = get_array_entry__13TUnk_804CE018Fi(arg0, 1);
    get_field_20__17TWindowSubComCardFv();
    *(f32 *)((s8 *)e + 8) = lbl_805DD414 - lbl_805DD418 * calc_text_width();
    refresh_status_display__9TWindowDDFv(e);
    st = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (st == 0) {
        ((TWindowSoundBalance *)arg0)->set_music_gain(0);
        ((TWindowSoundBalance *)arg0)->set_sound_effect_gain(0);
    } else {
        ((TWindowSoundBalance *)arg0)->set_music_gain(st->f4);
        ((TWindowSoundBalance *)arg0)->set_sound_effect_gain(st->f6);
    }
    return arg0;
}
#pragma pop

}
