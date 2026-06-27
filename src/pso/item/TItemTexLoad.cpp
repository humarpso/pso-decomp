#include "pso/TItemTexLoad.h"

extern "C" void fn_8011CF6C(void*);
extern "C" void TOBoss4Rock__sub_80147A80(void*);

void TItemTexLoad::run_task() {}

TItemTexLoad::~TItemTexLoad() {
    fn_8011CF6C(this);
    TOBoss4Rock__sub_80147A80(m_1c);
    m_1c = nullptr;
}
