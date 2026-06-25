#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);
int bswap__21TPlyMeetUserExtensionFv(void*);
int fn_80072994(void*);
int fn_801E0900(void*);
int fn_801DF024(void* p);
int fn_801DF044(void* p);
int fn_801DF064(void* p);
int bswap__13packet_headerFv(void*);

int fn_801DEFC4(void) { return 0; }
int fn_801DF024(void* p) { return bswap__13packet_headerFv(p); }
int fn_801DF044(void* p) { return bswap__13packet_headerFv(p); }
int fn_801DF064(void* p) { return bswap__13packet_headerFv(p); }
int fn_801DF084(void) { return 0; }
int fn_801DF0D4(void) { return 0; }
void fn_801DF124(void* p) { bswap_32__FPUl(p); fn_80072994((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x104); bswap_16__FPUs((char*)p + 0x106); bswap_16__FPUs((char*)p + 0x108); bswap_16__FPUs((char*)p + 0x10a); bswap_16__FPUs((char*)p + 0x10c); bswap_16__FPUs((char*)p + 0x10e); bswap_16__FPUs((char*)p + 0x110); bswap_16__FPUs((char*)p + 0x112); bswap_32__FPUl((char*)p + 0x114); bswap_32__FPUl((char*)p + 0x118); }
void fn_801DF1A8(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); fn_801E0900((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x14); bswap__21TPlyMeetUserExtensionFv((char*)p + 0xec); }

}
