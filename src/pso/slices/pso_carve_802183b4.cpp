#include "types.h"

extern "C" {

int fn_80073DC4(void*, void*);
void fn_802183F8(void* p, void* a1);
s32 fn_802183B4(void* p);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
int TWindowSubComCard__sub_802183BC(void) { return 0; }
void fn_802183F8(void* p, void* a1) { fn_80073DC4(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
int fn_80218430(void) { return 0; }

}
