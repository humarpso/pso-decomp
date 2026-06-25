#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int fn_801E4570(void*);
void fn_8020E470(void* p);

void fn_8020E400(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_8020E43C(void* p) { fn_8020E400(p); fn_801E4570(p); }
void fn_8020E470(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }
int fn_8020E484(void) { return 0; }
int fn_8020E4C0(void) { return 0; }
int fn_8020E550(void) { return 0; }
int fn_8020E5E0(void) { return 0; }
int fn_8020E670(void) { return 0; }

}
