#include "pso/TItemTimer.h"

extern "C" {
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
void queue_destruction__7TObjectFv(void*);
void TItemTimer__sub_8011D564(void*);
}

void TItemTimer::run_task() {
    m_1C--;
    if (all_parents_unqueued_for_destruction__7TObjectFv(m_20) == 0) {
        queue_destruction__7TObjectFv(this);
    } else if (m_1C == 0) {
        TItemTimer__sub_8011D564(&m_20);
        queue_destruction__7TObjectFv(this);
    }
}

TItemTimer::~TItemTimer() {}
