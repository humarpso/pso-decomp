#include "types.h"
#include "pso/misc/TWindowSubEquip.h"

extern "C" {

s32 get_player_by_client_id(s32);
s32 get_field_d8__10TObjPlayerFv();
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);
s32 TWindowHelpItem__set_displayed_item_by_id(s32, s32);
s32 show_item_by_id__15TWindowHelpItemFPvi(s32, s32);
s32 select_cursor_entry__22TWindowSubShortCutListFv(s32);

void TWindowSubEquip::update_displayed_item() {
    s32 temp_r3;

    temp_r3 = select_cursor_entry__22TWindowSubShortCutListFv(*(s32 *)&this->m_38);
    if (temp_r3 != (s32) *(s32 *)&this->m_24) {
        *(s32 *)&this->m_24 = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(*(s32 *)&this->m_30, temp_r3);
    }
}

void TWindowSubEquip::update() {
    s32 temp_r3;
    s32 var_r3;
    s32 temp_r0;

    temp_r3 = get_player_by_client_id(*(s32 *)&this->m_28);
    if (temp_r3 != 0) {
        temp_r0 = select_cursor_entry__22TWindowSubShortCutListFv(*(s32 *)&this->m_34);
        if (get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, temp_r0) == 0U) {
            var_r3 = -1;
        } else {
            var_r3 = get_field_d8__10TObjPlayerFv();
        }
        if (var_r3 != (s32) *(s32 *)&this->m_20) {
            *(s32 *)&this->m_20 = var_r3;
            show_item_by_id__15TWindowHelpItemFPvi(*(s32 *)&this->m_30, var_r3);
        }
    }
}

}
