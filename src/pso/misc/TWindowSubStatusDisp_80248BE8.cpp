#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80248CF4_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
u8 * fn_80249004(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *TWindowSubStatusDisp__sub_80248BE8(s32 arg0, s32 arg1, s32 arg2);
s32 get_status_flag__6TLobbyFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 fn_80244994(void *);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 sync_level_field__20TWindowSubStatusDispFPv(void *);
s32 get_flag__20TWindowSubStatusDispFPv(void *);
s32 is_player_input_active(int);
s32 TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 set_flag4__20TWindowSubStatusDispFPv(void *);
s32 move_cursor_next__20TWindowSubStatusDispFPv(void *);
s32 move_cursor__20TWindowSubStatusDispFPv(void *);
s32 TWindowSubStatusDisp__sub_80267C94(void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80248CF4_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DCBA8;
void TWindowSubStatusDisp__sub_80248CF4(u8 *arg0);
}

extern "C" {

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1);
void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b);
void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

extern s32 lbl_805D53A0;

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

void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b) {
    TWindowSubStatusDisp__sub_80248BE8((s32)(a), (s32)(b), lbl_805D53A0);
}

void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

extern M2C_UNK lbl_804CE7E8[];

typedef char RecoveredGlobal_80248CF4_lbl_8050E208_size[sizeof(RecoveredGlobal_80248CF4_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubStatusDisp__sub_80248CF4(u8 *arg0) {
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
            sync_level_field__20TWindowSubStatusDispFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r29_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            set_flag4__20TWindowSubStatusDispFPv((void *) (arg0));
        }
    }
    TWindowSubStatusDisp__sub_80267C94((void *) (arg0));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCBA8) {
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
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
}

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7E8;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
