#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__15TWindowSubEquipFPv(void *arg0);
void update__15TWindowSubEquipFPv(void *arg0);
s32 get_player_by_client_id(s32);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
M2C_UNK show_item_by_id__15TWindowHelpItemFPvi(s32, s32);
s32 select_cursor_entry__6TLobbyFPv(s32);

void update_displayed_item__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, s32 *, 0x30), temp_r3);
    }
}

void update__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r3;
    s32 temp_r0;

    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_r3 != 0) {
        temp_r0 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x34));
        if (get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, temp_r0) == 0U) {
            var_r3 = -1;
        } else {
            var_r3 = get_field_d8__10TObjPlayerFPv();
        }
        if (var_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = var_r3;
            show_item_by_id__15TWindowHelpItemFPvi(M2C_FIELD(arg0, s32 *, 0x30), var_r3);
        }
    }
}

}
