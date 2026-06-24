#include "pso/TBoss1DragonColli.h"

extern "C" void queue_destruction__7TObjectFv(void*);

TBoss1DragonColli::~TBoss1DragonColli() {
    for (int i = 0; i < 3; i++) {
        if (m_objs[i] != nullptr) {
            queue_destruction__7TObjectFv(m_objs[i]);
        }
        m_objs[i] = nullptr;
    }
}
