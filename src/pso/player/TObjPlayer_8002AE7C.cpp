#include "types.h"

extern "C" {

void TObjPlayer__sub_8002AE7C(void* p, s32 v);
void TObjPlayer__sub_8002AE84(void* p, s32 v);
void TObjPlayer__sub_8002AE8C(void* p);
void TObjPlayer__sub_8002AEAC(void* p);
void TObjPlayer__sub_8002AEB8(void* p, s32 v);
void TObjPlayer__sub_8002AEC0(void* p);
void bswap_6x12_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8002AF38(void* p);
void TObjPlayer__sub_8002AF4C(void* p);
void TObjPlayer__sub_8002AF90(void* p);
void TBoss8Dragon__sub_8002AE5C(void* p, f32 v);
int TLobby__send_and_handle_60(void*);
int TObjEneMe3ShinowaReal__sub_8002ADD8(void* p);
void TObjEnePanarms__sub_8002AE74(void* p, s16 v);
int TObjPlayer__sub_8001960C(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
f32 fn_8002ADE4(void);
int fn_8002AE38(void* p);
int fn_801A529C(void*, int);
f64 TWindowSubComCard__sub_803A24E4();

void TObjPlayer__sub_8002AE7C(void* p, s32 v) { *(s32*)((char*)p + 0xdc) = v; }
void TObjPlayer__sub_8002AE84(void* p, s32 v) { *(s32*)((char*)p + 0xd8) = v; }
void TObjPlayer__sub_8002AE8C(void* p) { TObjPlayer__sub_8002AEAC((void*)(p)); }
void TObjPlayer__sub_8002AEAC(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void TObjPlayer__sub_8002AEB8(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_8002AEC0(void* p) { bswap_6x12_packet__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void bswap_6x12_packet__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void TObjPlayer__sub_8002AF38(void* p) { *(u8*)((char*)p + 0x0) = 18; *(u8*)((char*)p + 0x1) = 5; }
void TObjPlayer__sub_8002AF4C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void TObjPlayer__sub_8002AF90(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

}
