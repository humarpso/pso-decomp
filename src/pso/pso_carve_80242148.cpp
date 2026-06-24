#include "types.h"

extern "C" {

void fn_8024218C(void* p);
s32 fn_8024219C(void* p);
int fn_802421A4(void* p);
int fn_8024273C(void*);

int fn_80242148(void) { return 0; }
void fn_8024218C(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 fn_8024219C(void* p) { return *(s32*)((char*)p + 0x308); }
int fn_802421A4(void* p) { return fn_8024273C(p); }

}
