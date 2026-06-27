#include "pso/TObjItemOKWindow.h"

extern "C" void TWindowSubComCard__sub_80244A14(void*);

TObjItemOKWindow::~TObjItemOKWindow() {
    if (m_64 != nullptr) { TWindowSubComCard__sub_80244A14(m_64); m_64 = nullptr; }
    if (m_5c != nullptr) { TWindowSubComCard__sub_80244A14(m_5c); m_5c = nullptr; }
    if (m_60 != nullptr) { TWindowSubComCard__sub_80244A14(m_60); m_60 = nullptr; }
}
