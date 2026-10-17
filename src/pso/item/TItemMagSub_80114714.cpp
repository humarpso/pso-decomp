#include "types.h"
#include "pso/item/TItemMagSub_80114714.h"

u8 mag_node_oscillation_is_disabled(u8 *arg0) {
    return (u8) (((*arg0 & 0xE0) - 0xE0) == 0);
}
