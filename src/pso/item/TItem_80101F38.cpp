#include "pso/protocol/protocol_types.h"
#include "types.h"

#include <stddef.h>

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
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 bswap_6x5D__6TLobbyFPv(void *);
s32 drop_stacked_item_passthrough__6TLobbyFi(void *);
s32 spawn_dropped_item_from_msg(void *, int);
s32 TItemData__sub_8010C740(void *, int);
s32 TItemData__sub_8010CCB0(void *);
s32 get_player_floor__6TLobbyFi(int);
void handle_6x5D_drop_stacked_item(u8 *arg0);
s16 get_current_floor();
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
void send_6x5D__6TLobbyFPv(void *);
void init_fields__6TLobbyFPv(void *);
void normalize__9TItemDataFv(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(int);
s32 get_player_by_client_id(u16);
extern s32 lbl_805D5450;
void send_drop_item_6x5D__5TItemFPviPv(void *item, s32 id, Pos_80101FEC *pos);
}

extern "C" {

void handle_6x5D_drop_stacked_item(u8 *arg0) {
    FloorItem drop;
    bswap_6x5D__6TLobbyFPv((void *) (arg0));
    if (get_player_floor__6TLobbyFi((int) ((s32) *(s16 *)((s8 *)arg0 + 4))) != 0xF) {
        drop_stacked_item_passthrough__6TLobbyFi((void *) (&drop.floor));
        drop.floor = (s8) *(s16 *)((s8 *)arg0 + 4);
        drop.pos.x = *(f32 *)((s8 *)arg0 + 8);
        drop.pos.z = *(f32 *)((s8 *)arg0 + 0xC);
        drop.room_id = *(s16 *)((s8 *)arg0 + 6);
        copy_item_data__6TLobbyFPvPv((void *) (&drop.item), (void *) (arg0 + 0x10));
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
    init_fields__6TLobbyFPv(&m);
    h = get_player_by_client_id(id);
    if (h == 0) {
        lbl_805D5450 = 1;
        return;
    }
    m.id = id;
    m.a = get_current_floor();
    m.b = get_stat_by_key_state__10TObjPlayerFPv(h);
    m.x = pos->x;
    m.z = pos->z;
    copy_item_data__6TLobbyFPvPv(m.item, item);
    normalize__9TItemDataFv(m.item);
    send_6x5D__6TLobbyFPv(&m);
}

}
