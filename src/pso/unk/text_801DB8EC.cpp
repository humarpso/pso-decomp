#include "types.h"
#include "pso/TProtocol.h"

extern "C" {
s32 bswap__13packet_headerFv(s32 *);
}

extern "C" {

s32 bswap__13packet_headerFv(s32 *);

void TProtocol::handle_cmd_95(packet &pkt) {
    s32 *arg1 = (s32 *)&pkt;
    s32 sp8;
    s32 (*temp_r12)();

    sp8 = *arg1;
    bswap__13packet_headerFv(&sp8);
    temp_r12 = *(s32 (**)())((s8 *)this + 0xBC34);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}
void TProtocol::handle_cmd_92(packet &pkt) {
    s32 *arg1 = (s32 *)&pkt;
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    s32 (*temp_r12)(u8);
    sp8 = *(s32 *)((s8 *)arg1 + 0);
    bswap__13packet_headerFv((s32 *)((void *) (&sp8)));
    *(s32 *)((s8 *)arg0 + 0x190C) = (s32) *(u8 *)((s8 *)(&sp8) + 0x1);
    temp_r12 = *(s32 (**)(u8))((s8 *)arg0 + 0xBC2C);
    if (temp_r12 != NULL) {
        temp_r12(*(u8 *)((s8 *)(&sp8) + 0x1));
    }
}

}
