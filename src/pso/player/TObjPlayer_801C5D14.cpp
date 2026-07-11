#include "types.h"

extern "C" {

s32 decrement_clamp__10TObjPlayerFPvi(s32 *arg0, s32 arg1);

s32 decrement_clamp__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    *arg0 -= arg1;
    if ((s32) *arg0 < 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

}
