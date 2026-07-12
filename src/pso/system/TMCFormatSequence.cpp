#include "pso/TMCFormatSequence.h"

extern "C" void TWindow__close(void*);
extern "C" void close_window__17TMCFormatSequenceFPv(void*);

void TMCFormatSequence::run_task() {}

TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) { TWindow__close(m_38); m_38 = nullptr; }
    close_window__17TMCFormatSequenceFPv(this);
}
