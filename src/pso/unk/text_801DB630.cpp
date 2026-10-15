#include "types.h"
#include "pso/TProtocol.h"

extern "C" {

s32 bswap__13packet_headerFv(s32 *);

void TProtocol::handle_cmd_97(packet &pkt) {
    s32 *arg1 = (s32 *)&pkt;
    s32 sp8;
    u8 temp_r3;
    s32 (*temp_r12)(u8);

    sp8 = *arg1;
    bswap__13packet_headerFv(&sp8);
    temp_r3 = *(u8 *)((s8 *)(&sp8) + 1);
    temp_r12 = *(s32 (**)(u8))((s8 *)this + 0xBC44);
    if (temp_r12 != NULL) {
        temp_r12(temp_r3);
    }
}

}
