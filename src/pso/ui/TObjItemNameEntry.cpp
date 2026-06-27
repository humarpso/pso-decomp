#include "pso/TObjItemNameEntry.h"

extern "C" void TWindowSubComCard__sub_80244A14(void*);
extern "C" void queue_destruction__7TObjectFv(void*);

TObjItemNameEntry::~TObjItemNameEntry() {
    if (m_20 != nullptr) { TWindowSubComCard__sub_80244A14(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
}
