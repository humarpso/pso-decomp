#include "pso/TItemTexLoad.h"

extern "C" void TItemTexLoad__sub_8011CF6C(void*);
extern "C" void free__11TOBoss4RockFUi(void*);

void TItemTexLoad::run_task() {}

TItemTexLoad::~TItemTexLoad() {
    TItemTexLoad__sub_8011CF6C(this);
    free__11TOBoss4RockFUi(m_1c);
    m_1c = nullptr;
}
