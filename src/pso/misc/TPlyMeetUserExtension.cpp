#include "types.h"

extern "C" {

void bswap__21TPlyMeetUserExtensionFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__16TPlyGuildCardTagFv(s32);

void bswap__21TPlyMeetUserExtensionFv(s32 arg0) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = 0;
    do {
        bswap__16TPlyGuildCardTagFv(arg0 + var_r31);
        var_r30 += 1;
        var_r31 += 8;
    } while (var_r30 < 8);
    bswap_32__FPUl(arg0 + 0x40);
}

}
