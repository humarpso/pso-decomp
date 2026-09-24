#include "types.h"
struct Cmd_801CF780 { u16 hdr; u16 id; f32 x; f32 z; };

struct Player_801CF780 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; };

extern "C" {
void reset_move_state__10TNpcPlayerFPv(void *cmd);
void *TObjPlayer__sub_801D2964(void *arg0, void *arg1);
void init_model__10TNpcPlayerFPv(void *cmd);
s32 validate_6x42_move_to_position(void *cmd);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32 id);
s32 is_in_tl03_state__10TObjPlayerFPv(void *p);
s32 TLobby__sub_800822E8(void *obj, s32 id);
void TObjPlayer__sub_801D0BC0(void *obj, s16 a, s32 b);
void handle_6x42_move_to_position(void *pkt);
}

extern "C" {

void handle_6x42_move_to_position(void *pkt) {
    Cmd_801CF780 cmd;
    Player_801CF780 *p;
    reset_move_state__10TNpcPlayerFPv(&cmd);
    TObjPlayer__sub_801D2964(&cmd, pkt);
    init_model__10TNpcPlayerFPv(&cmd);
    if (validate_6x42_move_to_position(&cmd) != 0) {
        p = (Player_801CF780 *)TPlayerBattleCtrl4P__sub_801BA74C(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && TLobby__sub_800822E8(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            TObjPlayer__sub_801D0BC0(p, 4, 0);
        }
    }
}

}
