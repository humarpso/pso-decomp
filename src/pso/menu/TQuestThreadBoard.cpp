#include "pso/TQuestThreadBoard.h"

extern "C" void TWindow__close(void*);
extern "C" void close_windows__6TLobbyFv(void);
extern s32 lbl_805D5EF0;

void TQuestThreadBoard::run_task() {}

TQuestThreadBoard::~TQuestThreadBoard() {
    if (m_28 != nullptr) {
        TWindow__close(m_28);
        m_28 = nullptr;
    }
    if (m_2c != nullptr) {
        TWindow__close(m_2c);
        m_2c = nullptr;
    }
    close_windows__6TLobbyFv();
    lbl_805D5EF0 = 0;
}
