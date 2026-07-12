#include "types.h"

extern "C" {

void TLobby__sub_80105A60(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_80105A60(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
