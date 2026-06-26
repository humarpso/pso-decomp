#include "types.h"

extern "C" {

s32 fn_8010A050(void* p);
s32 fn_8010A058(void* p);

s32 fn_8010A050(void* p) { return *(s32*)((char*)p + 0x24); }
s32 fn_8010A058(void* p) { return *(s32*)((char*)p + 0xf4); }

}
