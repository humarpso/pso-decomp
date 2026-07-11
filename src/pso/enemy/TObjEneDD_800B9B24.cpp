#include "types.h"

extern "C" {

void TObjEneDD__sub_800B9B24(void);
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0);
s32 check_v2_mode__9TObjEneDDFv();

void TObjEneDD__sub_800B9B24(void) {  }
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0) {
    s32 limit;
    s32 idx;

    idx = arg0;
    limit = 0xE;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
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
