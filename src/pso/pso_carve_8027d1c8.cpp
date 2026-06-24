#include "types.h"

extern "C" {

u8 fn_8027D1C8(void* p);
int fn_8027D1D0(void* p);
int fn_8027D1DC(void* p);

u8 fn_8027D1C8(void* p) { return *(u8*)((char*)p + 0x61); }
int fn_8027D1D0(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int fn_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }
int fn_8027D1E8(void) { return 0; }

}
