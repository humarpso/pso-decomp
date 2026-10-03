#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80268048_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 get_status_flag__6TLobbyFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 TWindowSubStatusDisp__sub_80244238(void *);
s32 fn_80244994(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 get_flag__20TWindowSubStatusDispFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 set_flag4__20TWindowSubStatusDispFPv(void *);
s32 handle_open__20TWindowSubStatusDispFPv(void *);
s32 move_cursor_next__20TWindowSubStatusDispFPv(void *);
s32 move_cursor__20TWindowSubStatusDispFPv(void *);
s32 center_list_selection(void *);
s32 clamp_item_list_scroll(void *);
s32 TWindowSubStatusDisp__sub_80267D80(void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80268048_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD1D0;
void update_item_list_window(u8 *arg0);
}

extern "C" {

void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
M2C_UNK draw_visible_window_entries(void *, void *, s32);
M2C_UNK draw_window_scrollbar(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render_card_and_list__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        draw_window_scrollbar(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

extern M2C_UNK lbl_804D0618[];

typedef char RecoveredGlobal_80268048_lbl_8050E208_size[sizeof(RecoveredGlobal_80268048_lbl_8050E208) == 0x1B0 ? 1 : -1];
void update_item_list_window(u8 *arg0) {
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r29;
    u8 *temp_r29_2;
    u8 *temp_r29_3;
    temp_r31 = is_player_input_active((int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    if ((get_flag__20TWindowSubStatusDispFPv((void *) (arg0)) == 0) && (get_status_flag__6TLobbyFPv((void *) (arg0)) == 0) && (fn_80244994((void *) (arg0)) != 0)) {
        if (M2C_FIELD(arg0, u16 *, 0x70) & 0x10) {
            temp_r29 = (u8 *)&lbl_8050E208.value + (temp_r31 * 0x50) + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                move_cursor__20TWindowSubStatusDispFPv((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r29), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                move_cursor_next__20TWindowSubStatusDispFPv((void *) (arg0));
            }
        } else {
            temp_r29_2 = (u8 *)&lbl_8050E208.value + (temp_r31 * 0x50) + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                move_cursor__20TWindowSubStatusDispFPv((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r29_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                move_cursor_next__20TWindowSubStatusDispFPv((void *) (arg0));
            }
        }
        temp_r29_3 = (u8 *)&lbl_8050E208.value + (temp_r31 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            handle_open__20TWindowSubStatusDispFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            set_flag4__20TWindowSubStatusDispFPv((void *) (arg0));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD1D0) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x80);
        if (temp_r3 != 0U) {
            update_subwindow__20TWindowSubStatusDispFPv((int) (temp_r3));
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x84);
        if (temp_r3_2 != 0U) {
            increment_counter__20TWindowSubStatusDispFPv((int) (temp_r3_2));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80267D80((void *) (arg0));
    TWindowSubStatusDisp__sub_80244238((void *) (arg0));
    center_list_selection((void *) (arg0));
    clamp_item_list_scroll((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0618;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x80), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
