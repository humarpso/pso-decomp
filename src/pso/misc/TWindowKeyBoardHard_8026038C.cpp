#include "types.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {

int TWindowKeyBoardHard__sub_8026042C(void* p);
int TWindowKeyBoardHard__sub_80260438(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvll(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void TWindowKeyBoardHard::set_bits_shift7(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvll(arg0, arg1 << 7, -0x81);
}
void TWindowKeyBoardHard::update_card_window_page_flags(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvll(arg0, arg1 << 6, -0x41);
}
void TWindowKeyBoardHard::clear_card_window_flag(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvll(arg0, arg1 << 4, -0x11);
}
void TWindowKeyBoardHard::set_card_window_flag(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvll(arg0, arg1 << 5, -0x21);
}
int TWindowKeyBoardHard__sub_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int TWindowKeyBoardHard__sub_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int TWindowKeyBoardHard::is_key_active() { return *(u32*)((char*)this + 0x60) & 0x200; }

}
