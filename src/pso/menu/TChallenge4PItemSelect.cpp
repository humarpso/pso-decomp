#include "pso/TChallenge4PItemSelect.h"

extern "C" void TWindow__close(void*);

void TChallenge4PItemSelect::run_task() {}

TChallenge4PItemSelect::~TChallenge4PItemSelect() {
    if (m_2c != nullptr) { TWindow__close(m_2c); m_2c = nullptr; }
}
