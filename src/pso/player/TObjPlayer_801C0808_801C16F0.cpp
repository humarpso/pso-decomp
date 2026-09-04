#include "types.h"

extern "C" {

int TObjPlayer__sub_801C16F0(void);
int TObjPlayer__sub_801C172C(void);
int TObjPlayer__sub_801C1760(void);
int TObjPlayer__sub_801C17D0(void);
int TObjPlayer__sub_801C17EC(void);
int TObjPlayer__sub_801C1820(void);
void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1);
void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1);
int TFontSmallLobby__sub_801C0228(void*);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__sub_801E4534(s32);
int TObjPlayer__sub_8001BEF8(void*, int);
int __dl__FPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_pkt_u16x2_u32x2__10TObjPlayerFPv();
s32 bswap_pkt_u32x5__10TObjPlayerFPv();
int clear_flags__11TAdRicoRingFPvUi(void*, int);
f32 fn_801C19A4(void* p);
s32 read_be16_field2__10TObjPlayerFPv();
s32 reset_settings_to_default__6TLobbyFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);

int TObjPlayer__sub_801C16F0(void) { return 0; }
int TObjPlayer__sub_801C172C(void) { return 0; }
int TObjPlayer__sub_801C1760(void) { return 0; }

void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

int TObjPlayer__sub_801C17D0(void) { return 0; }
int TObjPlayer__sub_801C17EC(void) { return 0; }
int TObjPlayer__sub_801C1820(void) { return 0; }

void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

}
