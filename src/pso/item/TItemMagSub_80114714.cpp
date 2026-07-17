#include "types.h"

extern "C" {

u8 is_level_maxed__11TItemMagSubFPv(u8 *arg0);

u8 is_level_maxed__11TItemMagSubFPv(u8 *arg0) {
    return (u8) (((*arg0 & 0xE0) - 0xE0) == 0);
}

}
