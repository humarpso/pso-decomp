#include "types.h"
typedef struct Msg_801B9E0C {
    u8 pad0[2];
    u16 slot;
    s32 c;
} Msg_801B9E0C;

typedef struct Player_801B9E0C {
    u8 pad0[0xD00];
    void *inv;
} Player_801B9E0C;

extern "C" {
void unequip_item__10TObjPlayerFiPv(void *, void *);
void copy_unequip_fields__10TObjPlayerFPvPv(void *, void *);
Player_801B9E0C *get_player_by_client_id(u16);
void bswap_body_dwords4__10TObjPlayerFPv(void *);
void init_cmd_6x26__10TObjPlayerFPv(void *);
u32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv();
s32 validate_6x26_unequip_item(void *);
void handle_6x26_unequip_item(void *arg0);
}

extern "C" {

void handle_6x26_unequip_item(void *arg0) {
    Msg_801B9E0C m;
    Player_801B9E0C *p;
    void *o;
    init_cmd_6x26__10TObjPlayerFPv(&m);
    copy_unequip_fields__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords4__10TObjPlayerFPv(&m);
    if (validate_6x26_unequip_item(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if ((p != NULL) && (start_inventory_update__10TObjPlayerFPvi(p->inv, m.c) != 0U) && ((o = get_owner_if_alive__10TObjPlayerFPv()) != NULL)) {
            unequip_item__10TObjPlayerFiPv(p, o);
        }
    }
}

}
