#include "types.h"

extern "C" {

u16 fn_8006B358(void* p);
s32 fn_8006B360(void* p);

u16 fn_8006B358(void* p) { return *(u16*)((char*)p + 0x20); }
s32 fn_8006B360(void* p) { return *(s32*)((char*)p + 0x1c); }

}
