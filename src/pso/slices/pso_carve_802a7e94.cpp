#include "types.h"

extern "C" {

s32 fn_802A7E94(void* p);
s32 fn_802A7E9C(void* p);
int fn_802A7EA4(void);

s32 fn_802A7E94(void* p) { return *(s32*)((char*)p + 0x0); }
s32 fn_802A7E9C(void* p) { return *(s32*)((char*)p + 0x8); }
int fn_802A7EA4(void) { return 600; }

}
