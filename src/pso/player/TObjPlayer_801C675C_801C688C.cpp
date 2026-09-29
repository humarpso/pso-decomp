#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/player/TObjPlayer.h"

extern "C" {
TObjPlayer* TPlayerBattleCtrl4P__sub_801BA74C(int);
int obj_isState2_324(TObjPlayer*);
u16 get_obj_type__10TObjPlayerFPv(PlayerScaleState*);
void init_shrink_effect__10TObjPlayerFPv(PlayerShrinkPacket*);
void update_and_send_60__10TObjPlayerFPv(PlayerShrinkPacket*);
extern s32 lbl_805D53A0;
void request_player_shrink(PlayerScaleState* state);
TObjPlayer* TPlayerBattleCtrl4P__sub_801BA74C(int);
int obj_isState2_324(TObjPlayer*);
u16 get_obj_type__10TObjPlayerFPv(PlayerScaleState*);
void init_6x88_packet__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void send_font_update_60__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void request_player_size_restore(PlayerScaleState* state);
TObjPlayer* TPlayerBattleCtrl4P__sub_801BA74C(int);
int check_camera_mode__10TObjPlayerFv();
void init_shrink_effect__10TObjPlayerFPv(PlayerShrinkPacket*);
void TObjPlayer__sub_801C7360(PlayerShrinkPacket*, const PlayerShrinkPacket*);
void bswap_shrink__10TObjPlayerFPv(PlayerShrinkPacket*);
int validate_6x87_shrink_player(PlayerShrinkPacket*);
void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
void handle_6x87_shrink_player(const PlayerShrinkPacket* input);
TObjPlayer* TPlayerBattleCtrl4P__sub_801BA74C(int);
int check_camera_mode__10TObjPlayerFv();
void init_6x88_packet__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void restore_shrunken_font__10TObjPlayerFPv(PlayerRestoreSizePacket*, const PlayerRestoreSizePacket*);
void TFontSmallLobby__sub_801C01BC(PlayerRestoreSizePacket*);
int validate_6x88_restore_shrunken_player(PlayerRestoreSizePacket*);
int clear_shrink_flag__10TObjPlayerFPv(void* p);
void handle_6x88_restore_shrunken_player(const PlayerRestoreSizePacket* input);
f32 get_stat_f32__8TItemMagFPv(PlayerScaleState*);
f32* TObjPlayer__sub_801C6FDC(f32*);
void TObjPlayer__sub_801C6FE0(f32*, f32, f32, f32);
void TCameraCtrl__sub_8006D2B0(f32*, f32*, u16);
extern const f32 lbl_805DC32C, lbl_805DC344, lbl_805DC348, lbl_805DC34C, lbl_805DC350, lbl_805DC354;
void update_player_scale_camera(PlayerScaleState *state);
}

extern "C" {

void apply_stat_multipliers_default__10TObjPlayerFv(void);
int clear_shrink_flag__10TObjPlayerFPv(void* p);
void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0);
M2C_UNK apply_stat_multipliers__10TObjPlayerFiif(f32);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_ring_action__10TObjPlayerFPvi(s32, M2C_UNK);
M2C_UNK set_stat_scale__10TObjPlayerFPvf(f32);

extern const f32 lbl_805DC320;

void apply_stat_multipliers_default__10TObjPlayerFv(void) {
    apply_stat_multipliers__10TObjPlayerFiif(lbl_805DC320);
}

extern const f32 lbl_805DC320;

void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0) {
    set_stat_scale__10TObjPlayerFPvf(lbl_805DC320);
    set_ring_action__10TObjPlayerFPvi(arg0, 0);
}

void update_player_scale_camera(PlayerScaleState *state) {
  f32 z = lbl_805DC34C * get_stat_f32__8TItemMagFPv(state);
  TObjPlayer__sub_801C6FE0(state->camera_position, lbl_805DC32C, lbl_805DC344 * (lbl_805DC348 * get_stat_f32__8TItemMagFPv(state)), z);
  TObjPlayer__sub_801C6FE0(state->camera_target, lbl_805DC32C, lbl_805DC350 * get_stat_f32__8TItemMagFPv(state), lbl_805DC354);
  TCameraCtrl__sub_8006D2B0(TObjPlayer__sub_801C6FDC(state->camera_target), TObjPlayer__sub_801C6FDC(state->camera_position), 0xFFFF);
}

void handle_6x88_restore_shrunken_player(const PlayerRestoreSizePacket* input) {
    PlayerRestoreSizePacket packet;
    init_6x88_packet__10TObjPlayerFPv(&packet);
    restore_shrunken_font__10TObjPlayerFPv(&packet, input);
    TFontSmallLobby__sub_801C01BC(&packet);
    if (validate_6x88_restore_shrunken_player(&packet)) {
        TObjPlayer* player = TPlayerBattleCtrl4P__sub_801BA74C(packet.actor_id);
        if (player && check_camera_mode__10TObjPlayerFv())
            clear_shrink_flag__10TObjPlayerFPv((void*)(&player->scale_state));
    }
}

int clear_shrink_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x4, 1); }

void request_player_size_restore(PlayerScaleState* state) {
    TObjPlayer* player = TPlayerBattleCtrl4P__sub_801BA74C(get_obj_type__10TObjPlayerFPv(state));
    if (!player || !obj_isState2_324(player)) {
        PlayerRestoreSizePacket packet;
        init_6x88_packet__10TObjPlayerFPv(&packet);
        packet.actor_id = get_obj_type__10TObjPlayerFPv(state);
        send_font_update_60__10TObjPlayerFPv(&packet);
    }
}

void handle_6x87_shrink_player(const PlayerShrinkPacket* input) {
    PlayerShrinkPacket packet;
    init_shrink_effect__10TObjPlayerFPv(&packet);
    TObjPlayer__sub_801C7360(&packet, input);
    bswap_shrink__10TObjPlayerFPv(&packet);
    if (validate_6x87_shrink_player(&packet)) {
        TObjPlayer* player = TPlayerBattleCtrl4P__sub_801BA74C(packet.actor_id);
        if (player && check_camera_mode__10TObjPlayerFv())
            handle_6x87_shrink__10TObjPlayerFPvf((u8 *)(&player->scale_state), packet.scalar);
    }
}

void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0) {
    set_flags__10TObjPlayerFPvUi(arg0 + 4, 1);
    M2C_FIELD(arg0, f32 *, 8) = farg0;
}
void request_player_shrink(PlayerScaleState* state) {
    TObjPlayer* player = TPlayerBattleCtrl4P__sub_801BA74C(get_obj_type__10TObjPlayerFPv(state));
    if (!player || !obj_isState2_324(player)) {
        if (lbl_805D53A0 == get_obj_type__10TObjPlayerFPv(state))
            update_player_scale_camera((PlayerScaleState *)(state));
        PlayerShrinkPacket packet;
        init_shrink_effect__10TObjPlayerFPv(&packet);
        packet.actor_id = get_obj_type__10TObjPlayerFPv(state);
        packet.scalar = state->scalar;
        update_and_send_60__10TObjPlayerFPv(&packet);
    }
}

}
