#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 recalc_combat_stats__10TObjPlayerFv(void *, void *, void *, void *, f32, f32);
s32 init_trait_flags__10TObjPlayerFPv(void *);
s32 get_class_attack_template(void *);
s32 get_class_defense_template(void *);
f32 get_tp_class_factor__10TObjPlayerFv(void *);
f32 get_class_hp_factor__10TObjPlayerFv(void *);
s32 apply_input_mode__10TObjPlayerFi(void *);
s32 copy_data__6TLobbyFPvPv(void *);
s32 copy_entry__6TLobbyFPv(void *, s32);
s32 copy_from__6TLobbyFPv(void *, s32);
s32 set_move_mode__10TObjPlayerFi(void *);

extern const f32 TObjPlayer__data_805DC28C;

void TObjPlayer::init_player_data() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = *(f32 *)((s8 *)arg0 + 0xD48);
    copy_data__6TLobbyFPvPv(arg0 + 0xD38);
    *(f32 *)((s8 *)arg0 + 0xD48) = temp_f31;
    *(void **)((s8 *)arg0 + 0x2B0) = (void *) (arg0 + 0xD38);
    apply_input_mode__10TObjPlayerFi(arg0);
    set_move_mode__10TObjPlayerFi(arg0);
    init_trait_flags__10TObjPlayerFPv(arg0);
    copy_from__6TLobbyFPv(arg0 + 0xD5C, get_class_attack_template(arg0));
    copy_entry__6TLobbyFPv(arg0 + 0xD8C, get_class_defense_template(arg0));
    temp_f31_2 = get_tp_class_factor__10TObjPlayerFv(arg0);
    recalc_combat_stats__10TObjPlayerFv(arg0, *(void **)((s8 *)arg0 + 0x2B0), arg0 + 0xD5C, arg0 + 0xD8C, get_class_hp_factor__10TObjPlayerFv(arg0), temp_f31_2);
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 4) = (f32) (TObjPlayer__data_805DC28C * *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x2B0)) + 0x10));
}

}
