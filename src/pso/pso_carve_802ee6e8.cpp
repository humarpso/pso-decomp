#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int fn_801E4570(void*);
void fn_802EE6E8(void);
void fn_802EE6EC(void);
void fn_802EE6F0(void);
void fn_802EE6F4(void);
void fn_802EE6F8(void);
void fn_802EE6FC(void);
void fn_802EE700(void);
void fn_802EE7B8(void* p);
void fn_802EE800(void* p);
int fn_802EE814(void* p);

void fn_802EE6E8(void) {  }
void fn_802EE6EC(void) {  }
void fn_802EE6F0(void) {  }
void fn_802EE6F4(void) {  }
void fn_802EE6F8(void) {  }
void fn_802EE6FC(void) {  }
void fn_802EE700(void) {  }
void fn_802EE704(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_802EE748(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_802EE784(void* p) { fn_802EE748(p); fn_801E4570(p); }
void fn_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
void fn_802EE7CC(void* p) { fn_802EE704(p); fn_801E4570(p); }
void fn_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }
int fn_802EE814(void* p) { return *(u32*)((char*)p + 0x3bc) & 0x1; }
int fn_802EE820(void) { return 0; }
int fn_802EE8CC(void) { return 0; }

}
