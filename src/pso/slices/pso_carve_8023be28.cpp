#include "types.h"

extern "C" {

s32 fn_8023BE28(void* p);
s16 fn_8023BE30(void* p);

s32 fn_8023BE28(void* p) { return *(s32*)((char*)p + 0x110); }
s16 fn_8023BE30(void* p) { return *(s16*)((char*)p + 0x11e); }
int fn_8023BE38(void) { return 0; }
int fn_8023BE60(void) { return 0; }

}
