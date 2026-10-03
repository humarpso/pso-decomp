#include "types.h"
typedef struct Msg_801D0634 {
    u8 pad0[2];
    u16 id;
    s16 flag;
    s16 ang;
    s16 floor;
    s16 room;
    u8 vec[12];
} Msg_801D0634;

typedef struct Player_801D0634 {
    u8 pad0[0x60];
    s32 ang;
} Player_801D0634;

struct Player_801D0724 {
    u8 pad0[0x60];
    s32 ang;
    u8 pad64[0x328 - 0x64];
    s16 f328;
};

extern "C" {
void obj_clearFlags30(void *, u32);
void obj_setFlags30(void *, u32);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
void set__10TObjRoomIdFPvs(void *, s16);
void *get_player_by_client_id(s32 i);
void set_flag_400000__10TObjPlayerFi(void *);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_801C1914(void *);
void TObjPlayer__sub_801C1978(void *);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void TObjPlayer__sub_801D2540(void *, void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x3F_set_position(void *);
void handle_6x3F_set_position(void *arg0);
void obj_clearFlags30(void *, u32);
void obj_setFlags30(void *, u32);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
s32 test_action_mask__10TObjPlayerFPvi(void *, s32);
void bswap_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
void set__10TObjRoomIdFPvs(void *, s16);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32 i);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
void TObjPlayer__sub_801D25AC(void *, void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x3E_stop_at_position(void *);
void handle_6x3E_stop_at_position(void *arg0);
}

extern "C" {

void handle_6x3F_set_position(void *arg0) {
    Msg_801D0634 m;
    Player_801D0634 *p;
    TObjPlayer__sub_801C1978(&m);
    TObjPlayer__sub_801D2540(&m, arg0);
    TObjPlayer__sub_801C1914(&m);
    if (validate_6x3F_set_position(&m) != 0) {
        p = (Player_801D0634 *)get_player_by_client_id(m.id);
        if (p != NULL) {
            TBoss4DarkFalz__sub_8004C220(p, m.vec);
            set_flag_400000__10TObjPlayerFi(p);
            if (m.floor >= 0) {
                set_floor__10TObjPlayerFPvi(p, m.floor);
                set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            }
            if (m.room >= 0) {
                set__10TObjRoomIdFPvs(p, m.room);
            }
            p->ang = m.ang;
            if (m.flag != 1) {
                obj_clearFlags30(p, 0x100000);
            } else {
                obj_setFlags30(p, 0x100000);
            }
            run_action_state_phase__10TObjPlayerFisi(p, 1, 0);
        }
    }
}
void handle_6x3E_stop_at_position(void *arg0) {
    Msg_801D0634 m;
    Player_801D0724 *p;
    init_6x3E_packet__10TNpcPlayerFPv(&m);
    TObjPlayer__sub_801D25AC(&m, arg0);
    bswap_6x3E__10TNpcPlayerFi(&m);
    if (validate_6x3E_stop_at_position(&m) == 0) {
        return;
    }
    p = (Player_801D0724 *)get_player_by_client_id(m.id);
    if (p == NULL) {
        return;
    }
    TBoss4DarkFalz__sub_8004C220(p, m.vec);
    if (m.floor >= 0) {
        set_floor__10TObjPlayerFPvi(p, m.floor);
        set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
    }
    p->ang = m.ang;
    if (is_in_tl03_state__10TObjPlayerFPv(p) == 0 || test_action_mask__10TObjPlayerFPvi(p, 0x8100) != 0 ||
        (test_action_mask__10TObjPlayerFPvi(p, 0x200) != 0 && p->f328 <= 2) ||
        (test_action_mask__10TObjPlayerFPvi(p, 0x4000) != 0 && p->f328 == 0)) {
        return;
    }
    if (m.room >= 0) {
        set__10TObjRoomIdFPvs(p, m.room);
    }
    switch (m.flag) {
    case 0:
        obj_clearFlags30(p, 0x100000);
        break;
    case 1:
        obj_setFlags30(p, 0x100000);
        break;
    }
    run_action_state_phase__10TObjPlayerFisi(p, 1, 0);
}

}
