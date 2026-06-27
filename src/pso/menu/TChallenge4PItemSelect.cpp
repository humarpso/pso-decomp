#include "pso/TChallenge4PItemSelect.h"

extern "C" void TWindowSubComCard__sub_80244A14(void*);

void TChallenge4PItemSelect::run_task() {}

TChallenge4PItemSelect::~TChallenge4PItemSelect() {
    if (m_2c != nullptr) { TWindowSubComCard__sub_80244A14(m_2c); m_2c = nullptr; }
}
