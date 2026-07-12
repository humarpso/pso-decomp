#include "types.h"

extern "C" {

f32 fn_801C19A4(void* p);
int TAdRicoRing__sub_8001BEE8(void*, int);
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__sub_801E4534(s32);
s32 TLobby__send_and_handle_60(s32);
int __dl__FPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TObjPlayer__sub_8001960C();
int TObjPlayer__sub_8001BED8(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
s32 TWindowActionPalette__sub_8013DF4C(s32, u8);
s32 TWindowActionPalette__sub_8013DF54(s32, u8);
int TFontSmallLobby__sub_801C0228(void*);
s32 bswap_pkt_u16x2_u32x2__10TObjPlayerFPv();
s32 bswap_pkt_u32x5__10TObjPlayerFPv();
s32 reset_settings_to_default__6TLobbyFPv();

void* TObjPlayer__sub_801C1794(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

}
