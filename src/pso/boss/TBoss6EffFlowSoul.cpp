#include "pso/TBoss6EffFlowSoul.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TBoss6EffFlowSoul::run_task() {}

TBoss6EffFlowSoul::~TBoss6EffFlowSoul() {
    if (m_20 != nullptr) request_destroy__11TBoss4Type2FUi(m_20);
}
