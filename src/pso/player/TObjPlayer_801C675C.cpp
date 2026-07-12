#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801C675C(s32 *arg0, s32 arg1);

s32 TObjPlayer__sub_801C675C(s32 *arg0, s32 arg1) {
    if (arg1 < 0 || arg1 >= 13) {
        return 0;
    }
    return arg0[arg1];
}

}
