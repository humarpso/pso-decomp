#include "types.h"

extern "C" {

void fn_802C4518(void* p, u8 v);
void* fn_802C45C0(void* p);
void fn_802C45C8(void* p, u8 v);
void fn_802C45D0(void* p, u8 v);
void fn_802C45D8(void* p, u8 v);
void fn_802C45E0(void* p, u8 v);
void fn_802C45E8(void* p, u8 v);
void fn_802C45F0(void* p, u8 v);
void fn_802C45F8(void* p, u8 v);
void fn_802C46AC(void* p);
int fn_802C46BC(void* p);
int fn_802C46E0(void* p);
int fn_802C4748(void* p);
int TWindowActionPalette__sub_801C1CA8(void*);
int fn_801D7D4C(void*);
int fn_802C4288(void*);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 get_main_phase();
int fn_8011E204(void*, void*);
int fn_8011E238(void*, void*);
int fn_801A2F7C(void*);
s32 fn_801A2FAC();
int fn_80203220(void*);
s32 fn_802A1438();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 getDateStamp__FP9DateStamp(s32 *);

void fn_802C4518(void* p, u8 v) { *(u8*)((char*)p + 0x173) = v; }
void fn_802C4520(void* p) { { int i; for (i = 0; i < 30; i++) { fn_80203220((char*)p + 0x4 + i * 28); } } }
int fn_802C456C(void) { return 0; }
int fn_802C457C(void) { return 0; }
void* fn_802C45C0(void* p) { return (char*)p + 0x408; }
void fn_802C45C8(void* p, u8 v) { *(u8*)((char*)p + 0x157) = v; }
void fn_802C45D0(void* p, u8 v) { *(u8*)((char*)p + 0x13b) = v; }
void fn_802C45D8(void* p, u8 v) { *(u8*)((char*)p + 0x11f) = v; }
void fn_802C45E0(void* p, u8 v) { *(u8*)((char*)p + 0x103) = v; }
void fn_802C45E8(void* p, u8 v) { *(u8*)((char*)p + 0xe7) = v; }
void fn_802C45F0(void* p, u8 v) { *(u8*)((char*)p + 0x1ab) = v; }
void fn_802C45F8(void* p, u8 v) { *(u8*)((char*)p + 0x18f) = v; }
int fn_802C4600(void) { return 0; }
int fn_802C4648(void* a0 = 0, void* a1 = 0) { return 0; }
int fn_802C4668(void) { return 0; }
int fn_802C4688(void) { return 0; }
int fn_802C4698(void) { return 0; }
void fn_802C46AC(void* p) { *(u8*)((char*)p + 0x7) |= 0x40; }
int fn_802C46BC(void* p) { return fn_801D7D4C((char*)p + 0x24); }
int fn_802C46E0(void* p) { return TWindowActionPalette__sub_801C1CA8(p); }
void fn_802C4700(void* p) { fn_8011E204(p, (void*)524288); }
void fn_802C4724(void* p) { fn_8011E238(p, (void*)524288); }
int fn_802C4748(void* p) { return fn_802C4288(p); }

}
