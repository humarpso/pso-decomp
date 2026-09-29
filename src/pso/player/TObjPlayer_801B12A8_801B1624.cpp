#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct pkt_801B1674 {
    u8 hdr[2];
    u16 player_id;
};

extern "C" {
void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0);
s32 update_small_font__10TObjPlayerFi(s32 arg0, void *arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK fn_801C0558(M2C_UNK *);
s32 validate_6x1C_disable_pk_mode_for_player(void *);
void handle_6x1C_disable_pk_mode_for_player(void *arg0);
void set_state_flag_6043__10TObjPlayerFPv(u8 *arg0);
s32 draw_font__10TObjPlayerFPv(s32 arg0, void *arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
void TFontSmallLobby__sub_801C01BC(void *);
M2C_UNK fn_801C05A0(M2C_UNK *);
s32 validate_6x1B_enable_pk_mode_for_player(void *);
s32 draw_font__10TObjPlayerFPv(s32 arg0, void * _w1);
void handle_6x1B_enable_pk_mode_for_player(void *arg0);
}

extern "C" {

void send_item_pickup_request__10TObjPlayerFi(s32 arg0);
void set_state_flag_6043__10TObjPlayerFPv(u8 *arg0);
void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK fn_801C0558(M2C_UNK *);
M2C_UNK fn_801C056C(M2C_UNK *);
M2C_UNK fn_801C19E8(void *);
M2C_UNK fn_801C19F4(void *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();
s32 obj_isState3_324();

void set_state_flag_604B__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState3_324() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x604B;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x200B;
    }
    fn_801C19E8(arg0 + 0x828);
}

void handle_6x1C_disable_pk_mode_for_player(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C0558((M2C_UNK *)(&pkt));
    update_small_font__10TObjPlayerFi((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x1C_disable_pk_mode_for_player(&pkt) != 0) {
        u8 *p = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(pkt.player_id);
        if (p != NULL) {
            set_state_flag_604B__10TObjPlayerFPv(p);
        }
    }
}

s32 update_small_font__10TObjPlayerFi(s32 arg0, void * _w1) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_item_pickup_request__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801C0558((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        fn_801C056C((M2C_UNK *)&sp8);
    }
}

void set_state_flag_6043__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState3_324() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x6043;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x2003;
    }
    fn_801C19F4(arg0 + 0x828);
}
void handle_6x1B_enable_pk_mode_for_player(void *arg0) {
    struct pkt_801B1674 pkt;
    fn_801C05A0((M2C_UNK *)(&pkt));
    draw_font__10TObjPlayerFPv((s32)((s32) &pkt), (void *)(arg0));
    TFontSmallLobby__sub_801C01BC(&pkt);
    if (validate_6x1B_enable_pk_mode_for_player(&pkt) != 0) {
        u8 *p = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(pkt.player_id);
        if (p != NULL) {
            set_state_flag_6043__10TObjPlayerFPv(p);
        }
    }
}

}
