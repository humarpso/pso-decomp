#include "types.h"
struct Item_80101E7C { u8 data1[0xC]; u32 id; u8 data2[4]; };

struct Pkt_80101E7C { u8 subcommand; u8 size; u16 client_id; Item_80101E7C item; };

extern "C" {
void TLobby__sub_80102EBC(void *p);
void copy_item_data__6TLobbyFPvPv(void *p, void *q);
void normalize__9TItemDataFv(void *p);
void send_item_and_handle_60__6TLobbyFPv(void *p);
void TItem__sub_80101E7C(void *item, u16 client_id);
}

extern "C" {

void TItem__sub_80101E7C(void *item, u16 client_id) {
    Pkt_80101E7C pkt;
    TLobby__sub_80102EBC(&pkt);
    pkt.client_id = client_id;
    copy_item_data__6TLobbyFPvPv(&pkt.item, item);
    normalize__9TItemDataFv(&pkt.item);
    send_item_and_handle_60__6TLobbyFPv(&pkt);
}

}
