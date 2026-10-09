#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_owner__5TItemFPvUs(void *arg0, u16 arg1);
M2C_UNK send_owner_item_packet__5TItemFPvUs(void *, u16);
M2C_UNK get_player_by_client_id(int);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 advance_item_id_counter(u16);

void init_owner__5TItemFPvUs(void *arg0, u16 arg1) {
    get_player_by_client_id(arg1);
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
            M2C_FIELD(arg0, s32 *, 0xC) = advance_item_id_counter(arg1);
        }
        send_owner_item_packet__5TItemFPvUs(arg0, arg1);
    }
}

}
