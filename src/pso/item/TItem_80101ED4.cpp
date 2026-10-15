#include "types.h"

extern "C" {

void init_owner__5TItemFPvUs(void *arg0, u16 arg1);
s32 send_owner_item_packet__5TItemFPvUs(void *, u16);
s32 get_player_by_client_id(int);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 advance_item_id_counter(u16);

void init_owner__5TItemFPvUs(void *arg0, u16 arg1) {
    get_player_by_client_id(arg1);
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xC) == -1) {
            *(s32 *)((s8 *)arg0 + 0xC) = advance_item_id_counter(arg1);
        }
        send_owner_item_packet__5TItemFPvUs(arg0, arg1);
    }
}

}
