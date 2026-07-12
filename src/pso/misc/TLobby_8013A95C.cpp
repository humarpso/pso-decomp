#include "types.h"

extern "C" {

void TLobby__sub_8013A95C(void* p);
void TLobby__sub_8013A9C0(void* p);
void TLobby__sub_8013A9F4(void* p);
void TLobby__sub_8013AA28(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8013A95C(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); }

void TLobby__sub_8013A9C0(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8013A9F4(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }

void TLobby__sub_8013AA28(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
