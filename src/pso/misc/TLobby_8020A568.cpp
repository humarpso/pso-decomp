#include "types.h"

extern "C" {

void TLobby__sub_8020A568(void* p);
void bswap__6TLobbyFPv(void* p);
void TLobby__sub_8020A618(void *arg0, void *arg1);
void swap_endian_header__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8020A568(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void bswap__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x14); }

void TLobby__sub_8020A618(void *arg0, void *arg1) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) *(s32 *)((s8 *)arg1 + 0);
    *(s16 *)((s8 *)arg0 + 4) = (s16) *(s16 *)((s8 *)arg1 + 4);
    *(s16 *)((s8 *)arg0 + 6) = (s16) *(s16 *)((s8 *)arg1 + 6);
    *(s16 *)((s8 *)arg0 + 8) = (s16) *(s16 *)((s8 *)arg1 + 8);
    *(s16 *)((s8 *)arg0 + 0xA) = (s16) *(s16 *)((s8 *)arg1 + 0xA);
    *(s16 *)((s8 *)arg0 + 0xC) = (s16) *(s16 *)((s8 *)arg1 + 0xC);
    *(s16 *)((s8 *)arg0 + 0xE) = (s16) *(s16 *)((s8 *)arg1 + 0xE);
    *(u8 *)((s8 *)arg0 + 0x10) = (u8) *(u8 *)((s8 *)arg1 + 0x10);
    *(u8 *)((s8 *)arg0 + 0x11) = (u8) *(u8 *)((s8 *)arg1 + 0x11);
    *(s16 *)((s8 *)arg0 + 0x12) = (s16) *(s16 *)((s8 *)arg1 + 0x12);
    *(s32 *)((s8 *)arg0 + 0x14) = (s32) *(s32 *)((s8 *)arg1 + 0x14);
}

void swap_endian_header__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
