#include "types.h"

extern "C" {

u8 TObjPlayer__sub_801C5758(s8 *arg0, s32 arg1);

u8 TObjPlayer__sub_801C5758(s8 *arg0, s32 arg1) {
    s8 c = arg0[arg1];
    if (c < 0 || (s32)c > 20) {
        arg0[arg1] = 0;
    }
    return arg0[arg1];
}

}
