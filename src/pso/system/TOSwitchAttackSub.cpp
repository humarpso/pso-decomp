#include "pso/TOSwitchAttackSub.h"

extern "C" void queue_destruction__7TObjectFv(void*);

void TOSwitchAttackSub::run_task() {}

TOSwitchAttackSub::~TOSwitchAttackSub() {
    if (m_20 != nullptr) queue_destruction__7TObjectFv(m_20);
}
