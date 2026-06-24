#include "pso/TItemEffCane.h"

extern "C" void fn_80086C44(void*);

void TItemEffCane::run_task() {}

TItemEffCane::~TItemEffCane() {
    fn_80086C44(this->m_20);
}
