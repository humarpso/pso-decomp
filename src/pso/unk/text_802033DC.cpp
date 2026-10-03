#include "types.h"
extern "C" {
extern s32 lbl_8044A814[];
s32 is_warp_excluded_area(s32 x);
}

extern "C" {

s32 is_warp_excluded_area(s32 x) {
    s32 i = 0;
    while (lbl_8044A814[i] != -1) {
        if (x == lbl_8044A814[i++]) return 1;
    }
    return 0;
}

}
