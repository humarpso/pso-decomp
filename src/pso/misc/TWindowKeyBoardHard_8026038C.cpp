#include "types.h"

extern "C" {

void set_bits_shift7__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void update_card_window_page_flags__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void clear_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
void set_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1);
int TWindowKeyBoardHard__sub_8026042C(void* p);
int TWindowKeyBoardHard__sub_80260438(void* p);
int TWindowKeyBoardHard__sub_80260444(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void set_bits_shift7__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 7, -0x81);
}
void update_card_window_page_flags__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 6, -0x41);
}
void clear_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 4, -0x11);
}
void set_card_window_flag__19TWindowKeyBoardHardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 5, -0x21);
}
int TWindowKeyBoardHard__sub_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int TWindowKeyBoardHard__sub_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int TWindowKeyBoardHard__sub_80260444(void* p) { return *(u32*)((char*)p + 0x60) & 0x200; }

}
