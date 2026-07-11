#include "pso/TObjDFRecBall.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFRecBall::run_task() {}

TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) request_destroy__11TBoss4Type2FUi(m_44);
}
