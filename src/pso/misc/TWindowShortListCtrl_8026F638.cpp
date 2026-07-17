#include "types.h"

extern "C" {

s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x78); }

}
