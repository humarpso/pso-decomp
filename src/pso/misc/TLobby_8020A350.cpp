#include "types.h"

extern "C" {

void bswap_quad_word__6TLobbyFPv(void* p);
void TLobby__sub_8020A394(void* p);
void TLobby__sub_8020A3D0(void *arg0, void *arg1);
void bswap_vec3__6TLobbyFPv(void* p);
void swap_header_endian__6TLobbyFPv(void* p);
void TLobby__sub_8020A48C(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_quad_word__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void TLobby__sub_8020A394(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8020A3D0(void *arg0, void *arg1) {
    *(s16 *)((s8 *)arg0 + 0) = (s16) *(s16 *)((s8 *)arg1 + 0);
    *(s16 *)((s8 *)arg0 + 2) = (s16) *(s16 *)((s8 *)arg1 + 2);
    *(s32 *)((s8 *)arg0 + 4) = (s32) *(s32 *)((s8 *)arg1 + 4);
}

void bswap_vec3__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void swap_header_endian__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); }

void TLobby__sub_8020A48C(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_16__FPUs((char*)p + 0x1c); bswap_16__FPUs((char*)p + 0x1e); }

}
