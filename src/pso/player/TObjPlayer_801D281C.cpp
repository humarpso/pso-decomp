#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801D281C(void* p);
s16 TObjPlayer__sub_801D2824(void* p);
s16 TObjPlayer__sub_801D282C(void* p);

s32 TObjPlayer__sub_801D281C(void* p) { return *(s32*)((char*)p + 0x4); }
s16 TObjPlayer__sub_801D2824(void* p) { return *(s16*)((char*)p + 0x8); }
s16 TObjPlayer__sub_801D282C(void* p) { return *(s16*)((char*)p + 0x0); }

}
