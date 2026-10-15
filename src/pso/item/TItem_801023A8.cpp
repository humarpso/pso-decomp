#include "types.h"
#include "pso/item/TItem.h"

struct Msg_801022FC { u16 hdr; u16 id; s32 v; s16 w; };

struct Player_801022FC { u8 pad[0xE6]; s16 fE6; };

extern "C" {
void TObjPlayer__sub_80019568(void *, s32);
s16 get_current_floor();
s32 get_field_d8__10TObjPlayerFv(void *);
void send_pick_up_item_request__6TLobbyFi(void *);
void TLobby__sub_801030EC(void *);
s32 fn_8010319C(s32);
s32 can_pickup_item_by_id__10TObjPlayerFii(s32, void *);
s32 get_player_by_client_id(u16);
void try_pick_up_item__5TItemFPvi(Player_801022FC *p, s32 id);
}

extern "C" {

s32 fn_8010319C(s32);
s32 submit_cursor_candidate(void *, s32);
void TItem__sub_80102420(void);

void try_pick_up_item__5TItemFPvi(Player_801022FC *p, s32 id) {
    Msg_801022FC m;
    if ((u16)id != 0xFFFF) {
        if (can_pickup_item_by_id__10TObjPlayerFii(get_player_by_client_id(id), p) != 0 && fn_8010319C((s32)(p)) == 0) {
            TObjPlayer__sub_80019568(p, id);
            TLobby__sub_801030EC(&m);
            m.id = id;
            m.v = get_field_d8__10TObjPlayerFv(p);
            m.w = get_current_floor();
            send_pick_up_item_request__6TLobbyFi(&m);
            p->fE6 = 0;
        }
    } else {
        TObjPlayer__sub_80019568(p, 0xFFFF);
    }
}

}

extern "C" {

s32 fn_8010319C(s32);
s32 submit_cursor_candidate(void *, s32);
void TItem__sub_80102420(void);

void TItem::update_timer() {
    s16 temp_r3;
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0x60);
    *(s32 *)((s8 *)this + 0x60) = (s32) (temp_r4 + 0x200);
    if (fn_8010319C((s32) this) != 0) {
        temp_r3 = *(s16 *)((s8 *)this + 0xE6);
        if (temp_r3 == 0x384) {
            *(u16 *)((s8 *)this + 0x94) = 0xFFFF;
            *(s16 *)((s8 *)this + 0xE6) = 0;
        } else {
            *(s16 *)((s8 *)this + 0xE6) = (s16) (temp_r3 + 1);
        }
    }
    submit_cursor_candidate(this, -1);
}
void TItem__sub_80102420(void) {  }

}
