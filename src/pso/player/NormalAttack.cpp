#include "types.h"
#include "pso/player/TObjPlayer.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801CF128 { u8 cmd; u8 size; u16 player; s16 heading; s16 kind; };

extern "C" {
M2C_UNK TNpcPlayer__sub_80152C28(void *);
void TObjPlayer__sub_801D24B0(Pkt_801CF128 *, void *);
void bswap_6x43_packet(Pkt_801CF128 *);
s32 validate_6x43_attack(Pkt_801CF128 *);
u8 *get_player_by_client_id(u16);
s32 is_in_tl03_state__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
s32 TLobby__sub_800822E8(void *, s32);
void set_action_type__10TObjPlayerFPvs(void *p, s16 v);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
void handle_6x43_attack(void *src);
}

extern "C" {

void enter_attack_stage1__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_80152C28(void *);
M2C_UNK TObjPlayer__sub_8001053C(void *);
M2C_UNK TObjPlayer__sub_801CE3EC(void *);
s32 TObjPlayer__sub_801CEAC8();
void TObjPlayer__sub_801CF2AC(void);
int TObjPlayer__sub_801CF3C0(void* p);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
f32 TObjPlayer__sub_801D2640(void *);
f32 TObjPlayer__sub_801D2CDC(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
s32 queue_physical_attack_input(s32, s32, s32, s32);
M2C_UNK begin_player_attack(void *, void *, int, int);
s32 get_first_target_position__10TObjPlayerFPvPv(void *, void *);
u32 capture_lockon_targets(void *, void *);
M2C_UNK apply_speed_scale__10TObjPlayerFif(void *, f32);
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
s16 calc_scaled_value__10TObjPlayerFii(void *, int);
s32 call_subobject_m15__10TObjPlayerFPv(void *);
void *get_position_ptr__10TObjPlayerFPv(void *);
s16 obj_getField1c(void *);
s32 obj_isState2_324(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, void *);
int try_apply_status_action__10TObjPlayerFi(void*);
M2C_UNK update_lobby__10TNpcPlayerFPv(void *);

void enter_attack_stage1__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 5;
    run_action_state_phase__10TObjPlayerFisi((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0x326)), (int) (6));
    TObjPlayer__sub_8001053C((void *) (arg0));
    begin_player_attack((void *) (arg0 + 0x7CC), (void *) (arg0), (int) (0), (int) (0));
    TObjPlayer__sub_801CE3EC((void *) (arg0));
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (5), (void *) (call_subobject_m15__10TObjPlayerFPv((void *) (arg0))));
    apply_speed_scale__10TObjPlayerFif((void *) (arg0), (f32) (TObjPlayer__sub_801D2640((void *) (arg0)) * TObjPlayer__sub_801D2CDC((void *) (arg0 + 0x7CC))));
}
void handle_6x43_attack(void *src) {
    Pkt_801CF128 pkt;
    u8 *player;
    TNpcPlayer__sub_80152C28(&pkt);
    TObjPlayer__sub_801D24B0(&pkt, src);
    bswap_6x43_packet(&pkt);
    if (validate_6x43_attack(&pkt) == 0) return;
    player = get_player_by_client_id(pkt.player);
    if (player == 0) return;
    if (is_in_tl03_state__10TObjPlayerFPv(player) == 0) return;
    if (reset_volopt_state__10TObjPlayerFv(player) == 0) return;
    if (TLobby__sub_800822E8(player, 0x8200) != 0) return;
    set_action_type__10TObjPlayerFPvs(player + 0x7CC, pkt.kind);
    *(s32 *)(player + 0x3F0) = pkt.heading;
    run_action_state_phase__10TObjPlayerFisi(player, 5, 0);
}

}

void TObjPlayer::request_normal_attack_stage1() {
    u8* arg0 = reinterpret_cast<u8*>(this);
    f32 sp10[3];
    s16 sp8[4];
    s16 temp_r31;
    s32 var_r4;
    if ((reset_volopt_state__10TObjPlayerFv(arg0) != 0) && (capture_lockon_targets((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) {
        if (get_first_target_position__10TObjPlayerFPvPv((void *) (arg0 + 0x7CC), (void *) (&sp10)) != 0) {
            var_r4 = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(arg0), sp10);
        } else {
            var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        temp_r31 = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (var_r4));
        if ((arg0 == NULL) || (obj_isState2_324((void *) (arg0)) == 0)) {
            TNpcPlayer__sub_80152C28((void *) (&sp8));
            sp8[1] = obj_getField1c((void *) (arg0));
            sp8[2] = temp_r31;
            sp8[3] = TObjPlayer__sub_801D2F4C((void *) (arg0 + 0x7CC));
            update_lobby__10TNpcPlayerFPv((void *) (&sp8));
        }
    }
}
