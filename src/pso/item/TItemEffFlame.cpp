#include "pso/TItemEffFlame.h"

extern "C" void TBoss4Type2__sub_80086C44(void*);

void TItemEffFlame::run_task() {}

TItemEffFlame::~TItemEffFlame() {
    TBoss4Type2__sub_80086C44(this->m_1c);
}
