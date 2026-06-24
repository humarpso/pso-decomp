#include "types.h"

extern "C" {

s32 fn_801D281C(void* p);
s16 fn_801D2824(void* p);
s16 fn_801D282C(void* p);

s32 fn_801D281C(void* p) { return *(s32*)((char*)p + 0x4); }
s16 fn_801D2824(void* p) { return *(s16*)((char*)p + 0x8); }
s16 fn_801D282C(void* p) { return *(s16*)((char*)p + 0x0); }

}
