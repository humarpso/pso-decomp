#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 init__9TItemDataFv();

void TObjPlayer::init_item_data(s32 arg1) {
    init__9TItemDataFv();
    *(s8 *)((s8 *)this + 0) = 4;
    *(s32 *)((s8 *)this + 0x10) = arg1;
}

}
