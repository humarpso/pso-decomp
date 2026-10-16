#include "types.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();

void TObjPlayer::apply_if_shield_type5(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        ((TItem *)arg0)->refresh_owner_stats();
    }
}

}
