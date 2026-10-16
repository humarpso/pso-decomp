#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TUnk_804CE7E8.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"

struct RecoveredGlobal_80248CF4_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
u8 * fn_80249004(void *, s32, s32);
u8 *__nw__7TObjectFUl(s32);
s32 TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *TWindowSubStatusDisp__sub_80248BE8(s32 arg0, s32 arg1, s32 arg2);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFllll(void *, int, int, int);
s32 is_player_input_active(int);
extern RecoveredGlobal_80248CF4_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DCBA8;
}

extern "C" {

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1);
s32 draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
s32 draw_visible_window_entries(void *, void *, s32);
s32 draw_window_scrollbar(s32, s32, void *);
void __dl__7TObjectFPv(void *);
s32 forward_render__20TWindowSubStatusDispFv(s32, s32);

extern s32 local_client_id;

u8 *TWindowSubStatusDisp__sub_80248BE8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TShopJudgmentItemWindow__sub_80267F9C((void *) (arg1), (int) (0x5));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x8C));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(fn_80249004(temp_r3, arg0, arg2));
    }
    return var_r0;
}

void TWindowSubStatusDisp::refresh_with_default_list(s32 a, s32 b) {
    TWindowSubStatusDisp__sub_80248BE8((s32)(a), (s32)(b), local_client_id);
}

void TWindowSubStatusDisp::render_status_and_children() {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(((u8 *)this), temp_r3);
    draw_visible_window_entries(((u8 *)this), ((u8 *)this) + 0x24, temp_r3);
    ((TUnk_804D0618 *)((u8 *)this))->draw_selected_list_entry(temp_r3);
    if ((u32) *(u32 *)((s8 *)((u8 *)this) + 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFv(*(u32 *)((s8 *)((u8 *)this) + 0x80), temp_r3);
    }
    if ((u32) *(u32 *)((s8 *)((u8 *)this) + 0x84) != 0U) {
        draw_window_scrollbar(*(u32 *)((s8 *)((u8 *)this) + 0x84), temp_r3, ((u8 *)this) + 0x68);
    }
}

extern s32 status_disp_window_dispatch_table[];

typedef char RecoveredGlobal_80248CF4_lbl_8050E208_size[sizeof(RecoveredGlobal_80248CF4_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubStatusDisp::handle_input() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r29;
    u8 *temp_r29_2;
    u8 *temp_r29_3;
    temp_r31 = is_player_input_active((int) ((s32) this->m_20));
    if ((((TUnk_804D0618 *)arg0)->get_flag() == 0) && (((TUnk_804D0618 *)arg0)->get_status_flag() == 0) && (((TUnk_804CE018 *)arg0)->sub_80244994() != 0)) {
        if (*(u16 *)((s8 *)arg0 + 0x70) & 0x10) {
            temp_r29 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFllll((void *) (temp_r29), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0618 *)arg0)->move_cursor();
            }
            if ((apply_choice__20TWindowChoiceSettingFllll((void *) (temp_r29), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0618 *)arg0)->move_cursor_next();
            }
        } else {
            temp_r29_2 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll((int) (temp_r29_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0618 *)arg0)->move_cursor();
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFllll((int) (temp_r29_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFllll((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((TUnk_804D0618 *)arg0)->move_cursor_next();
            }
        }
        temp_r29_3 = (u8 *)&controller_input_state.value + (temp_r31 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            ((TUnk_804CE7E8 *)arg0)->sync_level_field();
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            ((TUnk_804D0618 *)arg0)->set_flag4();
        }
    }
    ((TUnk_804D0618 *)arg0)->center_list_selection();
    if ((f32) *(s32 *)&this->m_5c >= lbl_805DCBA8) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x80);
        if (temp_r3 != 0U) {
            ((TWindowSubStatusDisp *)temp_r3)->update_subwindow();
        }
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x84);
        if (temp_r3_2 != 0U) {
            ((TWindowSubStatusDisp *)temp_r3_2)->increment_counter();
        }
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_fade();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *) (arg0 + 0x24));
}

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = status_disp_window_dispatch_table;
        ((TWindowSubStatusDisp *)arg0)->destroy_item_list_resources(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
