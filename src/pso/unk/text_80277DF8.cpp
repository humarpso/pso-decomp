#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 select_cursor_entry__6TLobbyFPv(int);
M2C_UNK assign_shortcut__20TWindowShortListCtrlFiii(int, int, int);
void apply_slot_selection__15TWindowSubEquipFPv(u8 *arg0);
}

extern "C" {

void apply_slot_selection__15TWindowSubEquipFPv(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x34)));
    assign_shortcut__20TWindowShortListCtrlFiii((int) (temp_r31), (int) (select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x38)))), (int) (M2C_FIELD(arg0, s32 *, 0x28)));
}

}
