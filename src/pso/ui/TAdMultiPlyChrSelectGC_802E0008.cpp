#include "types.h"

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802E0008(void* p);
s32 TAdMultiPlyChrSelectGC__sub_802E0014(void* p);
void TAdMultiPlyChrSelectGC__sub_802E001C(void* p, s32 v);

void TAdMultiPlyChrSelectGC__sub_802E0008(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 TAdMultiPlyChrSelectGC__sub_802E0014(void* p) { return *(s32*)((char*)p + 0x4ec); }
void TAdMultiPlyChrSelectGC__sub_802E001C(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

}
