#include "types.h"

extern "C" {

void TObjPlayer__sub_802C4518(void* p, u8 v);
void* TObjPlayer__sub_802C45C0(void* p);
void TObjPlayer__sub_802C45C8(void* p, u8 v);
void TObjPlayer__sub_802C45D0(void* p, u8 v);
void TObjPlayer__sub_802C45D8(void* p, u8 v);
void TObjPlayer__sub_802C45E0(void* p, u8 v);
void TObjPlayer__sub_802C45E8(void* p, u8 v);
void TObjPlayer__sub_802C45F0(void* p, u8 v);
void TObjPlayer__sub_802C45F8(void* p, u8 v);
void fn_802C46AC(void* p);
int fn_802C46BC(void* p);
int fn_802C46E0(void* p);
int fn_802C4748(void* p);
int TWindowActionPalette__sub_801C1CA8(void*);
int fn_801D7D4C(void*);
int TObjPlayer__sub_802C4288(void*);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 get_main_phase();
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_8011E238(void*, void*);
int TAdSelectGameModeGC__sub_801A2F7C(void*);
s32 fn_801A2FAC();
int TAdSinglePlyChrSelectGC__sub_80203220(void*);
s32 TAdSelectGameModeGC__sub_802A1438();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 getDateStamp__FP9DateStamp(s32 *);

void* TObjPlayer__sub_802C45C0(void* p) { return (char*)p + 0x408; }
void TObjPlayer__sub_802C45C8(void* p, u8 v) { *(u8*)((char*)p + 0x157) = v; }
void TObjPlayer__sub_802C45D0(void* p, u8 v) { *(u8*)((char*)p + 0x13b) = v; }
void TObjPlayer__sub_802C45D8(void* p, u8 v) { *(u8*)((char*)p + 0x11f) = v; }
void TObjPlayer__sub_802C45E0(void* p, u8 v) { *(u8*)((char*)p + 0x103) = v; }
void TObjPlayer__sub_802C45E8(void* p, u8 v) { *(u8*)((char*)p + 0xe7) = v; }
void TObjPlayer__sub_802C45F0(void* p, u8 v) { *(u8*)((char*)p + 0x1ab) = v; }
void TObjPlayer__sub_802C45F8(void* p, u8 v) { *(u8*)((char*)p + 0x18f) = v; }

}
