#include "pso/TObjDFRecover.h"

extern "C" void fn_80086C44(void*);

void TObjDFRecover::run_task() {}

TObjDFRecover::~TObjDFRecover() {
    if (m_2c != nullptr) fn_80086C44(m_2c);
}
