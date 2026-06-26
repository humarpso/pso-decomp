#include "pso/TObjDFRecBall.h"

extern "C" void fn_80086C44(void*);

void TObjDFRecBall::run_task() {}

TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) fn_80086C44(m_44);
}
