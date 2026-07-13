#include "types.h"

extern "C" {

void TCheckRoomSequence__sub_80211614(void* p, f32 a, f32 b);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int TObjPlayer__sub_80015DB0(void*, void*);
void TShopWindowBase__sub_802115F0(void);
int TWindowInputNumber__sub_80211608(void* p);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int fn_802115F4(void* p);
s32 fn_80211600(void* p);

void TCheckRoomSequence__sub_80211614(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x74) = a; *(f32*)((char*)p + 0x78) = b; }

}
