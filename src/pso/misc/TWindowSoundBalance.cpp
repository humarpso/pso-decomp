#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80270C98_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80270ACC_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

typedef s32 M2C_UNK;
struct State_80270DCC { u8 pad[4]; s16 f4; s8 f6; };

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_window_entry_list(void *, void *);
s32 is_active__17TWindowOptionCtrlFPv();
M2C_UNK handle_cancel__19TWindowSoundBalanceFPv(void *);
void play_open_sound__19TWindowSoundBalanceFPv(void *arg0);
M2C_UNK TWindowSoundBalance__sub_8027095C(void *);
extern RecoveredGlobal_80270C98_lbl_8050E208 lbl_8050E208;
void run_task__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80270C98_lbl_8050E208 lbl_8050E208;
void TWindowSoundBalance__sub_80270ACC(u8 *arg0);
State_80270DCC *get_global_state__23TAdSinglePlyChrSelectGCFv();
u32 calc_text_width();
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK get_field_20__17TWindowSubComCardFPv();
M2C_UNK TWindowDD__sub_802466E0(void *, void *, s32, s32);
M2C_UNK refresh_status_display__9TWindowDDFv(u8 *);
M2C_UNK TWindowSoundBalance__sub_80270748(void *, s32);
M2C_UNK TWindowSoundBalance__sub_802707D4(void *, s32);
extern M2C_UNK lbl_804D0D68[];
extern M2C_UNK __vt__19TWindowSoundBalance[];
extern s32 lbl_805D39F0;
extern const f32 lbl_805DD414;
extern const f32 lbl_805DD418;
u8 *TWindowSoundBalance__ct(u8 *arg0, s32 arg1);
s16 obj_getS16_2BA(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 get_sub_value__8TItemMagFi(void *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void update_status_entry__20TWindowSubStatusDispFi(void *);
s32 update_hp_gauge__20TWindowSubStatusDispFi(void *);
u8 *get_player_by_client_id();
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK draw_right_aligned_number(void *);
M2C_UNK set_status_entry_target(void *, s32);
s32 update_hp_entry__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD430;
void TWindowSubStatusDisp__sub_80270F14(u8 *arg0);
}

extern "C" {

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1);
void play_open_sound__19TWindowSoundBalanceFPv(void *arg0);
void render__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK draw_window_frame(s32, void *);
M2C_UNK draw_visible_window_entries(s32, s32, void *);
void __dl__7TObjectFPv(void *);
M2C_UNK apply_balance__19TWindowSoundBalanceFPvPv(s32, void *, f32, f32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void *draw_default_entry__9TWindowDDFi();

void play_open_sound__19TWindowSoundBalanceFPv(void *arg0) {
    play_sound_effect(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

extern const f32 lbl_805DD40C;
extern const f32 lbl_805DD410;

typedef char RecoveredGlobal_80270ACC_lbl_8050E208_size[sizeof(RecoveredGlobal_80270ACC_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSoundBalance__sub_80270ACC(u8 *arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x20;
    if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x30), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x30), (int) (6), (int) (1)) != 0)) {
        play_sound_effect((M2C_UNK)(0x54100), (M2C_UNK)(0U), (M2C_UNK)(0), (M2C_UNK)(0));
        if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x61) < 0) {
            M2C_FIELD(arg0, u8 *, 0x61) = 0U;
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x61) > 1) {
            M2C_FIELD(arg0, u8 *, 0x61) = 1U;
        }
    }
}

void render__19TWindowSoundBalanceFv(s32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame(arg0, temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
    temp_f2 = M2C_FIELD(temp_r3, f32 *, 0x10);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (temp_f2 + lbl_805DD40C);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x18);
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) (temp_f1 - lbl_805DD410);
    apply_balance__19TWindowSoundBalanceFPvPv(arg0, temp_r3, temp_f1, temp_f2);
}

extern M2C_UNK __vt__19TWindowSoundBalance[];

typedef char RecoveredGlobal_80270C98_lbl_8050E208_size[sizeof(RecoveredGlobal_80270C98_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__19TWindowSoundBalanceFv(s32 arg0) {
    u8 *temp_r31;
    if (is_active__17TWindowOptionCtrlFPv() == 0) {
        TWindowSoundBalance__sub_80270ACC((u8 *)((void *) (arg0)));
        TWindowSoundBalance__sub_8027095C((void *) (arg0));
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            play_open_sound__19TWindowSoundBalanceFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__19TWindowSoundBalanceFPv((void *) (arg0));
        }
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSoundBalance;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
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
    TWindowDD__sub_802466E0(arg0, lbl_804D0D68, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSoundBalance;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D39F0;
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s16 *, 0x62) = 1;
    M2C_FIELD(arg0, s16 *, 0x64) = 1;
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    get_field_20__17TWindowSubComCardFPv();
    M2C_FIELD(e, f32 *, 8) = lbl_805DD414 - lbl_805DD418 * calc_text_width();
    refresh_status_display__9TWindowDDFv(e);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    get_field_20__17TWindowSubComCardFPv();
    M2C_FIELD(e, f32 *, 8) = lbl_805DD414 - lbl_805DD418 * calc_text_width();
    refresh_status_display__9TWindowDDFv(e);
    st = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (st == 0) {
        TWindowSoundBalance__sub_802707D4(arg0, 0);
        TWindowSoundBalance__sub_80270748(arg0, 0);
    } else {
        TWindowSoundBalance__sub_802707D4(arg0, st->f4);
        TWindowSoundBalance__sub_80270748(arg0, st->f6);
    }
    return arg0;
}
#pragma pop

void TWindowSubStatusDisp__sub_80270F14(u8 *arg0) {
    u8 *pl;
    u8 *e;
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    s32 v;
    get_width__11TWindowCtrlFPv();
    pl = get_player_by_client_id();
    if (pl != NULL) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(b, s32 *, 0x20) = get_field_2b8__14TItemProShieldFPv(pl);
        M2C_FIELD(a, s32 *, 0x20) = M2C_FIELD(pl, s16 *, 0x32C);
        v = update_hp_entry__20TWindowSubStatusDispFPv(arg0);
        M2C_FIELD(a, s32 *, 0x1C) = v;
        M2C_FIELD(c, s32 *, 0x24) = v;
        M2C_FIELD(b, s32 *, 0x1C) = v;
        M2C_FIELD(d, s32 *, 0x24) = v;
        draw_right_aligned_number(b);
        draw_right_aligned_number(a);
        M2C_FIELD(a, f32 *, 8) = M2C_FIELD(b, f32 *, 8) - M2C_FIELD(b, f32 *, 0x10) - lbl_805DD430;
        M2C_FIELD(d, f32 *, 8) = M2C_FIELD(a, f32 *, 8);
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xB);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC);
        M2C_FIELD(b, s32 *, 0x20) = obj_getS16_2BA(pl);
        M2C_FIELD(a, s32 *, 0x20) = M2C_FIELD(pl, s16 *, 0x32E);
        v = update_hp_gauge__20TWindowSubStatusDispFi(arg0);
        M2C_FIELD(a, s32 *, 0x1C) = v;
        M2C_FIELD(c, s32 *, 0x24) = v;
        M2C_FIELD(b, s32 *, 0x1C) = v;
        M2C_FIELD(d, s32 *, 0x24) = v;
        draw_right_aligned_number(b);
        draw_right_aligned_number(a);
        M2C_FIELD(a, f32 *, 8) = M2C_FIELD(b, f32 *, 8) - M2C_FIELD(b, f32 *, 0x10) - lbl_805DD430;
        M2C_FIELD(d, f32 *, 8) = M2C_FIELD(a, f32 *, 8);
        update_status_entry__20TWindowSubStatusDispFi(arg0);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        set_status_entry_target(e, get_sub_value__8TItemMagFi(pl));
    }
}

}
