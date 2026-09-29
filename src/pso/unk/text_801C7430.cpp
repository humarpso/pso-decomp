#include "types.h"
struct L_801C74BC { u16 f0; u16 f2; s32 f4; };

extern "C" {
s32 is_in_tl03_state__10TObjPlayerFPv(void);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void get_chair_state__10TObjPlayerFPv(void *, s32);
void swap_endian32__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1194(void *, void *);
void TObjPlayer__sub_801D11D0(void *);
s32 fn_8036B7C0(void *);
void handle_6xAF_turn_or_move_lobby_chair(void *arg0);
}

extern "C" {

void handle_6xAF_turn_or_move_lobby_chair(void *arg0) {
    L_801C74BC sp8;
    TObjPlayer__sub_801D11D0(&sp8);
    TObjPlayer__sub_801D1194(&sp8, arg0);
    swap_endian32__10TObjPlayerFPv(&sp8);
    if (fn_8036B7C0(&sp8) != 0) {
        s32 p = TPlayerBattleCtrl4P__sub_801BA74C(sp8.f2);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv() != 0) {
            get_chair_state__10TObjPlayerFPv((void *)p, sp8.f4);
        }
    }
}

}
