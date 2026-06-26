#include "pso/TBoss6EffFlowSoul.h"

extern "C" void fn_80086C44(void*);

void TBoss6EffFlowSoul::run_task() {}

TBoss6EffFlowSoul::~TBoss6EffFlowSoul() {
    if (m_20 != nullptr) fn_80086C44(m_20);
}
