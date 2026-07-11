#include "pso/TObjDFRecover.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFRecover::run_task() {}

TObjDFRecover::~TObjDFRecover() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}
