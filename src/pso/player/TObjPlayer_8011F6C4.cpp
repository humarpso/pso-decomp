#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s8 TObjPlayer__sub_80102C30();

u8 TItemWeapon::is_active_in_game() {
    int var_r31;

    var_r31 = 0;
    if (((u32) *(u32 *)((s8 *)this + 0xF0) != 0U) && (TObjPlayer__sub_80102C30() == 2)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
