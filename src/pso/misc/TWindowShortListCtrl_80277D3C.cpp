#include "types.h"
#include "pso/item/TItem.h"
#include "pso/misc/TWindowShortListCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_player_by_client_id(s32);
u32 find_item_by_id(s32);
s32 send_6x26_unequip_item__10TObjPlayerFPvPv(s32, s32);
s32 send_6x25_equip_item(s32, s32, s32);
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);

void TWindowShortListCtrl::assign_shortcut(s32 arg0, s32 item, s32 arg2) {
    u32 temp_r31;
    s32 temp_r3;
    s32 temp_r0;
    u32 temp_r3b;

    temp_r3 = get_player_by_client_id(arg2);
    if (temp_r3 != 0) {
        temp_r31 = get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, arg0);
        temp_r3b = find_item_by_id(item);
        if (temp_r31 == temp_r3b) {
            send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, item);
            return;
        }
        if (((TObjPlayer *)temp_r3b)->test_item_flags(8) != 0U) {
            send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, item);
        }
        if (temp_r31 != 0U) {
            temp_r0 = ((TItem *)temp_r31)->get_field_d8();
            send_6x26_unequip_item__10TObjPlayerFPvPv(temp_r3, temp_r0);
        }
        send_6x25_equip_item(temp_r3, item, arg0);
    }
}

}
