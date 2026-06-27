#include "pso/TItemMagGrowEff.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);
extern "C" void fn_801158F0(void*);

void TItemMagGrowEff::run_task() {}

TItemMagGrowEff::~TItemMagGrowEff() {
    TBoss4Type2__sub_80086C44(m_20);
    if (m_24 != nullptr) fn_801158F0(m_24);
}
