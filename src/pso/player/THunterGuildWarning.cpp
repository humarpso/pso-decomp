#include "pso/THunterGuildWarning.h"

extern "C" void THunterGuildWarning__sub_80211718(void*);
extern s32 THunterGuildWarning__data_805D6178;

void THunterGuildWarning::run_task() {}

THunterGuildWarning::~THunterGuildWarning() {
    THunterGuildWarning__sub_80211718(this);
    THunterGuildWarning__data_805D6178 = 0;
}
