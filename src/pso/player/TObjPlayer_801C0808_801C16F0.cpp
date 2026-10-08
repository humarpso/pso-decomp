#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjPlayer__sub_801C16F0(void* p, void* a1);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
int bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C16F0(void* p, void* a1);
void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C172C(void* p);
s32 TLobby__sub_801E4534(s32);
void bswap_pkt_u32x5__10TObjPlayerFPv(void* p);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TObjPlayer__sub_801C172C(void* p);
void TObjPlayer__sub_801C1760(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
s32 bswap_32__FPUl(s32);
int read_be16_field2__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C1760(void* p);
void TObjPlayer__sub_801C17D0(u8 *arg0);
void TObjPlayer__sub_801C1760(void* p);
void TObjPlayer__sub_801C17EC(void* p);
s32 TLobby__sub_801E4534(s32);
void TObjPlayer__sub_801C1760(void* p);
void TObjPlayer__sub_801C17EC(void* p);
void TObjPlayer__sub_801C1820(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
s32 bswap_32__FPUl(s32);
int read_be16_field2__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C1820(void* p);
}

extern "C" {

void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1);
void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1);
int TFontSmallLobby__sub_801C0228(void*);
s32 TLobby__send_and_handle_60(s32);
s32 send_subcommand_to_client__6TLobbyFPvUi(s32, s32);
s32 TLobby__sub_801E4534(s32);
int test_flags_any(void*, int);
int __dl__FPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
f32 fn_801C19A4(void* p);
s32 reset_settings_to_default__6TLobbyFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);
s32 set_mode__20TWindowActionPaletteFPvUc(s32, u8);
s32 set_slot__20TWindowActionPaletteFPvUc(s32, u8);

void TObjPlayer__sub_801C16F0(void* p, void* a1) { bswap_pkt_u16x2_u32x2__10TObjPlayerFPv(p); send_subcommand_to_client__6TLobbyFPvUi((s32)(p), (s32)(a1)); }

void TObjPlayer__sub_801C172C(void* p) { bswap_pkt_u32x5__10TObjPlayerFPv((void*)(p)); TLobby__sub_801E4534((s32)(p)); }

void TObjPlayer__sub_801C1760(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_32__FPUl((s32)((char*)p + 0x4)); }

void* handle_6x1F_set_floor__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

void TObjPlayer__sub_801C17D0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x1F;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void TObjPlayer__sub_801C17EC(void* p) { TObjPlayer__sub_801C1760((void*)(p)); TLobby__sub_801E4534((s32)(p)); }

void TObjPlayer__sub_801C1820(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_32__FPUl((s32)((char*)p + 0x4)); }

void* copy_warp_target__10TObjPlayerFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }

}
