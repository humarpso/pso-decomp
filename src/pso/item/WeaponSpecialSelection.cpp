#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 weapon_has_extra_attack(TItemWeapon* weapon) {
    if ((((TObjPlayer *)weapon)->test_flags_1b8(0x400020U) != 0U) ||
        (weapon->special_selector != 0)) {
        return 1;
    }
    return 0;
}
}

u8 TItemWeapon::get_special_selector() {
    return special_selector;
}

void TItemWeapon::set_special_selector(u8 value) {
    special_selector = value;
}
