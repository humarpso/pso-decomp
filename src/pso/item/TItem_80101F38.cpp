#include "pso/protocol/protocol_types.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>

typedef char DropRecordSize[(sizeof(FloorItem) == 0x24) ? 1 : -1];
typedef char DropItemOffset[(offsetof(FloorItem, item) == 0x10) ? 1 : -1];

extern "C" {
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 bswap_6x5D__6TLobbyFPv(void *);
s32 drop_stacked_item_passthrough__6TLobbyFi(void *);
s32 fn_801057A8(void *, int);
s32 TItemData__sub_8010C740(void *, int);
s32 TItemData__sub_8010CCB0(void *);
s32 get_player_floor__6TLobbyFi(int);
void handle_6x5D_drop_stacked_item(u8 *arg0);
}

extern "C" {

void handle_6x5D_drop_stacked_item(u8 *arg0) {
    FloorItem drop;
    bswap_6x5D__6TLobbyFPv((void *) (arg0));
    if (get_player_floor__6TLobbyFi((int) ((s32) M2C_FIELD(arg0, s16 *, 4))) != 0xF) {
        drop_stacked_item_passthrough__6TLobbyFi((void *) (&drop.floor));
        drop.floor = (s8) M2C_FIELD(arg0, s16 *, 4);
        drop.pos.x = M2C_FIELD(arg0, f32 *, 8);
        drop.pos.z = M2C_FIELD(arg0, f32 *, 0xC);
        drop.room_id = M2C_FIELD(arg0, s16 *, 6);
        copy_item_data__6TLobbyFPvPv((void *) (&drop.item), (void *) (arg0 + 0x10));
        if ((u32) (M2C_FIELD(arg0, u8 *, 1) * 4) == 0x24) {
            TItemData__sub_8010C740((void *) (arg0 + 0x10), (int) (0));
        } else {
            TItemData__sub_8010C740((void *) (arg0 + 0x10), (int) (2));
        }
        TItemData__sub_8010CCB0((void *) (&drop.item));
        fn_801057A8((void *) (&drop.floor), (int) (0));
    }
}

}
