#include "pso/TObjItemOKWindow.h"

extern "C" void TWindow__close(void*);

TObjItemOKWindow::~TObjItemOKWindow() {
    if (m_64 != nullptr) { TWindow__close(m_64); m_64 = nullptr; }
    if (m_5c != nullptr) { TWindow__close(m_5c); m_5c = nullptr; }
    if (m_60 != nullptr) { TWindow__close(m_60); m_60 = nullptr; }
}
