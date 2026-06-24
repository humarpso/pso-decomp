#include "types.h"

extern "C" {

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
int fn_801DF124(void) { return 0; }
int fn_801DF1A8(void) { return 0; }

}
