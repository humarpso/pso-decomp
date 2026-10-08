#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_params__17TWindowOptionCtrlFPvsc(void *arg0, s16 arg1, s8 arg2);
void apply_selection_change__17TWindowOptionCtrlFPv(void *arg0);
void init_selection_indices__17TWindowOptionCtrlFPv(void *arg0);
void apply_and_close__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s32 set_language__19TWindowKeyBoardSoftFc(s8);
M2C_UNK close_option_window__6TLobbyFv();
M2C_UNK init_layout_positions__6TLobbyFv();
s16 TLobby__sub_80226328();
M2C_UNK TLobby__sub_802263A8(s16);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK play_area_music();
M2C_UNK fn_8023F160();
M2C_UNK fn_8023F18C();
M2C_UNK window_request_refresh(u32);
u32 create_menu__17TWindowOptionCtrlFv(void *);
M2C_UNK fn_8036A648(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void set_params__17TWindowOptionCtrlFPvsc(void *arg0, s16 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 4) = arg1;
        M2C_FIELD(temp_r3, s8 *, 6) = arg2;
    }
}

void apply_selection_change__17TWindowOptionCtrlFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) != (s16) M2C_FIELD(arg0, s16 *, 0x20)) {
        TLobby__sub_8022743C();
        TLobby__sub_802263A8(M2C_FIELD(arg0, s16 *, 0x20));
        init_layout_positions__6TLobbyFv();
    }
}

void init_selection_indices__17TWindowOptionCtrlFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = TLobby__sub_80226328();
    M2C_FIELD(arg0, s16 *, 0x1E) = temp_r3;
    M2C_FIELD(arg0, s16 *, 0x20) = temp_r3;
}

void apply_and_close__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    TLobby__sub_8022743C();
    TLobby__sub_8022743C();
    close_option_window__6TLobbyFv();
    fn_8036A648(arg1);
    play_area_music();
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
}

s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    if (set_language__19TWindowKeyBoardSoftFc((s8) arg1) != 0) {
        fn_8023F160();
        fn_8023F18C();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x28) = create_menu__17TWindowOptionCtrlFv(arg0);
        window_request_refresh(M2C_FIELD(arg0, u32 *, 0x28));
        return 1;
    }
    return 0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80248940
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selected_item__17TWindowOptionCtrlFPv(void *arg0);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void update_selected_item__17TWindowOptionCtrlFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x88));
    get_cursor_pos__14TWindowSubItemFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248AA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_menu_item__17TWindowOptionCtrlFiii(s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TWindowSubStatusDisp__sub_802673A8(M2C_UNK, s32, s32, s32, M2C_UNK, M2C_UNK);

void add_menu_item__17TWindowOptionCtrlFiii(s32 arg1, s32 arg2, s32 arg3) {
    TWindowSubStatusDisp__sub_802673A8(arg1, 0, arg2, arg3, 1, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__17TWindowOptionCtrlFPv(void *arg0);
void *get_selected_entry__17TWindowSubComCardFPv(void *);

extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;

void open__17TWindowOptionCtrlFPv(void *arg0) {
    u16 temp_r4;
    void *temp_r3;
    f32 temp_f1;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp_r3 = get_selected_entry__17TWindowSubComCardFPv(arg0);
        temp_f1 = lbl_805DD154;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f1 + M2C_FIELD(temp_r3, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD158);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B2B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1) {
    M2C_FIELD(get_global_state__23TAdSinglePlyChrSelectGCFv(), s16 *, 0xC) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B2E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_option_field_C__17TWindowOptionCtrlFv(void);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

s16 get_option_field_C__17TWindowOptionCtrlFv(void) {
    return M2C_FIELD(get_global_state__23TAdSinglePlyChrSelectGCFv(), s16 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B4A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0);
M2C_UNK get_localized_text_entry(M2C_UNK, M2C_UNK);

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0) {
    if ((arg0 == NULL) || ((s8) *arg0 == 0)) {
        get_localized_text_entry(0xF, 0x19);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B6CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_option_menu__17TWindowOptionCtrlFv(void);
s32 get_option_field_C__17TWindowOptionCtrlFv();
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, s32);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(M2C_UNK, M2C_UNK *);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

extern M2C_UNK lbl_8044F49C[];

s32 create_option_menu__17TWindowOptionCtrlFv(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xD0);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(temp_r3, lbl_8044F49C);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x10), 0);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x11), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0x12), 2);
    set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, (s16) get_option_field_C__17TWindowOptionCtrlFv());
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_snap_shot_window__17TWindowOptionCtrlFv(void);
s32 create_sound_balance_window__17TWindowOptionCtrlFv(void);
s32 TWindowSnapShot__ct(s32, s32);
s32 TWindowSoundBalance__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

s32 create_snap_shot_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowSnapShot__ct(var_r31, get_option_entry__17TWindowOptionCtrlFi(0xCF));
    }
    return var_r31;
}

s32 create_sound_balance_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x68);
    if (var_r31 != 0) {
        var_r31 = TWindowSoundBalance__ct(var_r31, get_option_entry__17TWindowOptionCtrlFi(0xCF));
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B8C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_sound_mode_menu__17TWindowOptionCtrlFPv(void *arg0);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK set_selected_index__20TWindowSubStatusDispFPvs(s32, M2C_UNK);
M2C_UNK add_menu_item__17TWindowOptionCtrlFiii(s32, s32, M2C_UNK);
s32 refresh_with_default_list__20TWindowSubStatusDispFii(s32, M2C_UNK *);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

extern M2C_UNK lbl_8044F494[];

s32 create_sound_mode_menu__17TWindowOptionCtrlFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    s32 temp_r3_after_cba4 = get_option_entry__17TWindowOptionCtrlFi(0xCF);
    temp_r31 = refresh_with_default_list__20TWindowSubStatusDispFii(temp_r3_after_cba4, lbl_8044F494);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0xE), 0);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0xD), 1);
    add_menu_item__17TWindowOptionCtrlFiii(temp_r31, get_localized_text_entry(0xF, 0xF), 2);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x20);
    switch (temp_r0) {
    case 0:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 0);
        break;
    case 1:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 1);
        break;
    case 2:
        set_selected_index__20TWindowSubStatusDispFPvs(temp_r31, 2);
        break;
    }
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026B9B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list_window__17TWindowOptionCtrlFv(void);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
M2C_UNK set_flag70_bit400__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv();
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(s32, f32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, M2C_UNK *, M2C_UNK, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
M2C_UNK fn_8036A514(M2C_UNK);
s32 check_flag_index_set(s32);
s32 fn_8036A620(s32);
s32 fn_8036A67C(s32);

extern M2C_UNK lbl_8044F4AC[];
extern const f32 lbl_805DD268;
extern const f32 lbl_805DD26C;

s32 create_list_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;
    s32 temp_r30;

    fn_8036A514(2);
    temp_r30 = check_room_seq_4__16TAdChrSelASlotGCFii(get_option_entry__17TWindowOptionCtrlFi(0xCF), 0x31);
    set_flag70_bit100__17TWindowOptionCtrlFPv();
    var_r31 = 0;
    do {
        if (fn_8036A620(var_r31) != 0) {
            if (check_flag_index_set(var_r31) == 0) {
                draw_text_gray__17TWindowSubComCardFiiii(temp_r30, lbl_8044F4AC, 0x26, var_r31);
            } else {
                forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r30, fn_8036A67C(var_r31), 0x26, var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
    set_flag70_bit400__17TWindowOptionCtrlFPv(temp_r30);
    set_scroll_target__17TWindowSubComCardFPvff(temp_r30, lbl_805DD268, lbl_805DD26C);
    align_menu_entry_positions(temp_r30);
    return temp_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026BB68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__17TWindowOptionCtrlFv(void);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);

extern const f32 lbl_805DD268;

s32 create_menu__17TWindowOptionCtrlFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = get_option_entry__17TWindowOptionCtrlFi(0xCE);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 0), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 1), 6, 7);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 2), 6, 5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 3), 6, 9);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 4), 6, 0xB);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 5), 6, 0x10);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 6), 6, 0x19);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0xF, 7), 6, 0x1B);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD268);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026BCBC
#include "types.h"

extern "C" {

void render__17TWindowOptionCtrlFv(void);

void render__17TWindowOptionCtrlFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026C40C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TWindowOptionCtrlFv(void *arg0, s16 arg1);
M2C_UNK apply_selection_change__17TWindowOptionCtrlFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern void* __vt__17TWindowOptionCtrl[];

void *__dt__17TWindowOptionCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__17TWindowOptionCtrl;
        apply_selection_change__17TWindowOptionCtrlFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026C52C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowOptionCtrl__ct(void *arg0);
void init_selection_indices__17TWindowOptionCtrlFPv(void *);
void *__ct__15TAdPlayerLoadGCFv(void *, void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__17TWindowOptionCtrl[];
extern void *lbl_805D39A8;

void *TWindowOptionCtrl__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowOptionCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39A8;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__15TAdPlayerLoadGCFv(o, arg0, 2);
    }
    M2C_FIELD(arg0, void **, 0x4C) = o;
    init_selection_indices__17TWindowOptionCtrlFPv(arg0);
    M2C_FIELD(arg0, u32 *, 0x24) = 4;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026C5D8
#include "types.h"

extern "C" {

s32 get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv(void);
void set_flag70_bit400__17TWindowOptionCtrlFPv(void* p);
void set_flag70_bit100__17TWindowOptionCtrlFPv(void* p);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void* p);
int TWindowOptionCtrl__sub_8026C630(void* p);
int is_active__17TWindowOptionCtrlFPv(void* p);
s16 get_field_64__17TWindowOptionCtrlFPv(void* p);
s16 get_field_62__17TWindowOptionCtrlFPv(void* p);
int TWindowOptionCtrl__sub_8026C658(void* p);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();

s32 get_chr_select_base_plus_1154c__17TWindowOptionCtrlFv(void) {
    return get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1154C;
}
void set_flag70_bit400__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x400; }
void set_flag70_bit100__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x100; }
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }
int TWindowOptionCtrl__sub_8026C630(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int is_active__17TWindowOptionCtrlFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
s16 get_field_64__17TWindowOptionCtrlFPv(void* p) { return *(s16*)((char*)p + 0x64); }
s16 get_field_62__17TWindowOptionCtrlFPv(void* p) { return *(s16*)((char*)p + 0x62); }
int TWindowOptionCtrl__sub_8026C658(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026CBA4
#include "types.h"

extern "C" {

void* get_option_entry__17TWindowOptionCtrlFi(int a0);

    extern unsigned char lbl_8044FE00[];
void* get_option_entry__17TWindowOptionCtrlFi(int a0) {  return (char*)lbl_8044FE00 + a0 * 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034C3CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(u32, s32, s32, f32);
u32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_option_dialog(u32, s32, s32, f32);

extern s32 lbl_805D53A0;
extern s32 tl_01;
extern const f32 lbl_805DFDD0;

void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = TWindowMessageYesNo__sub_802A59D8(tl_01, lbl_805D53A0, 0, 0);
    if (arg2 != 0) {
        forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
        return;
    }
    initialize_option_dialog(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034C470
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void TWindowOptionCtrl__sub_8034C4C4(void* p);
s32 get_localized_text_entry(M2C_UNK);
int TLobby__sub_80338534(void);
int TLobby__sub_80338608(void*);
M2C_UNK open_confirm_dialog__17TWindowOptionCtrlFPvii(void *, s32, s32);

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        open_confirm_dialog__17TWindowOptionCtrlFPvii(arg0, get_localized_text_entry(0x24), arg2);
    }
}

void TWindowOptionCtrl__sub_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { TLobby__sub_80338608((void*)1); TLobby__sub_80338534(); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CB34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);

extern M2C_UNK lbl_804F01A8[];

void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CBA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct__17TWindowOptionCtrlFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804F01A8[];

void *ct__17TWindowOptionCtrlFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 14;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
#endif
#endif
