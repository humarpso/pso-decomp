#include "types.h"
#include "pso/item/TItem.h"

extern "C" {

s32 get_player_by_client_id(int);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 advance_item_id_counter(u16);

void TItem::init_owner(u16 arg1) {
    get_player_by_client_id(arg1);
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        if ((s32) *(s32 *)((s8 *)this + 0xC) == -1) {
            *(s32 *)((s8 *)this + 0xC) = advance_item_id_counter(arg1);
        }
        TItem::send_owner_item_packet(this, arg1);
    }
}

}
