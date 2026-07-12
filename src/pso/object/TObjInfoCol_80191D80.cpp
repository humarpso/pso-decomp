#include "types.h"

extern "C" {

void bswap_6x78__11TObjInfoColFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_6x78__11TObjInfoColFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

}
