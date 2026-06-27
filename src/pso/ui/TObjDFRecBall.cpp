#include "pso/TObjDFRecBall.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TObjDFRecBall::run_task() {}

TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) TBoss4Type2__sub_80086C44(m_44);
}
