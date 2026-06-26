#include "pso/TItemEffFlame.h"

extern "C" void fn_80086C44(void*);

void TItemEffFlame::run_task() {}

TItemEffFlame::~TItemEffFlame() {
    fn_80086C44(this->m_1c);
}
