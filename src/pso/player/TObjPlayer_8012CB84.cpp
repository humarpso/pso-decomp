#include "types.h"

extern "C" {

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 refresh_owner_stats__5TItemFPv(s32);

void apply_if_shield_type5__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 5) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

}
