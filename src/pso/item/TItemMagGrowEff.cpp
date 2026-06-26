#include "pso/TItemMagGrowEff.h"

extern "C" void fn_80086C44(void*);
extern "C" void fn_801158F0(void*);

void TItemMagGrowEff::run_task() {}

TItemMagGrowEff::~TItemMagGrowEff() {
    fn_80086C44(m_20);
    if (m_24 != nullptr) fn_801158F0(m_24);
}
