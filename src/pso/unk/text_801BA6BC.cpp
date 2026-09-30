#include "types.h"

struct Base_801BA6BC { u8 pad[0x18]; };

struct Ctrl_801BA6BC : Base_801BA6BC {
    virtual ~Ctrl_801BA6BC();
};

typedef struct Msg_801BA838 {
    u8 pad0[2];
    u16 slot;
    s32 floor;
    u8 vec[12];
    s32 ang;
    u8 pad20[8];
} Msg_801BA838;

typedef struct Player_801BA838 {
    u8 pad0[0x60];
    s32 ang;
} Player_801BA838;

extern "C" {
extern void *lbl_8050EA10[];
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
extern void *lbl_8050EA10[];
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
s32 obj_getField1c(void *obj);
u16 TObjPlayer__sub_80154B60(void *obj);
s32 TObjPlayer__sub_801BA6BC(void *self);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
void set_flag_400000__10TObjPlayerFi(void *);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void bswap_pkt_u32x5__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C1664(void *, void *);
void init_cmd_6x20__10TObjPlayerFPv(void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x20_set_position(void *);
void handle_6x20_set_position(void *arg0);
}

extern "C" {

s32 TObjPlayer__sub_801BA6BC(void *self) {
    Ctrl_801BA6BC *c = (Ctrl_801BA6BC *)TPlayerBattleCtrl4P__sub_801BA74C((u16)obj_getField1c(self));
    if (c != 0) {
        delete c;
    }
    lbl_8050EA10[(u16)obj_getField1c(self)] = self;
    return TObjPlayer__sub_80154B60(self) == (u16)0xFFFF ? 1 : 0;
}

void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i) {
    if (i == 0xFFFF) {
        return 0;
    }
    if (i < 0 || i >= 12) {
        return 0;
    }
    return lbl_8050EA10[i];
}
void handle_6x20_set_position(void *arg0) {
    Msg_801BA838 m;
    Player_801BA838 *p;
    init_cmd_6x20__10TObjPlayerFPv(&m);
    TObjPlayer__sub_801C1664(&m, arg0);
    bswap_pkt_u32x5__10TObjPlayerFPv(&m);
    if (validate_6x20_set_position(&m) != 0) {
        p = ((Player_801BA838 *)TPlayerBattleCtrl4P__sub_801BA74C((s32)(m.slot)));
        if (p != NULL) {
            TBoss4DarkFalz__sub_8004C220(p, m.vec);
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
            p->ang = m.ang;
            set_flag_400000__10TObjPlayerFi(p);
        }
    }
}

}
