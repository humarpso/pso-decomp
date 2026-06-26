#include "types.h"

extern "C" {

s32 fn_802E00B4(void* p);
void fn_802E00BC(void* p, s32 v);
s32 fn_802E00C4(void* p);

int fn_802E0084(void) { return 0; }
s32 fn_802E00B4(void* p) { return *(s32*)((char*)p + 0x530); }
void fn_802E00BC(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 fn_802E00C4(void* p) { return *(s32*)((char*)p + 0x1c); }
int fn_802E00CC(void) { return 0; }

}
