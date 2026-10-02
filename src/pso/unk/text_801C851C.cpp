#include "types.h"
typedef struct Msg_801C851C {
    u8 pad0[2];
    u16 slot;
    s16 c;
} Msg_801C851C;

typedef struct Player_801C851C {
    u8 pad0[0x3C0];
    s16 anim;
} Player_801C851C;

extern "C" {
s32 is_in_tl03_state__10TObjPlayerFPv();
Player_801C851C *get_player_by_client_id(u16);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void set_anim_flag__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D1360(void *);
void bswap_packet__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D13A8(void *, void *);
void TObjPlayer__sub_801D13EC(void *);
s32 validate_6x58_lobby_animation(void *);
void handle_6x58_lobby_animation(void *arg0);
}

extern "C" {

void handle_6x58_lobby_animation(void *arg0) {
    Msg_801C851C m;
    Player_801C851C *p;
    TObjPlayer__sub_801D13EC(&m);
    TObjPlayer__sub_801D13A8(&m, arg0);
    bswap_packet__10TObjPlayerFPv(&m);
    if (validate_6x58_lobby_animation(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if ((p != NULL) && (is_in_tl03_state__10TObjPlayerFPv() != 0)) {
            p->anim = m.c;
            if (TObjPlayer__sub_801D1360(&m) != 0) {
                set_anim_flag__10TObjPlayerFPv(p);
            }
            run_action_state_phase__10TObjPlayerFisi(p, 0x17, 0);
        }
    }
}

}
