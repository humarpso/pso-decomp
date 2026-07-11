#include "pso/TQuestThreadBoard.h"

extern "C" void TWindow__close(void*);
extern "C" void TLobby__sub_801F2D88(void);
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
    TLobby__sub_801F2D88();
    lbl_805D5EF0 = 0;
}
