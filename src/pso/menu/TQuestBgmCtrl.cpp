#ifndef PSO_CLASS_PACKAGE
#include "pso/TQuestBgmCtrl.h"

extern s32 TQuestBgmCtrl__data_805D5E60;
extern s32 TQuestBgmCtrl__data_805D5E64;
extern s32 TQuestBgmCtrl__data_805D5E68;
extern s32 TQuestBgmCtrl__data_805D5E6C;

extern "C" {
s32 get_register__12TQuestThreadFPvi(void *, int);
s32 play_area_music(int);
extern s32 lbl_804C6970[];
extern s32 lbl_805D5EE8;
}

void TQuestBgmCtrl::run_task() {
    if (((s32) TQuestBgmCtrl__data_805D5E60 == 0) && ((get_register__12TQuestThreadFPvi((void *) (lbl_805D5EE8), (int) (0xFF)) != 0) || ((s32) TQuestBgmCtrl__data_805D5E64 != 0)) && ((s32) TQuestBgmCtrl__data_805D5E68 > 0) && ((s32) TQuestBgmCtrl__data_805D5E68 <= 0x11)) {
        play_area_music(lbl_804C6970[TQuestBgmCtrl__data_805D5E68 - 1]);
        TQuestBgmCtrl__data_805D5E60 = 1;
    }
}

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
