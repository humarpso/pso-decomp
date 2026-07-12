#include "types.h"

extern "C" {

void render__20TWindowSubQuestBoardFv(void);
void fn_8027CED8(s32 arg0, s32 arg1);
void fn_8027CF00(s32 arg0, s32 arg1);
void fn_8027CF28(s32 arg0, s32 arg1);
void fn_8027CF50(s32 arg0, s32 arg1);
void fn_8027CF78(s32 arg0, s32 arg1);
int fn_8027CFA0(void* p, int a1);
int set_card_window_flags__19TWindowKeyBoardHardFPvii(void*, int, int);

void fn_8027CED8(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 0xA, -0x1C01);
}
void fn_8027CF00(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 8, -0x301);
}
void fn_8027CF28(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 8, -9);
}
void fn_8027CF50(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 4, -5);
}
void fn_8027CF78(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 2, -3);
}
int fn_8027CFA0(void* p, int a1) { return set_card_window_flags__19TWindowKeyBoardHardFPvii(p, a1, -2); }
void render__20TWindowSubQuestBoardFv(void) {  }

}
