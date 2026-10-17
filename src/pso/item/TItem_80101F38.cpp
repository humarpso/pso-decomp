#include "pso/protocol/protocol_types.h"
#include "pso/object/TObjMotion.h"
#include "types.h"

#include <stddef.h>
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

typedef char DropRecordSize[(sizeof(FloorItem) == 0x24) ? 1 : -1];
typedef char DropItemOffset[(offsetof(FloorItem, item) == 0x10) ? 1 : -1];

struct Msg_80101FEC {
    u16 hdr;
    u16 id;
    s16 a;
    s16 b;
    f32 x;
    f32 z;
    u8 item[0x18];
};

struct Pos_80101FEC { f32 x; f32 y; f32 z; };

extern "C" {
s32 spawn_dropped_item_from_msg(void *, int);
s32 TItemData__sub_8010C740(void *, int);
s32 TItemData__sub_8010CCB0(void *);
void handle_6x5D_drop_stacked_item(u8 *arg0);
s16 get_current_floor();
void normalize__9TItemDataFv(void *);
s32 get_player_by_client_id(u16);
extern s32 lbl_805D5450;
void send_drop_item_6x5D__5TItemFPviPv(void *item, s32 id, Pos_80101FEC *pos);
void handle_6x5D_drop_stacked_item(u8 *arg0) {
    FloorItem drop;
    ((TLobby *)arg0)->bswap_6x5D();
    if (TLobby::get_player_floor((int) ((s32) *(s16 *)((s8 *)arg0 + 4))) != 0xF) {
        ((TLobby *)(&drop.floor))->drop_stacked_item_passthrough();
        drop.floor = (s8) *(s16 *)((s8 *)arg0 + 4);
        drop.pos.x = *(f32 *)((s8 *)arg0 + 8);
        drop.pos.z = *(f32 *)((s8 *)arg0 + 0xC);
        drop.room_id = *(s16 *)((s8 *)arg0 + 6);
        ((TLobby *)(&drop.item))->copy_item_data((void *) (arg0 + 0x10));
        if ((u32) (*(u8 *)((s8 *)arg0 + 1) * 4) == 0x24) {
            TItemData__sub_8010C740((void *) (arg0 + 0x10), (int) (0));
        } else {
            TItemData__sub_8010C740((void *) (arg0 + 0x10), (int) (2));
        }
        TItemData__sub_8010CCB0((void *) (&drop.item));
        spawn_dropped_item_from_msg((void *) (&drop.floor), (int) (0));
    }
}
void send_drop_item_6x5D__5TItemFPviPv(void *item, s32 id, Pos_80101FEC *pos) {
    Msg_80101FEC m;
    s32 h;
    ((TLobby *)(&m))->init_fields();
    h = get_player_by_client_id(id);
    if (h == 0) {
        lbl_805D5450 = 1;
        return;
    }
    m.id = id;
    m.a = get_current_floor();
    m.b = ((TUnk_804B9870 *)h)->get_stat_by_key_state();
    m.x = pos->x;
    m.z = pos->z;
    ((TLobby *)(m.item))->copy_item_data(item);
    normalize__9TItemDataFv(m.item);
    ((TLobby *)(&m))->send_6x5D();
}

}
