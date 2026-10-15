#include "types.h"

extern "C" {
s32 bswap__13packet_headerFv(s32 *);
void handle_cmd_92__9TProtocolFR6packet(u8 *arg0, s32 *arg1);
}

extern "C" {

s32 bswap__13packet_headerFv(s32 *);

void handle_cmd_95__9TProtocolFR6packet(void *arg0, s32 *arg1) {
    s32 sp8;
    s32 (*temp_r12)();

    sp8 = *arg1;
    bswap__13packet_headerFv(&sp8);
    temp_r12 = *(s32 (**)())((s8 *)arg0 + 0xBC34);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}
void handle_cmd_92__9TProtocolFR6packet(u8 *arg0, s32 *arg1) {
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
