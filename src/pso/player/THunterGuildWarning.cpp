#include "pso/THunterGuildWarning.h"

extern "C" void fn_80211718(void*);
extern s32 lbl_805D6178;

void THunterGuildWarning::run_task() {}

THunterGuildWarning::~THunterGuildWarning() {
    fn_80211718(this);
    lbl_805D6178 = 0;
}
