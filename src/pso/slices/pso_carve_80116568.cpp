#include "types.h"

extern "C" {

int bswap_16__FPUs(void* a0 = 0);
int fn_8001960C(void* a0 = 0);
void fn_80116580(void* p);
int fn_801E4570(void*);
void fn_801165D0(void* p);
s32 fn_80116578(void* p);
void fn_80116604(void* p);
u16 fn_80116618(void* p);

int fn_80116568(void) { return 0; }
s32 fn_80116578(void* p) { return *(s32*)((char*)p + 0xdc); }
void fn_80116580(void* p) { fn_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void fn_801165D0(void* p) { fn_80116580(p); fn_801E4570(p); }
void fn_80116604(void* p) { *(u8*)((char*)p + 0x0) = 102; *(u8*)((char*)p + 0x1) = 3; }
u16 fn_80116618(void* p) { return *(u16*)((char*)p + 0x0); }
int fn_80116620(void) { return 0; }

}
