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
