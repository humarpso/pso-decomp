#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 save_position__14TBoss4DarkFalzFv(void *);
s32 set_position_from__14TBoss4DarkFalzFPv(void *, s32);
s32 calc_attach_pos__10TObjPlayerFv(void *);
s32 set_position_history_entry__10TObjPlayerFiiff(void *, s32, f32, f32);

void TObjPlayer::update_position(s32 arg1) {
    set_position_from__14TBoss4DarkFalzFPv(this, arg1 + 8);
    save_position__14TBoss4DarkFalzFv(this);
    calc_attach_pos__10TObjPlayerFv(this);
    set_position_history_entry__10TObjPlayerFiiff(this, 0, *(f32 *)((s8 *)this + 0x38), *(f32 *)((s8 *)this + 0x40));
}

}
