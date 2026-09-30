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

extern "C" {
void obj_clearFlags30(void *, u32);
void obj_setFlags30(void *, u32);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
void set__10TObjRoomIdFPvs(void *, s16);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 i);
void set_flag_400000__10TObjPlayerFi(void *);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_801C1914(void *);
void TObjPlayer__sub_801C1978(void *);
void TObjPlayer__sub_801D0BC0(void *, s32, s32);
void TObjPlayer__sub_801D2540(void *, void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x3F_set_position(void *);
void handle_6x3F_set_position(void *arg0);
}

extern "C" {

void handle_6x3F_set_position(void *arg0) {
    Msg_801D0634 m;
    Player_801D0634 *p;
    TObjPlayer__sub_801C1978(&m);
    TObjPlayer__sub_801D2540(&m, arg0);
    TObjPlayer__sub_801C1914(&m);
    if (validate_6x3F_set_position(&m) != 0) {
        p = (Player_801D0634 *)TPlayerBattleCtrl4P__sub_801BA74C(m.id);
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
            TObjPlayer__sub_801D0BC0(p, 1, 0);
        }
    }
}

}
