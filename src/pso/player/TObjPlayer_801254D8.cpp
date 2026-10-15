#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 has_game_join_id();
s32 check_hits__14TItemAttackColFPv(void *);
s32 queue_destruction__7TObjectFv(void *);

extern f32 lbl_805DAD50;

void TObjPlayer::run_explosion_collider() {
    f32 temp_f1;
    f32 temp_f1_2;

    if (has_game_join_id() != 0) {
        temp_f1 = *(f32 *)((s8 *)this + 0x40);
        if (temp_f1 < *(f32 *)((s8 *)this + 0xC4)) {
            *(f32 *)((s8 *)this + 0x40) = (f32) (temp_f1 + lbl_805DAD50);
            temp_f1_2 = *(f32 *)((s8 *)this + 0xC4);
            if (temp_f1_2 < *(f32 *)((s8 *)this + 0x40)) {
                *(f32 *)((s8 *)this + 0x40) = temp_f1_2;
            }
        } else {
            queue_destruction__7TObjectFv(this);
        }
        check_hits__14TItemAttackColFPv(this);
    }
}

}
