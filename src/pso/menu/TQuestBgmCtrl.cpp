#ifndef PSO_CLASS_PACKAGE
#include "pso/TQuestBgmCtrl.h"

extern s32 TQuestBgmCtrl__data_805D5E60;
extern s32 TQuestBgmCtrl__data_805D5E64;
extern s32 TQuestBgmCtrl__data_805D5E68;
extern s32 TQuestBgmCtrl__data_805D5E6C;

extern "C" {
s32 get_register__12TQuestThreadFPvi(void *, int);
s32 play_area_music(int);
extern s32 lbl_805D5EE8;
extern void *lbl_804C6970[];
}

extern "C" u8 lbl_804498B8[];
extern "C" u8 lbl_804498C4[];
extern "C" u8 lbl_804498D0[];
extern "C" u8 lbl_804498E0[];
extern "C" u8 lbl_804498EC[];
extern "C" u8 lbl_804498F8[];
extern "C" u8 lbl_80449904[];
extern "C" u8 lbl_80449910[];
extern "C" u8 lbl_80449920[];
extern "C" u8 lbl_8044992C[];
extern "C" u8 lbl_80449938[];
extern "C" u8 lbl_80449944[];
extern "C" u8 lbl_80449950[];
extern "C" u8 lbl_80449960[];
extern "C" u8 lbl_80449970[];
extern "C" u8 lbl_8044997C[];
extern "C" u8 lbl_80449988[];
void TQuestBgmCtrl::run_task() {
    if (((s32) TQuestBgmCtrl__data_805D5E60 == 0) && ((get_register__12TQuestThreadFPvi((void *) (lbl_805D5EE8), (int) (0xFF)) != 0) || ((s32) TQuestBgmCtrl__data_805D5E64 != 0)) && ((s32) TQuestBgmCtrl__data_805D5E68 > 0) && ((s32) TQuestBgmCtrl__data_805D5E68 <= 0x11)) {
        play_area_music((s32) lbl_804C6970[TQuestBgmCtrl__data_805D5E68 - 1]);
        TQuestBgmCtrl__data_805D5E60 = 1;
    }
}

extern "C" void *lbl_804C6970[17] = {
    (void *)&lbl_804498B8, (void *)&lbl_804498C4, (void *)&lbl_804498D0, (void *)&lbl_804498E0,
    (void *)&lbl_804498EC, (void *)&lbl_804498F8, (void *)&lbl_80449904, (void *)&lbl_80449910,
    (void *)&lbl_80449920, (void *)&lbl_8044992C, (void *)&lbl_80449938, (void *)&lbl_80449944,
    (void *)&lbl_80449950, (void *)&lbl_80449960, (void *)&lbl_80449970, (void *)&lbl_8044997C,
    (void *)&lbl_80449988,
};

TQuestBgmCtrl::~TQuestBgmCtrl() {
    TQuestBgmCtrl__data_805D5E60 = 0;
    TQuestBgmCtrl__data_805D5E64 = 0;
    TQuestBgmCtrl__data_805D5E68 = 0;
    TQuestBgmCtrl__data_805D5E6C = 0;
}
#else
#if PSO_CLASS_PACKAGE == 0x801E63F4
#include "types.h"

extern "C" {

void TQuestBgmCtrl__sub_801E63F4(int a0);

    extern int TQuestBgmCtrl__data_805D5E60;
    extern int TQuestBgmCtrl__data_805D5E68;
void TQuestBgmCtrl__sub_801E63F4(int a0) { TQuestBgmCtrl__data_805D5E68 = a0; TQuestBgmCtrl__data_805D5E60 = 0; }

}
#endif
#endif
