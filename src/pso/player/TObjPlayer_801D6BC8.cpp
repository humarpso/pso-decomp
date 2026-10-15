#include "types.h"

extern "C" {

s32 decrement_timer__10TObjPlayerFPv(s32 *arg0);

s32 decrement_timer__10TObjPlayerFPv(s32 *arg0) {
    *arg0 -= 1;
    if ((s32) *arg0 < 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

}
