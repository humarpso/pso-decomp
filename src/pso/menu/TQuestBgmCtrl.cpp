#ifndef PSO_CLASS_PACKAGE
#include "pso/TQuestBgmCtrl.h"

extern s32 TQuestBgmCtrl__data_805D5E60;
extern s32 TQuestBgmCtrl__data_805D5E64;
extern s32 TQuestBgmCtrl__data_805D5E68;
extern s32 TQuestBgmCtrl__data_805D5E6C;

void TQuestBgmCtrl::run_task() {}

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
