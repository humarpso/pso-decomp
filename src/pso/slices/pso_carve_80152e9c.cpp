#include "types.h"

extern "C" {

int fn_80152F28(void* a0 = 0);
void* fn_80152EF8(void* p);
int bswap_16__FPUs(void*);
void fn_80152E9C(void* p, s16 v);
void fn_80152EA4(void* p, s16 v);
void fn_80152EAC(void* p, s32 v);
void fn_80152EE8(void* p, s16 v);
void fn_80152EF0(void* p, s16 v);

void fn_80152E9C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_80152EA4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_80152EAC(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void fn_80152EB4(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }
void fn_80152EE8(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_80152EF0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void* fn_80152EF8(void* p) { fn_80152F28(p); return p; }
int fn_80152F28(void*) { return 0; }

}
