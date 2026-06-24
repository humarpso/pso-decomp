#include "pso/TDPBShower.h"

extern "C" void fn_80086C44(void*);

void TDPBShower::run_task() {}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) fn_80086C44(m_2c);
}
