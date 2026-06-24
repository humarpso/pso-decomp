#include "pso/TChallenge4PItemSelect.h"

extern "C" void fn_80244A14(void*);

void TChallenge4PItemSelect::run_task() {}

TChallenge4PItemSelect::~TChallenge4PItemSelect() {
    if (m_2c != nullptr) fn_80244A14(m_2c);
    m_2c = nullptr;
}
