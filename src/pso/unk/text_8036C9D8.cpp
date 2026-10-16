#include "types.h"
#include "pso/protocol/subcmd_6x.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
struct LobbyAnimationState { G_ClientIDHeader header; s16 animation_number; u16 unused; u32 player_flags; f32 animation_timer; };

extern "C" {
s32 is_matching_id__6TLobbyFlUs(void *, u16);
s32 get_player_by_client_id(u16);
s32 is_action_id_none(s16);
extern f32 lbl_805E03A8;
s32 validate_6xAE_set_animation_state(LobbyAnimationState *arg0);
}

extern "C" {

s32 validate_6xAE_set_animation_state(LobbyAnimationState *arg0) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(arg0->header.client_id);
    if (temp_r3 == 0) {
        return 0;
    }
    if (is_matching_id__6TLobbyFlUs(arg0, arg0->header.client_id) != 0) {
        return 0;
    }
    if (((is_action_id_none(arg0->animation_number) == 0) && (arg0->animation_number < 0)) || (arg0->animation_number >= TLobby::get_hold_effect_size_by_type())) {
        return 0;
    }
    if ((arg0->animation_timer < lbl_805E03A8) || (arg0->animation_timer >= ((TObjPlayer *)temp_r3)->get_table_value_f32(arg0->animation_number))) {
        return 0;
    }
    return 1;
}

}
