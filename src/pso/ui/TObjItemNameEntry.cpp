#include "pso/TObjItemNameEntry.h"

extern "C" void TWindow__close(void*);
extern "C" void queue_destruction__7TObjectFv(void*);

TObjItemNameEntry::~TObjItemNameEntry() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}
