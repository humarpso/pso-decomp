#include "pso/TMCFormatSequence.h"

extern "C" void TWindow__close(void*);
extern "C" void fn_801F6554(void*);

void TMCFormatSequence::run_task() {}

TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) { TWindow__close(m_38); m_38 = nullptr; }
    fn_801F6554(this);
}
