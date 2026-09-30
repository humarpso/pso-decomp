#include "types.h"
typedef struct Msg_801BAA6C {
    u8 pad0[2];
    u16 slot;
    s32 floor;
} Msg_801BAA6C;

struct Msg_801BAB1C { u16 cmd; u16 id; s32 value; u8 pad8[8]; };

extern "C" {
s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
void TObjPlayer__sub_801C1890(void *m);
s32 get_field_3e4__10TObjPlayerFPv(void *);
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_801C1820(void *);
void copy_warp_target__10TObjPlayerFPvPv(void *, void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x21_inter_level_warp(void *);
void handle_6x21_inter_level_warp(void *arg0);
void TObjPlayer__sub_801C18AC(Msg_801BAB1C *m);
void TTecLuker__sub_801BAB1C(void *obj, s32 value);
}

extern "C" {

void handle_6x21_inter_level_warp(void *arg0) {
    Msg_801BAA6C m;
    void *p;

    TObjPlayer__sub_801C1890(&m);
    copy_warp_target__10TObjPlayerFPvPv(&m, arg0);
    TObjPlayer__sub_801C1820(&m);
    if (validate_6x21_inter_level_warp(&m) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(m.slot);
        if (p != NULL) {
            if ((((s32 (*)(void))obj_isState2_324)() != 0) && (m.floor != get_field_3e4__10TObjPlayerFPv(p))) {
                set_state_flags__10TObjPlayerFPvUi(p, 0x40000);
            }
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
        }
    }
}

void TTecLuker__sub_801BAB1C(void *obj, s32 value) {
    if (obj == 0 || obj_isState2_324(obj) == 0) {
        Msg_801BAB1C m;
        TObjPlayer__sub_801C1890(&m);
        m.id = obj_getField1c(obj);
        m.value = value;
        TObjPlayer__sub_801C18AC(&m);
    }
}

}
