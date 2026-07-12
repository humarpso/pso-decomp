#include "pso/TItemMagGrowEff.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void clear_flag_64__11TItemMagSubFPv(void*);

void TItemMagGrowEff::run_task() {}

TItemMagGrowEff::~TItemMagGrowEff() {
    request_destroy__11TBoss4Type2FUi(m_20);
    if (m_24 != nullptr) clear_flag_64__11TItemMagSubFPv(m_24);
}
