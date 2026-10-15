#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TObjPlayer::decrement_timer(s32 *arg0) {
    *arg0 -= 1;
    if ((s32) *arg0 < 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

}
