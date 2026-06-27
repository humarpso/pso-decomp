#include "pso/TItemEffCane.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TItemEffCane::run_task() {}

TItemEffCane::~TItemEffCane() {
    TBoss4Type2__sub_80086C44(this->m_20);
}
