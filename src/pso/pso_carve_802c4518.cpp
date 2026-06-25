#include "types.h"

extern "C" {

int fn_8011E204(void*, void*);
int fn_8011E238(void*, void*);
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
void TAdSelectGameModeGC__vt2(void);
int fn_802C476C(void* p);
int fn_801A2F7C(void*);
int fn_801C1CA8(void*);
int fn_801D7D4C(void*);
int fn_802C4288(void*);

void fn_802C4518(void* p, u8 v) { *(u8*)((char*)p + 0x173) = v; }
int fn_802C4520(void) { return 0; }
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
int fn_802C4648(void) { return 0; }
int fn_802C4668(void) { return 0; }
int fn_802C4688(void) { return 0; }
int fn_802C4698(void) { return 0; }
void fn_802C46AC(void* p) { *(u8*)((char*)p + 0x7) |= 0x40; }
int fn_802C46BC(void* p) { return fn_801D7D4C((char*)p + 0x24); }
int fn_802C46E0(void* p) { return fn_801C1CA8(p); }
void fn_802C4700(void* p) { fn_8011E204(p, (void*)524288); }
void fn_802C4724(void* p) { fn_8011E238(p, (void*)524288); }
int fn_802C4748(void* p) { return fn_802C4288(p); }
void TAdSelectGameModeGC__vt2(void) {  }
int fn_802C476C(void* p) { return fn_801A2F7C(p); }
int fn_802C478C(void) { return 0; }

}
