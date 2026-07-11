#include "types.h"

extern "C" {

void TObjPlayer__sub_801D1CC0(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void TObjPlayer__sub_801D2620(void* p);
void TObjPlayer__sub_801D2630(void* p);
int TObjPlayer__sub_801D2680(void* p);
void TObjPlayer__sub_801D268C(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
s32 fn_8012125C(s32);
int fn_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TObjPlayer__sub_801D1A84(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D1B48(void* p) { TObjPlayer__sub_801D1A84(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D1B7C(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
int TObjPlayer__sub_801D1BB0(void) { return 0; }
void TObjPlayer__sub_801D1BCC(void* p) { TObjPlayer__sub_801D1B7C(p); update_players__6TLobbyFi(p); }
void TObjPlayer__sub_801D1C00(void* p) { TObjPlayer__sub_8001960C(p); bswap_32__FPUl((char*)p + 0x4); }
void* TObjPlayer__sub_801D1C34(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }
int TObjPlayer__sub_801D1C70(void) { return 0; }
void TObjPlayer__sub_801D1C8C(void* p) { TObjPlayer__sub_801D1C00(p); update_players__6TLobbyFi(p); }
void TObjPlayer__sub_801D1CC0(void* p) { *(u8*)((char*)p + 0x0) = 74; *(u8*)((char*)p + 0x1) = 1; }
void TObjPlayer__sub_801D1CD4(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D1D08(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int TObjPlayer__sub_801D1D44(void) { return 0; }
int TObjPlayer__sub_801D1D88(void) { return 0; }
void TObjPlayer__sub_801D1DA8(void* p) { TObjPlayer__sub_801D1D08(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D1DDC(void) { return 0; }
void TObjPlayer__sub_801D1E3C(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int TObjPlayer__sub_801D1E7C(void) { return 0; }
int TObjPlayer__sub_801D1EE4(void) { return 0; }
void TObjPlayer__sub_801D1F44(void* p) { *(s16*)((char*)p + 0x6) = 0; *(s16*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x2) = 0; *(u8*)((char*)p + 0x1) = 0; *(u8*)((char*)p + 0x0) = 0; }
int TObjPlayer__sub_801D1F60(void) { return 0; }
int TObjPlayer__sub_801D1FA4(void) { return 0; }
int TObjPlayer__sub_801D2004(void) { return 0; }
void TObjPlayer__sub_801D201C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int TObjPlayer__sub_801D2058(void) { return 0; }
int TObjPlayer__sub_801D209C(void) { return 0; }
void TObjPlayer__sub_801D20C4(void* p) { TObjPlayer__sub_801D201C(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D20F8(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
int TObjPlayer__sub_801D2134(void) { return 0; }
int TObjPlayer__sub_801D2178(void) { return 0; }
void TObjPlayer__sub_801D2198(void* p) { TObjPlayer__sub_801D20F8(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D21CC(void) { return 0; }
void TObjPlayer__sub_801D222C(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x6); }
int TObjPlayer__sub_801D2260(void) { return 0; }
int TObjPlayer__sub_801D22AC(void) { return 0; }
void TObjPlayer__sub_801D22D0(void* p) { TObjPlayer__sub_801D222C(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D2304(void) { return 0; }
int TObjPlayer__sub_801D2348(void) { return 0; }
void TObjPlayer__sub_801D238C(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801D2B2C((char*)p + 0x4); }
void* TObjPlayer__sub_801D23C0(void* p) { fn_8012AF00((char*)p + 0x4); *(unsigned char*)(p) = 70; *(unsigned char*)((char*)p + 0x1) = 12; return p; }
int TObjPlayer__sub_801D2404(void) { return 0; }
void TObjPlayer__sub_801D2448(void* p) { TObjPlayer__sub_8001960C(p); TObjPlayer__sub_801D2C18((char*)p + 0x4); }
int TObjPlayer__sub_801D247C(void) { return 0; }
int TObjPlayer__sub_801D24B0(void) { return 0; }
int TObjPlayer__sub_801D24F4(void) { return 0; }
int TObjPlayer__sub_801D2540(void) { return 0; }
int TObjPlayer__sub_801D25AC(void) { return 0; }
void TObjPlayer__sub_801D2618(void* p, f32 v) { *(f32*)((char*)p + 0xc0) = v; }
void TObjPlayer__sub_801D2620(void* p) { *(u32*)((char*)p + 0xb0) |= 0x40; }
void TObjPlayer__sub_801D2630(void* p) { *(u32*)((char*)p + 0xb0) &= 0xffffffbf; }
int TObjPlayer__sub_801D2640(void) { return 0; }
int TObjPlayer__sub_801D2658(void) { return 0; }
int TObjPlayer__sub_801D2680(void* p) { return (*(u32*)((char*)p + 0xb0) >> 6) & 0x1; }
void TObjPlayer__sub_801D268C(void* p) { *(u32*)((char*)p + 0xb0) |= 0x80; }

}
