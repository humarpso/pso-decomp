#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/misc/TWindowDD.h"

struct RecoveredGlobal_80260304_lbl_804CFAD0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
s32 construct_base__9TWindowDDFPUcsPUc(void *, void *, int, int);
s32 get_window_layout_position(int);
extern RecoveredGlobal_80260304_lbl_804CFAD0 lbl_804CFAD0;
extern s32 __vt__19TWindowKeyBoardHard[];
extern s32 TWindowKeyBoardHard__name;
u8 *TWindowKeyBoardHard__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1);
s32 is_key_active__16TKeyBoardControlFv(void *);
s32 is_key_active__19TWindowKeyBoardHardFv();
void __dl__7TObjectFPv(void *);
s32 initialize_subwindow__9TWindowDDFv(void *);
s32 TWindowKeyBoardHard__sub_8025CC48(void *);
s32 has_non_modifier_key__16TKeyBoardControlFv(void *);

extern s32 current_language;

void TWindowKeyBoardHard::run_task() {
    s32 temp_r3_2;
    void *temp_r3;

    if ((void *) *(void * *)&this->m_70 != NULL) {
        if ((is_key_active__19TWindowKeyBoardHardFv() == 0) && (is_key_active__16TKeyBoardControlFv(*(void * *)&this->m_70) == 0)) {
            if (has_non_modifier_key__16TKeyBoardControlFv(this) != 0) {
                if ((s32) current_language == 0) {
                    *(s32 *)&this->m_68 = 0x3C;
                }
                *(s32 *)&this->m_60 = (s32) (*(s32 *)&this->m_60 & 0xFFFFFEFF);
                temp_r3 = *(void * *)&this->m_70;
                *(s32 *)((s8 *)temp_r3 + 0xB4) = (s32) (*(s32 *)((s8 *)temp_r3 + 0xB4) & 0xFFFFFFBF);
                if (!(*(s32 *)&this->m_60 & 0x40)) {
                    TWindowKeyBoardHard__sub_8025CC48(*(void * *)&this->m_70);
                }
            }
            update_modifier_flags();
            process_all_key_states();
        }
        temp_r3_2 = *(s32 *)&this->m_68;
        if (temp_r3_2 > 0) {
            *(s32 *)&this->m_68 = (s32) (temp_r3_2 - 1);
        }
        initialize_subwindow__9TWindowDDFv(this);
        update_fade();
    }
}

extern s32 __vt__19TWindowKeyBoardHard[];

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowKeyBoardHard;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80260304_lbl_804CFAD0_size[sizeof(RecoveredGlobal_80260304_lbl_804CFAD0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard_size[sizeof(RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard) == 0x1C ? 1 : -1];
u8 *TWindowKeyBoardHard__ct(u8 *arg0, s32 arg1) {
    construct_base__9TWindowDDFPUcsPUc((void *) (arg0), (void *) (&lbl_804CFAD0.value), (int) (4), (int) (get_window_layout_position((int) (0xB9))));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80260304___vt__19TWindowKeyBoardHard *)&__vt__19TWindowKeyBoardHard).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowKeyBoardHard__name;
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x70) = arg1;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x6C) = 7;
    ((TWindowKeyBoardHard *)arg0)->release_keyboard();
    return arg0;
}

}

extern "C" {
extern char lbl_8044F0A8[];
s32 TWindowKeyBoardHard__name = (s32)lbl_8044F0A8;
}
