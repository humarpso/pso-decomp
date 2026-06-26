#include "types.h"

extern "C" {

s32 fn_801D84A8(void* p);
int fn_801D84CC(void* p);
s32 fn_801D84F0(void* p);
int bswap_16__FPUs(void*);

int fn_801D8474(void) { return 0; }
s32 fn_801D84A8(void* p) { return *(s32*)((char*)p + 0x0); }
int fn_801D84B0(void) { return 0; }
int fn_801D84CC(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
s32 fn_801D84F0(void* p) { return *(s32*)((char*)p + 0x4); }
int fn_801D84F8(void) { return 0; }

}
