#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80268A6C {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK clamp_list_scroll_offset(int, void *, void *);
extern const f32 lbl_805DD1D8;
extern const f32 lbl_805DD1DC;
extern const f32 lbl_805DD1E0;
void clamp_scroll__20TWindowChoiceSettingFPv(u8 *arg0);
}

extern "C" {

s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TWindowSubComCard__sub_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 is_open__17TWindowSubComCardFPv();
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
void clear_flag__19TWindowSubTradeMainFPv(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);

void request_close__20TWindowChoiceSettingFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (is_open__17TWindowSubComCardFPv() == 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}
void draw__20TWindowChoiceSettingFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (TWindowSubComCard__sub_8026906C() == 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x78), 2);
        }
    }
}
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void create_sub_window__20TWindowChoiceSettingFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            var_r0 = construct_type1_heading__20TWindowSubStatusDispFPvii(var_r0, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x78) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
    }
}
}
struct W_802689EC { u8 pad[0x4C]; f32 f4c; u32 f50; u8 pad54[0x6C - 0x54]; f32 f6c; u8 pad70[4]; s16 f74; u8 pad76[0x7C - 0x76]; u32 f7c; };
extern "C" {
extern const f32 lbl_805DD1E4;
extern const f32 lbl_805DD1E8;
extern const f32 lbl_805DD1EC;
extern const f32 lbl_805DD1F0;
#pragma push
#pragma fp_contract on
void update_scroll_offset__20TWindowChoiceSettingFPv(W_802689EC *w) {
    f32 v;
    if (w->f7c != 0 && w->f50 == 0) {
        v = lbl_805DD1E4 + (f32)(w->f74 * 20);
        v -= lbl_805DD1E8 * ((w->f4c - lbl_805DD1EC) - lbl_805DD1F0);
        w->f6c += v - w->f6c;
    }
}
#pragma pop

void clamp_scroll__20TWindowChoiceSettingFPv(u8 *arg0) {
    Stack_80268A6C stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        stack.sp8 = lbl_805DD1D8;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD1DC;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            stack.spC = temp_f1 - lbl_805DD1E0;
        }
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x7C)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

}

extern "C" {

void draw_setting__20TWindowChoiceSettingFPvi(void *arg0, s32 arg1);
M2C_UNK draw_selection_bar(s32, u16 *, s32);

void draw_setting__20TWindowChoiceSettingFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = ((u16 * (*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (*temp_r3 & 1) {
        draw_selection_bar(arg1, temp_r3, ((s32 (*)(void *))is_open__17TWindowSubComCardFPv)(arg0));
    }
}

void set_field_1c__6TLobbyFPvf(void *, f32);
extern s32 lbl_805D3970;
extern const f32 lbl_805DD1F4;

void TWindowMenuInfomation__ct(u8 *arg0, u32 arg1) {
    u32 i;
    u8 *e;
    *(s32 *)arg0 = lbl_805D3970;
    *(s16 *)(arg0 + 0x72) = 0;
    *(s16 *)(arg0 + 0x74) = 0;
    *(u16 *)(arg0 + 0x76) = arg1;
    *(s16 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x78) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    for (i = 0; i < arg1; i++) {
        e = ((u8 *(*)(void *, u32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        *(f32 *)(e + 0xC) = (f32)(i * 0x14);
    }
    set_field_1c__6TLobbyFPvf(arg0, lbl_805DD1F4);
}

}

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V_80268C5C { f32 x; f32 y; };

extern "C" {
extern V_80268C5C lbl_804D0644[];
extern s32 lbl_804D0638[];
void fn_80268C5C(V_80268C5C v, s32 x);
s32 __nw__7TObjectFUl(s32);
s32 fn_80269004(s32, s32, s32);
s32 get_window_layout_position(s32);
extern s32 lbl_8044F3A0[];
extern s32 lbl_8044F3B8[];
}

extern "C" {

s32 create_information_counter_window(s32 arg0) {
    s32 var_r31;

    ((s32 (*)(s32 *, s32))fn_80268C5C)(lbl_8044F3A0, arg0);
    var_r31 = __nw__7TObjectFUl(0x80);
    if (var_r31 != 0) {
        var_r31 = fn_80269004(var_r31, get_window_layout_position(0xAE), arg0);
    }
    ((s32 (*)(s32, s32 *))create_sub_window__20TWindowChoiceSettingFPvi)(var_r31, lbl_8044F3B8);
    return var_r31;
}

void fn_80268C5C(V_80268C5C v, s32 x) {
    lbl_804D0644[0] = v;
    lbl_804D0638[1] = x;
}

}

struct RecoveredGlobal_80268D08_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 step_window_tween(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_selected__20TWindowChoiceSettingFPv(void *);
s32 update_window_entry_list(void *, void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80268D08_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD1F8;
void handle_choice_input__20TWindowSubStatusDispFPv(u8 *arg0);
}

extern "C" {

void TWindowSubStatusDisp__sub_80268C80(u8 *arg0);
void *destroy_children__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
M2C_UNK draw_visible_window_entries(void *, void *, s32);
M2C_UNK draw_window_scrollbar(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void TWindowSubStatusDisp__sub_80268C80(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    ((M2C_UNK (*)(void *, s32))draw_setting__20TWindowChoiceSettingFPvi)(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x78), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        draw_window_scrollbar(M2C_FIELD(arg0, u32 *, 0x7C), temp_r3, arg0 + 0x68);
    }
}

extern M2C_UNK lbl_804D0658[];

typedef char RecoveredGlobal_80268D08_lbl_8050E208_size[sizeof(RecoveredGlobal_80268D08_lbl_8050E208) == 0x1B0 ? 1 : -1];
void handle_choice_input__20TWindowSubStatusDispFPv(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    if ((is_selected__20TWindowChoiceSettingFPv((void *) (arg0)) == 0) && (((s32 (*)(void *))is_open__17TWindowSubComCardFPv)((void *) (arg0)) == 0)) {
        if (M2C_FIELD(arg0, u16 *, 0x70) & 0x10) {
            temp_r30 = (u8 *)&controller_input_state.value + 0x20;
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor_prev__20TWindowChoiceSettingFPv)((void *) (arg0));
            }
            if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_next_choice__20TWindowChoiceSettingFPv)((void *) (arg0));
            }
        } else {
            temp_r30_2 = (u8 *)&controller_input_state.value + 0x20;
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_cursor_prev__20TWindowChoiceSettingFPv)((void *) (arg0));
            }
            if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
                ((s32 (*)(void *))move_next_choice__20TWindowChoiceSettingFPv)((void *) (arg0));
            }
        }
        temp_r30_3 = (u8 *)&controller_input_state.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (4)) != 0)) {
            ((s32 (*)(void *))draw__20TWindowChoiceSettingFPv)((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_3), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            ((s32 (*)(void *))request_close__20TWindowChoiceSettingFPv)((void *) (arg0));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD1F8) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x78);
        if (temp_r3 != 0U) {
            update_subwindow__20TWindowSubStatusDispFPv((int) (temp_r3));
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x7C);
        if (temp_r3_2 != 0U) {
            increment_counter__20TWindowSubStatusDispFPv((int) (temp_r3_2));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    step_window_tween((void *) (arg0));
    ((s32 (*)(void *))update_scroll_offset__20TWindowChoiceSettingFPv)((void *) (arg0));
    ((s32 (*)(void *))clamp_scroll__20TWindowChoiceSettingFPv)((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *destroy_children__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0658;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x7C), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x78), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
