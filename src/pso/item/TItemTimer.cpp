#include "pso/TItemTimer.h"

extern "C" {
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
void queue_destruction__7TObjectFv(void*);
void invoke_callback__10TItemTimerFPv(void*);
}

void TItemTimer::run_task() {
    m_1C--;
    if (all_parents_unqueued_for_destruction__7TObjectFv(m_20) == 0) {
        queue_destruction__7TObjectFv(this);
    } else if (m_1C == 0) {
        invoke_callback__10TItemTimerFPv(&m_20);
        queue_destruction__7TObjectFv(this);
    }
}

TItemTimer::~TItemTimer() {}
