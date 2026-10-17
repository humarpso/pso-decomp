#include "types.h"
#include "pso/misc/TOTrapAncient01_80226534.h"
#include "pso/unk/text_80362164.h"
#include "pso/unk/TObjEneEpsilonBody.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneEpsilonGuard.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 transition_enemy_state(void *, int);
void TObjEneEpsilonBody::run_task() {
    if (TObjPlayer::check_demo_mode() != 0) {
        ((TObjEneEpsilonBody *)(((u8 *)this)))->vfunc_105();
        return;
    }
    if (((TObjEneEpsilonBody *)(((u8 *)this)))->vfunc_83() != 4) {
        ((TObjEneEpsilonGuard *)((u8 *)this))->update_guard_flag();
        ((TObjEneEpsilonBody *)(((u8 *)this)))->vfunc_85();
    } else if ((s16) ((TObjEneEpsilonBody *)((u8 *)this))->mode == 1) {
        transition_enemy_state(((u8 *)this), 0);
    }
    if ((s16) ((TObjEneEpsilonBody *)((u8 *)this))->mode != 9) {
        play_persistent_sound(0x4003AD43, (s32)((u8 *)this), (u32)(((u8 *)this) + 0x38), 0, 0);
    }
    ((TObjEneEpsilonBody *)(((u8 *)this)))->vfunc_88();
    ((TObjEneEpsilonGuard *)((u8 *)this))->update_position();
    ((TBoss8Dragon *)((u8 *)this))->set_player_state_default();
    ((TObjEneEpsilonBody *)(((u8 *)this)))->vfunc_100();
}

}
