#include "pso/TBoss5GryphonColli.h"

extern "C" void queue_destruction__7TObjectFv(void*);

TBoss5GryphonColli::~TBoss5GryphonColli() {
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}
