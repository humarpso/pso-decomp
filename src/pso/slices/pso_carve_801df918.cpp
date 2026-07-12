#include "types.h"

extern "C" {

int __ct__8TPlySmthFv(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
int fn_801E0900(void*);
int bswap_packet_header_regist_connect(void* p);
int fn_801DF9A8(void* p);
int bswap__13packet_headerFv(void*);

void fn_801DF918(void* p) { bswap__13packet_headerFv(p); fn_801E0900((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }
void* fn_801DF954(void* p) { __ct__8TPlySmthFv((char*)p + 0x4); return p; }
int bswap_packet_header_regist_connect(void* p) { return bswap__13packet_headerFv(p); }
int fn_801DF9A8(void* p) { return bswap__13packet_headerFv(p); }

}
