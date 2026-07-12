#include "types.h"

extern "C" {

void TAdMultiSelGameModeGC__sub_802D5098(void* p, s32 v);
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(void* p);
void TAdMultiPlyChrSelectGC__sub_802D50A8(void* p, s32 v);
void TAdMultiPlyChrSelectGC__sub_802D50B0(void* p, s32 v);

void TAdMultiSelGameModeGC__sub_802D5098(void* p, s32 v) { *(s32*)((char*)p + 0x700) = v; }

}
