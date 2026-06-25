#include "types.h"

extern "C" {

int fn_801E4570(void*);
int fn_80116580(void* a0 = 0);
void fn_801165D0(void* p);
s32 fn_80116578(void* p);
void fn_80116604(void* p);
u16 fn_80116618(void* p);

int fn_80116568(void) { return 0; }
s32 fn_80116578(void* p) { return *(s32*)((char*)p + 0xdc); }
int fn_80116580(void*) { return 0; }
void fn_801165D0(void* p) { fn_80116580(p); fn_801E4570(p); }
void fn_80116604(void* p) { *(u8*)((char*)p + 0x0) = 102; *(u8*)((char*)p + 0x1) = 3; }
u16 fn_80116618(void* p) { return *(u16*)((char*)p + 0x0); }
int fn_80116620(void) { return 0; }

}
