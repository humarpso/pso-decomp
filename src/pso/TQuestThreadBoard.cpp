#include "pso/TQuestThreadBoard.h"

extern "C" void fn_80244A14(void*);
extern "C" void fn_801F2D88(void);
extern s32 lbl_805D5EF0;

void TQuestThreadBoard::run_task() {}

TQuestThreadBoard::~TQuestThreadBoard() {
    if (m_28 != nullptr) fn_80244A14(m_28);
    m_28 = nullptr;
    if (m_2c != nullptr) fn_80244A14(m_2c);
    m_2c = nullptr;
    fn_801F2D88();
    lbl_805D5EF0 = 0;
}
