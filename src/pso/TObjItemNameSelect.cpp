#include "pso/TObjItemNameSelect.h"

extern "C" void fn_80244A14(void*);

TObjItemNameSelect::~TObjItemNameSelect() {
    if (m_20 != nullptr) { fn_80244A14(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { fn_80244A14(m_1c); m_1c = nullptr; }
}
