#include "types.h"
#include "pso/item/TItem_80101DBC.h"
#include "pso/misc/TLobby_80102DD4.h"
#include "pso/misc/TLobby.h"
#include "pso/item/TItem.h"

struct Stack_80101DBC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
void *csnVecterUnder(f32 *, s32, f32);
extern const f32 lbl_805DAA94;
extern const f32 lbl_805DAA98;
void TItem::snap_to_ground() {
    Stack_80101DBC stack;
    void *temp_r3;
    stack.sp8 = *(f32 *)((s8 *)this + 0x38);
    stack.spC = lbl_805DAA94 + *(f32 *)((s8 *)this + 0x3C);
    stack.sp10 = *(f32 *)((s8 *)this + 0x40);
    temp_r3 = csnVecterUnder(&stack.sp8, 0x41, lbl_805DAA94);
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)this + 0x3C) = (f32) (lbl_805DAA98 + *(f32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 4)) + 4));
    }
}

s32 is_not_matching_lobby_id__10TObjPlayerFv(void *);
void TItemData__sub_8010CCB0(void *);
void give_item_to_client(int, void *);
struct VOff_80101E2C_arg0 { char pad_0[0x4]; char f_4[1]; };

void handle_6x5E_buy_shop_item(void *arg0) {
    s32 x;
    struct VOff_80101E2C_arg0 *self = (struct VOff_80101E2C_arg0 *)arg0;
    ((TLobby *)arg0)->bswap_shop_item();
    x = is_not_matching_lobby_id__10TObjPlayerFv(arg0);
    if (x != 0) {
        TItemData__sub_8010CCB0(self->f_4);
        give_item_to_client(*(u16 *)((s8 *)arg0 + 0x2), self->f_4);
    }
}

}
struct Item_80101E7C { u8 data1[0xC]; u32 id; u8 data2[4]; };

struct Pkt_80101E7C { u8 subcommand; u8 size; u16 client_id; Item_80101E7C item; };

extern "C" {
void normalize__9TItemDataFv(void *p);
void TItem::send_owner_item_packet(void *item, u16 client_id) {
    Pkt_80101E7C pkt;
    init_6x5E_buy_item_header(&pkt);
    pkt.client_id = client_id;
    ((TLobby *)(&pkt.item))->copy_item_data(item);
    normalize__9TItemDataFv(&pkt.item);
    ((TLobby *)(&pkt))->send_item_and_handle_60();
}

}
