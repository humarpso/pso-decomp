#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void TLobby__sub_8001E41C(void* p);

void TLobby__sub_8001E41C(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); }

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void TLobby__sub_8001E498(void* p);

void TLobby__sub_8001E498(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); bswap_32__FPUl((char*)p + 0x28); bswap_32__FPUl((char*)p + 0x2c); }

}
