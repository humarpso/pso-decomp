#include "types.h"

extern "C" {

s32 bswap_cmd_AB__9TProtocolFPv(void *);

void handle_cmd_AB__9TProtocolFR6packet(void *arg0, void *arg1) {
    s32 (*temp_r12)(u16);

    bswap_cmd_AB__9TProtocolFPv(arg1);
    temp_r12 = *(s32 (**)(u16))((s8 *)arg0 + 0xBC94);
    if (temp_r12 != NULL) {
        temp_r12(*(u16 *)((s8 *)arg1 + 4));
    }
}

}
