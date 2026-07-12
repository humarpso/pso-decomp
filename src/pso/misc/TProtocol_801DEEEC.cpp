#include "types.h"

extern "C" {

void bswap_packet__9TProtocolFPv(void* p);
int bswap_packet_header__9TProtocolFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);

void bswap_packet__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); { int i; for (i = 0; i < 8; i++) { bswap_32__FPUl((char*)p + 0xc + i * 4); } } }
int bswap_packet_header__9TProtocolFPv(void* p) { return bswap__13packet_headerFv(p); }

}
