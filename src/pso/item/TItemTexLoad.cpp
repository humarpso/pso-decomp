#include "pso/TItemTexLoad.h"

extern "C" void unload_texture__12TItemTexLoadFPv(void*);
extern "C" void free__11TOBoss4RockFUi(void*);

void TItemTexLoad::run_task() {}

TItemTexLoad::~TItemTexLoad() {
    unload_texture__12TItemTexLoadFPv(this);
    free__11TOBoss4RockFUi(m_1c);
    m_1c = nullptr;
}
