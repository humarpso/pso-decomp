#include "types.h"
struct Cmd_801D0000 { u16 hdr; u16 id; f32 x; f32 z; s32 state; };

struct Player_801D0000 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; u8 pad404[0x5EC - 0x404]; u8 luker[4]; };

typedef struct Msg_801D00B0 {
    u8 pad0[2];
    s16 f2;
    f32 x;
    f32 z;
    s32 v;
} Msg_801D00B0;

typedef struct Npc_801D00B0 {
    u8 pad0[0x3F0];
    s32 f3f0;
    u8 pad3f4[4];
    f32 x;
    u8 pad3fc[4];
    f32 z;
    u8 pad404[0x5EC - 0x404];
    u8 sub[4];
} Npc_801D00B0;

extern "C" {
void TNpcPlayer__sub_80152E74(void *cmd);
void *TObjPlayer__sub_801D24F4(void *arg0, void *arg1);
void swap_endian__10TNpcPlayerFPv(void *cmd);
s32 validate_6x40_walk_to_position(void *cmd);
void *get_player_by_client_id(s32 id);
s32 is_in_tl03_state__10TObjPlayerFPv(void *p);
s32 TLobby__sub_800822E8(void *obj, s32 id);
void set_state__9TTecLukerFPvi(void *p, s32 state);
void run_action_state_phase__10TObjPlayerFisi(void *obj, s16 a, s32 b);
void handle_6x40_walk_to_position(void *pkt);
s32 obj_isState2_324(void *);
s32 obj_testFlags30(void *, s32);
s16 obj_getField1c(void *);
void set_flags__10TObjPlayerFPvUi(void *, u32);
void clear_id__10TObjPlayerFPv(void *);
void sync_from_lobby__10TNpcPlayerFPv(void *);
void TNpcPlayer__sub_80152E74(void *cmd);
s32 TObjPlayer__sub_801BFFA0(void *);
s32 update_combat_stats__10TObjPlayerFPv();
void calc_movement_target__10TObjPlayerFPviPvPv(void *, s32, void *, void *);
void TObjPlayer__sub_801D00B0(Npc_801D00B0 *arg0);
}

extern "C" {

void handle_6x40_walk_to_position(void *pkt) {
    Cmd_801D0000 cmd;
    Player_801D0000 *p;
    TNpcPlayer__sub_80152E74(&cmd);
    TObjPlayer__sub_801D24F4(&cmd, pkt);
    swap_endian__10TNpcPlayerFPv(&cmd);
    if (validate_6x40_walk_to_position(&cmd) != 0) {
        p = (Player_801D0000 *)get_player_by_client_id(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && TLobby__sub_800822E8(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            set_state__9TTecLukerFPvi(p->luker, cmd.state);
            run_action_state_phase__10TObjPlayerFisi(p, 2, 0);
        }
    }
}
void TObjPlayer__sub_801D00B0(Npc_801D00B0 *arg0) {
    Msg_801D00B0 m;
    if (update_combat_stats__10TObjPlayerFPv() != 0) {
        calc_movement_target__10TObjPlayerFPviPvPv(arg0, arg0->f3f0, &arg0->x, &arg0->z);
        clear_id__10TObjPlayerFPv(arg0->sub);
        if (obj_testFlags30(arg0, 0x100000) != 0) {
            set_flags__10TObjPlayerFPvUi(arg0->sub, 8);
        }
        if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
            TNpcPlayer__sub_80152E74(&m);
            m.f2 = obj_getField1c(arg0);
            m.x = arg0->x;
            m.z = arg0->z;
            m.v = TObjPlayer__sub_801BFFA0(arg0->sub);
            sync_from_lobby__10TNpcPlayerFPv(&m);
        }
    }
}

}
