#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80101DBC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
void *csnVecterUnder(f32 *, M2C_UNK, f32);
extern const f32 lbl_805DAA94;
extern const f32 lbl_805DAA98;
void snap_to_ground__5TItemFPv(void *arg0);
}

extern "C" {

void snap_to_ground__5TItemFPv(void *arg0) {
    Stack_80101DBC stack;
    void *temp_r3;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x38);
    stack.spC = lbl_805DAA94 + M2C_FIELD(arg0, f32 *, 0x3C);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_r3 = csnVecterUnder(&stack.sp8, 0x41, lbl_805DAA94);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DAA98 + M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4));
    }
}

}
extern "C" {

void bswap_shop_item__6TLobbyFPv(void *);
s32 is_not_matching_lobby_id__10TObjPlayerFPv(void *);
void TItemData__sub_8010CCB0(void *);
void give_item_to_client(int, void *);
struct VOff_80101E2C_arg0 { char pad_0[0x4]; char f_4[1]; };

void handle_6x5E_buy_shop_item(void *arg0) {
    s32 x;
    struct VOff_80101E2C_arg0 *self = (struct VOff_80101E2C_arg0 *)arg0;
    bswap_shop_item__6TLobbyFPv(arg0);
    x = is_not_matching_lobby_id__10TObjPlayerFPv(arg0);
    if (x != 0) {
        TItemData__sub_8010CCB0(self->f_4);
        give_item_to_client(M2C_FIELD(arg0, u16 *, 0x2), self->f_4);
    }
}

}
struct Item_80101E7C { u8 data1[0xC]; u32 id; u8 data2[4]; };

struct Pkt_80101E7C { u8 subcommand; u8 size; u16 client_id; Item_80101E7C item; };

extern "C" {
void TLobby__sub_80102EBC(void *p);
void copy_item_data__6TLobbyFPvPv(void *p, void *q);
void normalize__9TItemDataFv(void *p);
void send_item_and_handle_60__6TLobbyFPv(void *p);
void send_owner_item_packet__5TItemFPvUs(void *item, u16 client_id);
}

extern "C" {

void send_owner_item_packet__5TItemFPvUs(void *item, u16 client_id) {
    Pkt_80101E7C pkt;
    TLobby__sub_80102EBC(&pkt);
    pkt.client_id = client_id;
    copy_item_data__6TLobbyFPvPv(&pkt.item, item);
    normalize__9TItemDataFv(&pkt.item);
    send_item_and_handle_60__6TLobbyFPv(&pkt);
}

}
