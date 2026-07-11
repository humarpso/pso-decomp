#include "pso/TItemEffCane.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TItemEffCane::run_task() {}

TItemEffCane::~TItemEffCane() {
    request_destroy__11TBoss4Type2FUi(this->m_20);
}
