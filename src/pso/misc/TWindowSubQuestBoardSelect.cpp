#include "types.h"

extern "C" {

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0);
void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 is_open__20TWindowSubQuestBoardFPv();
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_open__20TWindowSubQuestBoardFPv() == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 2);
    }
}

void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_shortcut_active__18TWindowSubShortCutFPv() == 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (*(u8 *)((s8 *)arg0 + 0x60) | 1);
    }
}

}
