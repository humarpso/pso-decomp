#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Msg_801022FC { u16 hdr; u16 id; s32 v; s16 w; };

struct Player_801022FC { u8 pad[0xE6]; s16 fE6; };

extern "C" {
void TObjPlayer__sub_80019568(void *, s32);
s16 TObjPlayer__sub_800196EC();
s32 get_field_d8__10TObjPlayerFPv(void *);
void send_pick_up_item_request__6TLobbyFi(void *);
void TLobby__sub_801030EC(void *);
s32 fn_8010319C(s32);
s32 can_pickup_item_by_id__10TObjPlayerFii(s32, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void TItem__sub_801022FC(Player_801022FC *p, s32 id);
}

extern "C" {

s32 fn_8010319C(s32);
s32 TObjPlayer__sub_801B4A18(void *, s32);
void TItem__sub_80102420(void);

void TItem__sub_801022FC(Player_801022FC *p, s32 id) {
    Msg_801022FC m;
    if ((u16)id != 0xFFFF) {
        if (can_pickup_item_by_id__10TObjPlayerFii(TPlayerBattleCtrl4P__sub_801BA74C(id), p) != 0 && fn_8010319C((s32)(p)) == 0) {
            TObjPlayer__sub_80019568(p, id);
            TLobby__sub_801030EC(&m);
            m.id = id;
            m.v = get_field_d8__10TObjPlayerFPv(p);
            m.w = TObjPlayer__sub_800196EC();
            send_pick_up_item_request__6TLobbyFi(&m);
            p->fE6 = 0;
        }
    } else {
        TObjPlayer__sub_80019568(p, 0xFFFF);
    }
}

}
