#include "pso/TItemMagGrowEff.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void TItemMagSub__sub_801158F0(void*);

void TItemMagGrowEff::run_task() {}

TItemMagGrowEff::~TItemMagGrowEff() {
    request_destroy__11TBoss4Type2FUi(m_20);
    if (m_24 != nullptr) TItemMagSub__sub_801158F0(m_24);
}
