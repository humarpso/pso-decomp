#include "types.h"

extern "C" {

s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

s16 get_selected_index__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x7a); }

}
