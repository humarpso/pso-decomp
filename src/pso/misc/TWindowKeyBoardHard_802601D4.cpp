#include "types.h"

struct RecoveredGlobal_80260304_lbl_804CFAD0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
s32 release_keyboard__19TWindowKeyBoardHardFPv(void *);
s32 get_window_layout_position(int);
extern RecoveredGlobal_80260304_lbl_804CFAD0 lbl_804CFAD0;
extern s32 __vt__19TWindowKeyBoardHard[];
extern s32 TWindowKeyBoardHard__name;
u8 *TWindowKeyBoardHard__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1);
void run_task__19TWindowKeyBoardHardFv(void *arg0);
s32 is_key_active__16TKeyBoardControlFPv(void *);
s32 is_key_active__19TWindowKeyBoardHardFPv();
void __dl__7TObjectFPv(void *);
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 TWindowKeyBoardHard__sub_8025CC48(void *);
s32 has_non_modifier_key__16TKeyBoardControlFv(void *);
s32 process_all_key_states__16TKeyBoardControlFPv(void *);
s32 update_modifier_flags__16TKeyBoardControlFPv(void *);

extern s32 current_language;

void run_task__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    if ((void *) *(void **)((s8 *)arg0 + 0x70) != NULL) {
        if ((is_key_active__19TWindowKeyBoardHardFPv() == 0) && (is_key_active__16TKeyBoardControlFPv(*(void **)((s8 *)arg0 + 0x70)) == 0)) {
            if (has_non_modifier_key__16TKeyBoardControlFv(arg0) != 0) {
                if ((s32) current_language == 0) {
                    *(s32 *)((s8 *)arg0 + 0x68) = 0x3C;
                }
                *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) & 0xFFFFFEFF);
                temp_r3 = *(void **)((s8 *)arg0 + 0x70);
                *(s32 *)((s8 *)temp_r3 + 0xB4) = (s32) (*(s32 *)((s8 *)temp_r3 + 0xB4) & 0xFFFFFFBF);
                if (!(*(s32 *)((s8 *)arg0 + 0x60) & 0x40)) {
                    TWindowKeyBoardHard__sub_8025CC48(*(void **)((s8 *)arg0 + 0x70));
                }
            }
            update_modifier_flags__16TKeyBoardControlFPv(arg0);
            process_all_key_states__16TKeyBoardControlFPv(arg0);
        }
        temp_r3_2 = *(s32 *)((s8 *)arg0 + 0x68);
        if (temp_r3_2 > 0) {
            *(s32 *)((s8 *)arg0 + 0x68) = (s32) (temp_r3_2 - 1);
        }
        initialize_subwindow__9TWindowDDFPv(arg0);
        update_fade__17TWindowSubComCardFPv(arg0);
    }
}

extern s32 __vt__19TWindowKeyBoardHard[];

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowKeyBoardHard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80260304_lbl_804CFAD0_size[sizeof(RecoveredGlobal_80260304_lbl_804CFAD0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard_size[sizeof(RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard) == 0x1C ? 1 : -1];
u8 *TWindowKeyBoardHard__ct(u8 *arg0, s32 arg1) {
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&lbl_804CFAD0.value), (int) (4), (int) (get_window_layout_position((int) (0xB9))));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard *)&__vt__19TWindowKeyBoardHard).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowKeyBoardHard__name;
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x70) = arg1;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x6C) = 7;
    release_keyboard__19TWindowKeyBoardHardFPv((void *) (arg0));
    return arg0;
}

}

extern "C" {
extern char lbl_8044F0A8[];
s32 TWindowKeyBoardHard__name = (s32)lbl_8044F0A8;
}
