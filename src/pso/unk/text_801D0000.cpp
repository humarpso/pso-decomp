#include "types.h"
struct Cmd_801D0000 { u16 hdr; u16 id; f32 x; f32 z; s32 state; };

struct Player_801D0000 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; u8 pad404[0x5EC - 0x404]; u8 luker[4]; };

extern "C" {
void TNpcPlayer__sub_80152E74(void *cmd);
void *TObjPlayer__sub_801D24F4(void *arg0, void *arg1);
void swap_endian__10TNpcPlayerFPv(void *cmd);
s32 validate_6x40_walk_to_position(void *cmd);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 id);
s32 is_in_tl03_state__10TObjPlayerFPv(void *p);
s32 TLobby__sub_800822E8(void *obj, s32 id);
void set_state__9TTecLukerFPvi(void *p, s32 state);
void TObjPlayer__sub_801D0BC0(void *obj, s16 a, s32 b);
void handle_6x40_walk_to_position(void *pkt);
}

extern "C" {

void handle_6x40_walk_to_position(void *pkt) {
    Cmd_801D0000 cmd;
    Player_801D0000 *p;
    TNpcPlayer__sub_80152E74(&cmd);
    TObjPlayer__sub_801D24F4(&cmd, pkt);
    swap_endian__10TNpcPlayerFPv(&cmd);
    if (validate_6x40_walk_to_position(&cmd) != 0) {
        p = (Player_801D0000 *)TPlayerBattleCtrl4P__sub_801BA74C(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && TLobby__sub_800822E8(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            set_state__9TTecLukerFPvi(p->luker, cmd.state);
            TObjPlayer__sub_801D0BC0(p, 2, 0);
        }
    }
}

}
