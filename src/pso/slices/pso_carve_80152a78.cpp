#include "types.h"

extern "C" {

void fn_80152DB0(void* p);
int fn_8001960C(void*);
int fn_80102CE0(void*);
void fn_80152A98(void* p);
int update_players__6TLobbyFi(void*);
int fn_80152ACC(void*);
void fn_80152B28(void* p);
int fn_80152B5C(void*);
void fn_80152BB8(void* p);
int fn_80152BEC(void*);
void fn_80152D7C(void* p);
int fn_80152A78(void* a0 = 0);
void* TNpcPlayer__sub_80152A48(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_801528E4(void* p);
u16 TNpcPlayer__sub_801528EC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 TNpcPlayer__sub_80152980(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 TNpcPlayer__sub_801529C8(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void fn_80152D64(void* p);

int fn_80152A78(void*) { return 0; }
void fn_80152A98(void* p) { fn_80152ACC(p); update_players__6TLobbyFi(p); }
int fn_80152ACC(void*) { return 0; }
int fn_80152B08(void) { return 0; }
void fn_80152B28(void* p) { fn_80152B5C(p); update_players__6TLobbyFi(p); }
int fn_80152B5C(void*) { return 0; }
int fn_80152B98(void) { return 0; }
void fn_80152BB8(void* p) { fn_80152BEC(p); update_players__6TLobbyFi(p); }
int fn_80152BEC(void*) { return 0; }
int fn_80152C28(void) { return 0; }
int fn_80152C48(void) { return 0; }
int fn_80152C8C(void) { return 0; }
int fn_80152CE8(void) { return 0; }
int fn_80152D04(void) { return 0; }
void fn_80152D64(void* p) { *(u8*)((char*)p + 0x3) = 0; *(u8*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }
void fn_80152D7C(void* p) { fn_80152DB0(p); update_players__6TLobbyFi(p); }
void fn_80152DB0(void* p) { fn_8001960C(p); fn_80102CE0((char*)p + 0x4); }

}
