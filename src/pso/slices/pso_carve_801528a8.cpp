#include "types.h"

extern "C" {

void fn_80152DB0(void* p);
int fn_8001960C(void*);
int fn_80102CE0(void*);
void fn_80152A98(void* p);
int TLobby__sub_801E45D0(void*);
int fn_80152ACC(void*);
void fn_80152B28(void* p);
int fn_80152B5C(void*);
void fn_80152BB8(void* p);
int fn_80152BEC(void*);
void fn_80152D7C(void* p);
int fn_80152A78(void* a0 = 0);
void* TNpcPlayer__sub_80152A48(void* p);
s32 fn_801528DC(void* p);
s32 fn_801528E4(void* p);
u16 fn_801528EC(void* p);
s32 fn_80152978(void* p);
s32 fn_80152980(void* p);
void fn_801529AC(void* p, void* q);
s32 fn_801529C8(void* p);
void TNpcPlayer__sub_801529D0(void* p);
void fn_80152A30(void);
void fn_80152D64(void* p);

int fn_801528A8(void) { return 0; }
int fn_801528B8(void) { return 0; }
int fn_801528C8(void) { return 0; }
s32 fn_801528DC(void* p) { return *(s32*)((char*)p + 0x84); }
s32 fn_801528E4(void* p) { return *(s32*)((char*)p + 0x7c); }
u16 fn_801528EC(void* p) { return *(u16*)((char*)p + 0x8a); }
int fn_801528F4(void) { return 0; }
int fn_80152900(void) { return 0; }
int fn_80152950(void) { return 0; }
int fn_8015296C(void) { return 0; }
s32 fn_80152978(void* p) { return *(s32*)((char*)p + 0x80); }
s32 fn_80152980(void* p) { return *(s32*)((char*)p + 0x90); }
int fn_80152988(void) { return 0; }
void fn_801529AC(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 fn_801529C8(void* p) { return *(s32*)((char*)p + 0x8c); }
void TNpcPlayer__sub_801529D0(void* p) { *(s32*)((char*)p + 0x8c) = 0; *(s32*)((char*)p + 0x90) = 0; }
int fn_801529E0(void) { return 0; }
void fn_80152A30(void) {  }
int fn_80152A34(void) { return 0; }
void* TNpcPlayer__sub_80152A48(void* p) { fn_80152A78(p); return p; }
int fn_80152A78(void*) { return 0; }
void fn_80152A98(void* p) { fn_80152ACC(p); TLobby__sub_801E45D0(p); }
int fn_80152ACC(void*) { return 0; }
int fn_80152B08(void) { return 0; }
void fn_80152B28(void* p) { fn_80152B5C(p); TLobby__sub_801E45D0(p); }
int fn_80152B5C(void*) { return 0; }
int fn_80152B98(void) { return 0; }
void fn_80152BB8(void* p) { fn_80152BEC(p); TLobby__sub_801E45D0(p); }
int fn_80152BEC(void*) { return 0; }
int fn_80152C28(void) { return 0; }
int fn_80152C48(void) { return 0; }
int fn_80152C8C(void) { return 0; }
int fn_80152CE8(void) { return 0; }
int fn_80152D04(void) { return 0; }
void fn_80152D64(void* p) { *(u8*)((char*)p + 0x3) = 0; *(u8*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }
void fn_80152D7C(void* p) { fn_80152DB0(p); TLobby__sub_801E45D0(p); }
void fn_80152DB0(void* p) { fn_8001960C(p); fn_80102CE0((char*)p + 0x4); }

}
