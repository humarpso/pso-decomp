#include "types.h"

extern "C" {
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void bswap_6x3E__10TNpcPlayerFi(s32 arg0);
    extern const float lbl_805DB1C4;
void init_6x3E_packet__10TNpcPlayerFPv(void* a0);
void TNpcPlayer__sub_80149448(void *arg0);
}

extern "C" {

void send_6x3E__10TNpcPlayerFi(s32 arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TLobby__send_and_handle_60(void *);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);
void TObjNpcBase__vt86(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"

extern "C" {

void send_6x3E__10TNpcPlayerFi(s32 arg0) {
    bswap_6x3E__10TNpcPlayerFi((s32)(arg0));
    TLobby__send_and_handle_60((void *) (arg0));
}
void bswap_6x3E__10TNpcPlayerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}
void init_6x3E_packet__10TNpcPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x8) = -1; *(short*)((char*)a0 + 0xa) = -1; *(float*)((char*)a0 + 0x14) = lbl_805DB1C4; *(float*)((char*)a0 + 0x10) = lbl_805DB1C4; *(float*)((char*)a0 + 0xc) = lbl_805DB1C4; *(unsigned char*)((char*)a0 + 0x0) = 62; *(unsigned char*)((char*)a0 + 0x1) = 6; }
void TNpcPlayer__sub_80149448(void *arg0) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 2) {
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        return;
    }
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
}

}

}
