#include "types.h"

extern "C" {

s32 fn_80116578(void* p);
u16 fn_80116618(void* p);

int fn_80116568(void) { return 0; }
s32 fn_80116578(void* p) { return *(s32*)((char*)p + 0xdc); }
int fn_80116580(void) { return 0; }
int fn_801165D0(void) { return 0; }
int fn_80116604(void) { return 0; }
u16 fn_80116618(void* p) { return *(u16*)((char*)p + 0x0); }
int fn_80116620(void) { return 0; }

}
