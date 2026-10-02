#include "types.h"
struct L_801C74BC { u16 f0; u16 f2; s32 f4; };

typedef struct Msg_801C7430 {
    u8 pad0[2];
    u16 slot;
    s32 c;
} Msg_801C7430;

typedef struct Player_801C7430 {
    u8 pad0[0x60];
    s32 dir;
    u8 pad64[0x308 - 0x64];
    u8 vec[12];
} Player_801C7430;

extern "C" {
s32 is_in_tl03_state__10TObjPlayerFPv(void);
s32 get_player_by_client_id(s32);
void get_chair_state__10TObjPlayerFPv(void *, s32);
void swap_endian32__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1194(void *, void *);
void TObjPlayer__sub_801D11D0(void *);
s32 fn_8036B7C0(void *);
void handle_6xAF_turn_or_move_lobby_chair(void *arg0);
void calc_direction_vector__10TObjPlayerFiPvf(s32, void *, f32);
s32 is_in_tl03_state__10TObjPlayerFPv(void);
s32 get_player_by_client_id(s32);
void update_lobby_chair__10TObjPlayerFPv(void *, s32);
void TObjPlayer__sub_801D10D4(void *);
void TObjPlayer__sub_801D1108(void *, void *);
void TObjPlayer__sub_801D1144(void *);
s32 fn_8036B798(void *);
extern const f32 TObjPlayer__data_805DC360;
void handle_6xB0_turn_or_move_lobby_chair(void *arg0);
}

extern "C" {

void handle_6xB0_turn_or_move_lobby_chair(void *arg0) {
    Msg_801C7430 m;
    Player_801C7430 *p;
    TObjPlayer__sub_801D1144(&m);
    TObjPlayer__sub_801D1108(&m, arg0);
    TObjPlayer__sub_801D10D4(&m);
    if (fn_8036B798(&m) != 0) {
        p = ((Player_801C7430 *)get_player_by_client_id((s32)(m.slot)));
        if ((p != NULL) && (is_in_tl03_state__10TObjPlayerFPv() != 0)) {
            update_lobby_chair__10TObjPlayerFPv(p, m.c);
            calc_direction_vector__10TObjPlayerFiPvf(p->dir, p->vec, TObjPlayer__data_805DC360);
        }
    }
}

void handle_6xAF_turn_or_move_lobby_chair(void *arg0) {
    L_801C74BC sp8;
    TObjPlayer__sub_801D11D0(&sp8);
    TObjPlayer__sub_801D1194(&sp8, arg0);
    swap_endian32__10TObjPlayerFPv(&sp8);
    if (fn_8036B7C0(&sp8) != 0) {
        s32 p = get_player_by_client_id(sp8.f2);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv() != 0) {
            get_chair_state__10TObjPlayerFPv((void *)p, sp8.f4);
        }
    }
}

}
