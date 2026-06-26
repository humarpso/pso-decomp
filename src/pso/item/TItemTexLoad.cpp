#include "pso/TItemTexLoad.h"

extern "C" void fn_8011CF6C(void*);
extern "C" void fn_80147A80(void*);

void TItemTexLoad::run_task() {}

TItemTexLoad::~TItemTexLoad() {
    fn_8011CF6C(this);
    fn_80147A80(m_1c);
    m_1c = nullptr;
}
