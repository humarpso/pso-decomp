#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 recalc_combat_stats__10TObjPlayerFv(void *, void *, void *, void *, f32, f32);
s32 init_trait_flags__10TObjPlayerFPv(void *);
s32 get_class_attack_template(void *);
s32 get_class_defense_template(void *);
s32 apply_input_mode__10TObjPlayerFi(void *);
s32 copy_data__6TLobbyFPvPv(void *);
s32 set_move_mode__10TObjPlayerFi(void *);

extern const f32 TObjPlayer__data_805DC28C;

void TObjPlayer::init_player_data() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = this->m_d48;
    copy_data__6TLobbyFPvPv(arg0 + 0xD38);
    this->m_d48 = temp_f31;
    *(void * *)&this->m_2b0 = (void *) (arg0 + 0xD38);
    apply_input_mode__10TObjPlayerFi(arg0);
    set_move_mode__10TObjPlayerFi(arg0);
    init_trait_flags__10TObjPlayerFPv(arg0);
    ((TLobby *)(arg0 + 0xD5C))->copy_from((void *)(get_class_attack_template(arg0)));
    ((TLobby *)(arg0 + 0xD8C))->copy_entry((void *)(get_class_defense_template(arg0)));
    temp_f31_2 = ((TObjPlayer *)arg0)->get_tp_class_factor();
    recalc_combat_stats__10TObjPlayerFv(arg0, *(void * *)&this->m_2b0, arg0 + 0xD5C, arg0 + 0xD8C, ((TObjPlayer *)arg0)->get_class_hp_factor(), temp_f31_2);
    *(f32 *)((s8 *)(*(void * *)&this->m_a4) + 4) = (f32) (TObjPlayer__data_805DC28C * *(f32 *)((s8 *)(*(void * *)&this->m_2b0) + 0x10));
}

}
