#include "pso/TItemEffArmorParticle.h"

extern "C" void queue_destruction__7TObjectFv(void*);

void TItemEffArmorParticle::run_task() {}

TItemEffArmorParticle::~TItemEffArmorParticle() {
    if (m_20 != nullptr) queue_destruction__7TObjectFv(m_20);
}
