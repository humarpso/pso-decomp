#include "types.h"

extern "C" {

void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_pkt_u32x5__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); }

}
