#include "types.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
s32 is_open__20TWindowSubQuestBoardFv();
s32 is_shortcut_active__18TWindowSubShortCutFv();

void TWindowSubQuestBoardSelect::handle_cancel() {
    if (is_open__20TWindowSubQuestBoardFv() == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        this->m_60 = (u8) (this->m_60 | 2);
    }
}

void TWindowSubQuestBoardSelect::handle_decide() {
    if (is_shortcut_active__18TWindowSubShortCutFv() == 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        this->m_60 = (u8) (this->m_60 | 1);
    }
}

}
