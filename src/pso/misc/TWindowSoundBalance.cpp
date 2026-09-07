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

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 is_active__17TWindowOptionCtrlFPv();
M2C_UNK handle_cancel__19TWindowSoundBalanceFPv(void *);
void play_open_sound__19TWindowSoundBalanceFPv(void *arg0);
M2C_UNK TWindowSoundBalance__sub_8027095C(void *);
extern RecoveredGlobal_80270C98_lbl_8050E208 lbl_8050E208;
void run_task__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80270C98_lbl_8050E208 lbl_8050E208;
void TWindowSoundBalance__sub_80270ACC(u8 *arg0);
}

extern "C" {

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1);
void play_open_sound__19TWindowSoundBalanceFPv(void *arg0);
void render__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80245F98(s32, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, void *);
void __dl__7TObjectFPv(void *);
M2C_UNK apply_balance__19TWindowSoundBalanceFPvPv(s32, void *, f32, f32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void *draw_default_entry__9TWindowDDFi();

void play_open_sound__19TWindowSoundBalanceFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

extern const f32 lbl_805DD40C;
extern const f32 lbl_805DD410;

typedef char RecoveredGlobal_80270ACC_lbl_8050E208_size[sizeof(RecoveredGlobal_80270ACC_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSoundBalance__sub_80270ACC(u8 *arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x20;
    if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x30), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80270ACC_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x30), (int) (6), (int) (1)) != 0)) {
        TBoss3Volopt__sub_8022675C((M2C_UNK)(0x54100), (M2C_UNK)(0U), (M2C_UNK)(0), (M2C_UNK)(0));
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
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
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
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
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

}
