#include "types.h"

extern "C" {

void TObjEneDD__sub_800B9B24(void);
s32 TObjEneDD__sub_800B9B28(s32 arg0);
s32 TObjEneDD__sub_800B9B84();

void TObjEneDD__sub_800B9B24(void) {  }
s32 TObjEneDD__sub_800B9B28(s32 arg0) {
    s32 limit;
    s32 idx;

    idx = arg0;
    limit = 0xE;
    if (TObjEneDD__sub_800B9B84() != 0) {
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
