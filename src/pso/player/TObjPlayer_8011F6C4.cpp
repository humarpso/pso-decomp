#include "types.h"

extern "C" {

u8 is_active_in_game__10TObjPlayerFPv(void *arg0);
s8 TObjPlayer__sub_80102C30();

u8 is_active_in_game__10TObjPlayerFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (TObjPlayer__sub_80102C30() == 2)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
