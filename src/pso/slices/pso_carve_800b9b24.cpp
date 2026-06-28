#include "types.h"

extern "C" {

s32 fn_800B9B84();
void fn_800B9B24(void);

void fn_800B9B24(void) {  }
s32 fn_800B9B28(s32 arg0) {
    s32 limit;
    s32 idx;

    idx = arg0;
    limit = 0xE;
    if (fn_800B9B84() != 0) {
        limit = 0x1D;
    }
    if (idx < 0) {
        idx = 0;
    } else if (idx >= limit) {
        idx = limit - 1;
    }
    return idx;
}

}
