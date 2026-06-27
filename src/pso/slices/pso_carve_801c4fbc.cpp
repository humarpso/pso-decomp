#include "types.h"

extern "C" {

int bswap_32__FPUl(void* a0 = 0);
int fn_8001960C(void* a0 = 0);
void fn_801C5010(void* p);
int TLobby__sub_801E4464(void*);
int TLobby__sub_801E4570(void*);
void fn_801C4FDC(void* p);
void fn_801C5074(void* p);
void fn_801C4FBC(void* p, f32 v);
s32 fn_801C4FC4(void* p);
void fn_801C4FCC(void* p, f32 v);
void fn_801C4FD4(void* p, f32 v);
void fn_801C5060(void* p);

void fn_801C4FBC(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }
s32 fn_801C4FC4(void* p) { return *(s32*)((char*)p + 0x14); }
void fn_801C4FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void fn_801C4FD4(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
void fn_801C4FDC(void* p) { fn_801C5010(p); TLobby__sub_801E4570(p); }
void fn_801C5010(void* p) { fn_8001960C(p); { int i; for (i = 0; i < 4; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }
void fn_801C5060(void* p) { *(u8*)((char*)p + 0x0) = 125; *(u8*)((char*)p + 0x1) = 6; }
void fn_801C5074(void* p) { fn_801C5010(p); TLobby__sub_801E4464(p); }

}
