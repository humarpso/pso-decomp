#include "pso/TObjBoss5Ctrl.h"

extern "C" void queue_destruction__7TObjectFv(void*);
extern s32 lbl_805D4DE0;

void TObjBoss5Ctrl::run_task() {}

TObjBoss5Ctrl::~TObjBoss5Ctrl() {
    if (m_28 != nullptr) { queue_destruction__7TObjectFv(m_28); m_28 = nullptr; }
    if (m_24 != nullptr) { queue_destruction__7TObjectFv(m_24); m_24 = nullptr; }
    if (m_20 != nullptr) { queue_destruction__7TObjectFv(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
    lbl_805D4DE0 = 0;
}
