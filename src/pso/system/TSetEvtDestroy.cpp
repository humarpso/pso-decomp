#include "pso/TSetEvtDestroy.h"

extern "C" void queue_destruction__7TObjectFv(void*);

void TSetEvtDestroy::run_task() {}

TSetEvtDestroy::~TSetEvtDestroy() {
    if (m_30 != nullptr) {
        queue_destruction__7TObjectFv(m_30);
        m_30 = nullptr;
    }
    if (m_1c != nullptr) {
        m_1c[2] &= ~2;
    }
}
