#include "pso/TObjItemNameSelect.h"

extern "C" void TWindowSubComCard__sub_80244A14(void*);

TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { TWindowSubComCard__sub_80244A14(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { TWindowSubComCard__sub_80244A14(m_1c); m_1c = nullptr; }
}
