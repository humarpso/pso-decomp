#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 __dl__FPv();

s32 TObjPlayer::free_if_valid(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
