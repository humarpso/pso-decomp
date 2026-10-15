#include "types.h"

extern "C" {
s32 select_cursor_entry__6TLobbyFPv(int);
s32 assign_shortcut__20TWindowShortListCtrlFiii(int, int, int);
void apply_slot_selection__15TWindowSubEquipFPv(u8 *arg0);
}

extern "C" {

void apply_slot_selection__15TWindowSubEquipFPv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = select_cursor_entry__6TLobbyFPv((int) (*(s32 *)((s8 *)arg0 + 0x34)));
    assign_shortcut__20TWindowShortListCtrlFiii((int) (temp_r31), (int) (select_cursor_entry__6TLobbyFPv((int) (*(s32 *)((s8 *)arg0 + 0x38)))), (int) (*(s32 *)((s8 *)arg0 + 0x28)));
}

}
