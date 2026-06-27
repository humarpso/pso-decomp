#include "pso/TObjDFRecover.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TObjDFRecover::run_task() {}

TObjDFRecover::~TObjDFRecover() {
    if (m_2c != nullptr) TBoss4Type2__sub_80086C44(m_2c);
}
