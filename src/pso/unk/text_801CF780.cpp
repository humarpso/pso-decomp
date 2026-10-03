#include "types.h"
struct Cmd_801CF780 { u16 hdr; u16 id; f32 x; f32 z; };

struct Player_801CF780 { u8 pad[0x3F8]; f32 x; u8 pad3fc[4]; f32 z; };

typedef struct Msg_801CF824 {
    u8 pad0[2];
    s16 f2;
    f32 x;
    f32 z;
} Msg_801CF824;

typedef struct Npc_801CF824 {
    u8 pad0[0x3F0];
    s32 f3f0;
    u8 pad3f4[4];
    f32 x;
    u8 pad3fc[4];
    f32 z;
} Npc_801CF824;

extern "C" {
void reset_move_state__10TNpcPlayerFPv(void *cmd);
void *TObjPlayer__sub_801D2964(void *arg0, void *arg1);
void init_model__10TNpcPlayerFPv(void *cmd);
s32 validate_6x42_move_to_position(void *cmd);
void *get_player_by_client_id(s32 id);
s32 is_in_tl03_state__10TObjPlayerFPv(void *p);
s32 test_action_mask__10TObjPlayerFPvi(void *obj, s32 id);
void run_action_state_phase__10TObjPlayerFisi(void *obj, s16 a, s32 b);
void handle_6x42_move_to_position(void *pkt);
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
void reset_model__10TNpcPlayerFPv(void *);
void reset_move_state__10TNpcPlayerFPv(void *cmd);
s32 update_aim_target__10TObjPlayerFPv();
void calc_movement_target__10TObjPlayerFPviPvPv(void *, s32, void *, void *);
void send_6x42_run_to_position__10TObjPlayerFPv(Npc_801CF824 *arg0);
}

extern "C" {

void handle_6x42_move_to_position(void *pkt) {
    Cmd_801CF780 cmd;
    Player_801CF780 *p;
    reset_move_state__10TNpcPlayerFPv(&cmd);
    TObjPlayer__sub_801D2964(&cmd, pkt);
    init_model__10TNpcPlayerFPv(&cmd);
    if (validate_6x42_move_to_position(&cmd) != 0) {
        p = (Player_801CF780 *)get_player_by_client_id(cmd.id);
        if (p != 0 && is_in_tl03_state__10TObjPlayerFPv(p) != 0 && test_action_mask__10TObjPlayerFPvi(p, 0x1E) != 0) {
            p->x = cmd.x;
            p->z = cmd.z;
            run_action_state_phase__10TObjPlayerFisi(p, 4, 0);
        }
    }
}
void send_6x42_run_to_position__10TObjPlayerFPv(Npc_801CF824 *arg0) {
    Msg_801CF824 m;
    if (update_aim_target__10TObjPlayerFPv() != 0) {
        calc_movement_target__10TObjPlayerFPviPvPv(arg0, arg0->f3f0, &arg0->x, &arg0->z);
        if ((arg0 == NULL) || (obj_isState2_324(arg0) == 0)) {
            reset_move_state__10TNpcPlayerFPv(&m);
            m.f2 = obj_getField1c(arg0);
            m.x = arg0->x;
            m.z = arg0->z;
            reset_model__10TNpcPlayerFPv(&m);
        }
    }
}

}
