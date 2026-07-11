#include "pso/TItemEffFlame.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TItemEffFlame::run_task() {}

TItemEffFlame::~TItemEffFlame() {
    request_destroy__11TBoss4Type2FUi(this->m_1c);
}
