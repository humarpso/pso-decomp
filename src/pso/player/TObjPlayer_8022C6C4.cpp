#include "types.h"

extern "C" {

s32 get_level_tier__10TObjPlayerFi(s32 arg0);

s32 get_level_tier__10TObjPlayerFi(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 / 5;
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    default:
        return 0;
    }
}

}
