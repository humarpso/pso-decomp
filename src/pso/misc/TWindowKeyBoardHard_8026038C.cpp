#include "types.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {

int TWindowKeyBoardHard__sub_8026042C(void* p);
int TWindowKeyBoardHard__sub_80260438(void* p);

void TWindowKeyBoardHard::set_bits_shift7(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard::set_card_window_flags((void *)arg0, (s32)(arg1 << 7), (s32)(-0x81));
}
void TWindowKeyBoardHard::update_card_window_page_flags(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard::set_card_window_flags((void *)arg0, (s32)(arg1 << 6), (s32)(-0x41));
}
void TWindowKeyBoardHard::clear_card_window_flag(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard::set_card_window_flags((void *)arg0, (s32)(arg1 << 4), (s32)(-0x11));
}
void TWindowKeyBoardHard::set_card_window_flag(s32 arg0, s32 arg1) {
    TWindowKeyBoardHard::set_card_window_flags((void *)arg0, (s32)(arg1 << 5), (s32)(-0x21));
}
int TWindowKeyBoardHard__sub_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int TWindowKeyBoardHard__sub_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int TWindowKeyBoardHard::is_key_active() { return *(u32*)((char*)this + 0x60) & 0x200; }

}
