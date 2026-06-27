#include "pso/TDPBShower.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TDPBShower::run_task() {}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) TBoss4Type2__sub_80086C44(m_2c);
}
