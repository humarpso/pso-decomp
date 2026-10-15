#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 refresh_owner_stats__5TItemFPv(s32);

void TObjPlayer::apply_if_shield_type5(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

}
