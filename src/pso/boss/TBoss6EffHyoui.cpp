#include "pso/TBoss6EffHyoui.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TBoss6EffHyoui::run_task() {}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) request_destroy__11TBoss4Type2FUi(m_1c);
}
