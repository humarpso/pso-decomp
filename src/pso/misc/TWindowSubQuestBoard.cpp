#include "types.h"

extern "C" {

void render__20TWindowSubQuestBoardFv(void);
void set_board_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void set_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void clear_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1);
void set_card_flags_scaled__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
int set_card_flags_direct__20TWindowSubQuestBoardFPvi(void* p, int a1);
int set_card_window_flags__19TWindowKeyBoardHardFPvii(void*, int, int);

void set_board_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 0xA, -0x1C01);
}
void set_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 8, -0x301);
}
void clear_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 8, -9);
}
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 4, -5);
}
void set_card_flags_scaled__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 2, -3);
}
int set_card_flags_direct__20TWindowSubQuestBoardFPvi(void* p, int a1) { return set_card_window_flags__19TWindowKeyBoardHardFPvii(p, a1, -2); }
void render__20TWindowSubQuestBoardFv(void) {  }

}
