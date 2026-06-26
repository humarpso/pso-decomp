#include "pso/TBoss6EffHyoui.h"

extern "C" void fn_80086C44(void*);

void TBoss6EffHyoui::run_task() {}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) fn_80086C44(m_1c);
}
