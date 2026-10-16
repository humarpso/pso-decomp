#include "types.h"
#include "pso/misc/TLobby.h"

struct E_802D1D48 { s32 id; s32 cnt; };

struct S_802D1D48 { E_802D1D48 e[31]; u8 tail[1]; };

extern "C" {
void remove_trade_entry__6TLobbyFPvUi(void *, u32);
u8 * TLobby__sub_802D2334(void *, u32);
void transfer_trade_item_amount__6TLobbyFPvUii(u8 *arg0, u32 arg1, s32 arg2);
s32 get_trade_obj_ptr__6TLobbyFv(s32);
u8 *find_free_trade_slot__6TLobbyFPv(void *);
u8 * TLobby__sub_802D2334(void *, u32);
void move_trade_item_amount__6TLobbyFPvUii(u8 *arg0, u32 arg1, s32 arg2);
s32 add_trade_item__6TLobbyFPvUii(void *, s32, s32);
s32 check_trade_offer_inventory(S_802D1D48 *arg0, s32 *arg1);
}

extern "C" {

s32 check_trade_offer_inventory(S_802D1D48 *arg0, s32 *arg1) {
    E_802D1D48 *p;
    s32 i;
    s32 id;
    s32 empty = 1;
    TLobby::clear_stale_entries(arg0->tail);
    for (p = arg0->e, i = 0; i < 0x1F; i++, p++) {
        id = p->id;
        if ((u32)(id + 0x10000) != 0xFFFF && p->cnt > 0) {
            s32 r;
            empty = 0;
            r = add_trade_item__6TLobbyFPvUii(arg0->tail, id, p->cnt);
            if (r != 0) {
                *arg1 = id;
                return r;
            }
        }
    }
    return empty ? 4 : 0;
}

void transfer_trade_item_amount__6TLobbyFPvUii(u8 *arg0, u32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(TLobby__sub_802D2334(arg0, arg1));
    if (temp_r3 != NULL) {
        *(s32 *)((s8 *)temp_r3 + 4) = (s32) (*(s32 *)((s8 *)temp_r3 + 4) - arg2);
        if ((s32) *(s32 *)((s8 *)temp_r3 + 4) <= 0) {
            remove_trade_entry__6TLobbyFPvUi(arg0, arg1);
        }
        temp_r3_2 = (u8 *)(TLobby__sub_802D2334(arg0 + 0xF8, arg1));
        if (temp_r3_2 != NULL) {
            *(s32 *)((s8 *)temp_r3_2 + 4) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 4) + arg2);
        }
    }
}
void move_trade_item_amount__6TLobbyFPvUii(u8 *arg0, u32 arg1, s32 arg2) {
  s32 var_r3;
  u8 *temp_r3;
  u8 *temp_r3_2;
  temp_r3 = (u8 *) TLobby__sub_802D2334(arg0 + 0xF8, arg1);
  if (temp_r3 != 0)
  {
    *((s32 *) (((s8 *) temp_r3) + 4)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 4))) - arg2);
    temp_r3_2 = (u8 *) TLobby__sub_802D2334(arg0, arg1);
    if (temp_r3_2)
    {
      *((s32 *) (((s8 *) temp_r3_2) + 4)) = (s32) ((*((s32 *) (((s8 *) temp_r3_2) + 4))) + arg2);
      return;
    }
    if (((u32) (arg1 + (0x10000 & 0xFF))) == (-0xFFU))
    {
      var_r3 = get_trade_obj_ptr__6TLobbyFv((s32) arg0);
    }
    else
    {
      var_r3 = (long) find_free_trade_slot__6TLobbyFPv(arg0);
    }
    *((u32 *) (((s8 *) var_r3) + 0)) = arg1;
    *((s32 *) (((s8 *) var_r3) + 4)) = arg2;
  }
}

}
