#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/item/TItemObject.h"
#include "pso/player/TObjPlayer.h"

u8 TWindowSubStatusDisp::check_flag_400() {
    s32 uninit;
    return (u8) (((TObjPlayer *)uninit)->test_item_flags(0x400) == 0x400);
}
