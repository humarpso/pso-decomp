#include "types.h"
#include "pso/item/TUnk_804A5550.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();

void TUnk_804A5550::update_weapon() {
    s32 arg0 = (s32)this;
    if (get_slot_count__14TItemProShieldFv() == 5) {
        ((TItem *)arg0)->refresh_owner_stats();
    }
}

}
