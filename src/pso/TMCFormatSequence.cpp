#include "pso/TMCFormatSequence.h"

extern "C" void fn_80244A14(void*);
extern "C" void fn_801F6554(void*);

void TMCFormatSequence::run_task() {}

TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) fn_80244A14(m_38);
    m_38 = nullptr;
    fn_801F6554(this);
}
