#include "types.h"

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8033B9D8(void* p);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);

s32 TAdSinglePlyChrSelectGC__sub_8033B9D8(void* p) { return *(s32*)((char*)p + 0x44); }
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p) { *(s32*)((char*)p + 0x40) = 1; }
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p) { *(s32*)((char*)p + 0x4c) = 1; }

}
