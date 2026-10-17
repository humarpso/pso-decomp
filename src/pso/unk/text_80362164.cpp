#include "types.h"
#include "pso/misc/TOTrapAncient01_80226534.h"
#include "pso/unk/text_80362164.h"
#include "pso/unk/TObjEneEpsilonBody.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneEpsilonGuard.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 transition_enemy_state(void *, int);
void fn_80362164(u8 *arg0) {
    if (TObjPlayer::check_demo_mode() != 0) {
        ((TObjEneEpsilonBody *)(arg0))->vfunc_105();
        return;
    }
    if (((TObjEneEpsilonBody *)(arg0))->vfunc_83() != 4) {
        ((TObjEneEpsilonGuard *)arg0)->update_guard_flag();
        ((TObjEneEpsilonBody *)(arg0))->vfunc_85();
    } else if ((s16) ((TObjEneEpsilonBody *)arg0)->mode == 1) {
        transition_enemy_state((void *) (arg0), 0);
    }
    if ((s16) ((TObjEneEpsilonBody *)arg0)->mode != 9) {
        play_persistent_sound(0x4003AD43, (s32)(arg0), (u32)(arg0 + 0x38), 0, 0);
    }
    ((TObjEneEpsilonBody *)(arg0))->vfunc_88();
    ((TObjEneEpsilonGuard *)arg0)->update_position();
    ((TBoss8Dragon *)arg0)->set_player_state_default();
    ((TObjEneEpsilonBody *)(arg0))->vfunc_100();
}

}
