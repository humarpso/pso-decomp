#include "types.h"
struct Cmd_801B9EDC { u16 hdr; u16 id; void *item; };

struct L_801BA0F0 { u16 f0; s16 f2; s32 f4; s32 f8; };

typedef struct Msg_801BA060 {
    u8 pad0[2];
    u16 slot;
    s32 c;
    s32 d;
} Msg_801BA060;

typedef struct Player_801BA060 {
    u8 pad0[0xD00];
    void *inv;
} Player_801BA060;

extern "C" {
s32 obj_isState2_324(void *obj);
void init_cmd_6x26__10TObjPlayerFPv(void *cmd);
u16 obj_getField1c(void *obj);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B9EDC(void *self, void *item);
s32 obj_isState2_324(void *obj);
u16 obj_getField1c(void *obj);
s32 check_switch_available__6TLobbyFPvi(void);
void init_command__10TObjPlayerFPv(void *);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_801B9F40(void *, void *, s32);
Player_801BA060 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
void bswap_body_dwords5__10TObjPlayerFPv(void *);
void copy_pair_fields4__10TObjPlayerFPvPv(void *, void *);
void init_command__10TObjPlayerFPv(void *);
u32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv();
s32 validate_6x25_equip_item(void *);
void handle_6x25_equip_item(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801B9EDC(void *self, void *item) {
    if (self == 0 || obj_isState2_324(self) == 0) {
        Cmd_801B9EDC cmd;
        init_cmd_6x26__10TObjPlayerFPv(&cmd);
        cmd.id = obj_getField1c(self);
        cmd.item = item;
        bswap_body_dwords4_and_send__10TObjPlayerFPv(&cmd);
        TObjPlayer__sub_801B9634(self);
    }
}

void handle_6x25_equip_item(void *arg0) {
    Msg_801BA060 m;
    Player_801BA060 *p;
    void *o;
    init_command__10TObjPlayerFPv(&m);
    copy_pair_fields4__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords5__10TObjPlayerFPv(&m);
    if (validate_6x25_equip_item(&m) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(m.slot);
        if ((p != NULL) && (start_inventory_update__10TObjPlayerFPvi(p->inv, m.c) != 0U) && ((o = get_owner_if_alive__10TObjPlayerFPv()) != NULL)) {
            TObjPlayer__sub_801B9F40(p, o, m.d);
        }
    }
}

void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2) {
    L_801BA0F0 sp8;
    if (check_switch_available__6TLobbyFPvi() != 0 && (arg0 == 0 || obj_isState2_324(arg0) == 0)) {
        init_command__10TObjPlayerFPv(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        bswap_body_dwords5_and_send__10TObjPlayerFPv(&sp8);
    }
}

}
