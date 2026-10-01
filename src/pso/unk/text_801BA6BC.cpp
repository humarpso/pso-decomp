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

typedef struct Msg1F_801BA8D4 {
    u8 pad0[2];
    u16 slot;
    s32 floor;
} Msg1F_801BA8D4;

typedef struct Msg20_801BA8D4 {
    u8 pad0[2];
    u16 id;
    s32 f4;
    u8 vec[12];
    s32 ang;
} Msg20_801BA8D4;

typedef struct Msg_801BA8D4 {
    u8 pad0[2];
    u16 id;
    s16 floor;
    u8 pad6[2];
    s32 f8;
    f32 speed;
} Msg_801BA8D4;

typedef struct Player_801BA8D4 {
    u8 pad0[0x38];
    u8 pos[12];
    u8 pad44[0x60 - 0x44];
    s32 ang;
} Player_801BA8D4;

struct Msg_801BA78C {
    u16 cmd;
    u16 slot;
    u32 x4;
    u32 flags;
};

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
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324(void *);
s32 obj_getField1c(void *obj);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 get_speed__10TObjPlayerFPv(void *);
s32 TFontSmallLobby__sub_801AFEE0(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
Player_801BA8D4 *update_battle_controller__10TObjPlayerFv(void);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_801BEB0C(void *);
s16 get_floor__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C15E4(void *);
void init_cmd_6x20__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C16F0(void *, s32);
void TObjPlayer__sub_801C172C(void *);
void TObjPlayer__sub_801C1760(void *);
void handle_6x1F_set_floor__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C17D0(void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x1F_set_player_floor(void *);
void handle_6x1F_set_player_floor(void *arg0);
s32 TLobby__sub_800822E8(void *, u32);
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
s32 TFontSmallLobby__sub_801AFEE0(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
void bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void *);
void copy_from__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C15E4(void *);
void TObjPlayer__sub_801D0BC0(void *, s32, s32);
s32 TObjEneHoldEffect__sub_8036C9D8(void *);
void handle_6xAE_set_animation_state(void *arg0);
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

void handle_6xAE_set_animation_state(void *arg0) {
    Msg_801BA78C m;
    void *p;
    TObjPlayer__sub_801C15E4(&m);
    copy_from__10TObjPlayerFPvPv(&m, arg0);
    bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(&m);
    if (TObjEneHoldEffect__sub_8036C9D8(&m) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(m.slot);
        if (p != NULL && TFontSmallLobby__sub_801AFEE0() != 0 && TLobby__sub_800822E8(p, 0x01000000) == 0 && (m.flags & 0x04000000)) {
            set_state_flags__10TObjPlayerFPvUi(p, m.flags & 0x1C000000);
            TObjPlayer__sub_801D0BC0(p, 0x18, 0);
        }
    }
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
void handle_6x1F_set_player_floor(void *arg0) {
    Msg1F_801BA8D4 m;
    Msg_801BA8D4 m2;
    Msg20_801BA8D4 m3;
    void *p;
    Player_801BA8D4 *pl;
    TObjPlayer__sub_801C17D0(&m);
    handle_6x1F_set_floor__10TObjPlayerFPvPv(&m, arg0);
    TObjPlayer__sub_801C1760(&m);
    if (validate_6x1F_set_player_floor(&m) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(m.slot);
        if (p != NULL) {
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
        }
        pl = update_battle_controller__10TObjPlayerFv();
        if (pl != NULL && (pl == NULL || obj_isState2_324(pl) == 0)) {
            init_cmd_6x20__10TObjPlayerFPv(&m3);
            m3.id = obj_getField1c(pl);
            m3.f4 = get_field_3e4__10TObjPlayerFPv(pl);
            VecCopy__FP3VecPC3Vec(m3.vec, pl->pos);
            m3.ang = pl->ang;
            TObjPlayer__sub_801C172C(&m3);
            if (TFontSmallLobby__sub_801AFEE0() != 0) {
                TObjPlayer__sub_801C15E4(&m2);
                m2.id = obj_getField1c(pl);
                m2.f8 = TObjPlayer__sub_801BEB0C(pl);
                m2.floor = get_floor__10TObjPlayerFPv(pl);
                m2.speed = get_speed__10TObjPlayerFPv(pl);
                TObjPlayer__sub_801C16F0(&m2, m.slot);
            }
        }
    }
}

}
