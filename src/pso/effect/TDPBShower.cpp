#include "pso/TDPBShower.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TDPBShower::run_task() {}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}
