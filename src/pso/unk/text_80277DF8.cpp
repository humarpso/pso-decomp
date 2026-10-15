#include "types.h"
#include "pso/misc/TWindowSubEquip.h"

extern "C" {
s32 select_cursor_entry__6TLobbyFv(int);
s32 assign_shortcut__20TWindowShortListCtrlFlll(int, int, int);
}

extern "C" {

void TWindowSubEquip::apply_slot_selection() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    temp_r31 = select_cursor_entry__6TLobbyFv((int) (*(s32 *)((s8 *)arg0 + 0x34)));
    assign_shortcut__20TWindowShortListCtrlFlll((int) (temp_r31), (int) (select_cursor_entry__6TLobbyFv((int) (*(s32 *)((s8 *)arg0 + 0x38)))), (int) (*(s32 *)((s8 *)arg0 + 0x28)));
}

}
