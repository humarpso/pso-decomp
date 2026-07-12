#include "types.h"

extern "C" {

int TFontSmallLobby__sub_80152F28(void* a0 = 0);
void* fn_80152EF8(void* p);
int bswap_16__FPUs(void*);
void TNpcPlayer__sub_80152E9C(void* p, s16 v);
void TNpcPlayer__sub_80152EA4(void* p, s16 v);
void TNpcPlayer__sub_80152EAC(void* p, s32 v);
void TNpcPlayer__sub_80152EE8(void* p, s16 v);
void TNpcPlayer__sub_80152EF0(void* p, s16 v);

void TNpcPlayer__sub_80152E9C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TNpcPlayer__sub_80152EA4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TNpcPlayer__sub_80152EAC(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TNpcPlayer__sub_80152EB4(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); }
void TNpcPlayer__sub_80152EE8(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TNpcPlayer__sub_80152EF0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
