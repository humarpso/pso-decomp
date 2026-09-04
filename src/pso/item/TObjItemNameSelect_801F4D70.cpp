#include "pso/TObjItemNameSelect.h"

extern "C" void TWindow__close(void*);

TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { TWindow__close(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { TWindow__close(m_1c); m_1c = nullptr; }
}
