#include "types.h"

extern "C" {
s32 bswap__13packet_headerFv(void *);
void handle_cmd_90__9TProtocolFR6packet(u8 *arg0, s32 *arg1);
}

extern "C" {

void handle_cmd_90__9TProtocolFR6packet(u8 *arg0, s32 *arg1) {
    s32 sp8;
    s32 (*temp_r12)(u8);
    sp8 = *(s32 *)((s8 *)arg1 + 0);
    bswap__13packet_headerFv((void *) (&sp8));
    *(s32 *)((s8 *)arg0 + 0x190C) = (s32) *(u8 *)((s8 *)(&sp8) + 0x1);
    temp_r12 = *(s32 (**)(u8))((s8 *)arg0 + 0xBC28);
    if (temp_r12 != NULL) {
        temp_r12(*(u8 *)((s8 *)(&sp8) + 0x1));
    }
}

}
