#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801C0B24(u8 *arg0);
}

extern "C" {
void apply_status_effect__10TObjPlayerFPv(void* p);

int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_pkt_u32x2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEE34(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TObjPlayer__sub_801C0768(void*);
int TLobby__send_and_handle_60(void*);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void set_code_12_3__10TObjPlayerFPv(void* p);
void set_code_161_1__10TObjPlayerFPv(void* p);
void set_code_50_1__10TObjPlayerFPv(void* p);
void set_code_49_1__10TObjPlayerFPv(void* p);
void set_code_45_1__10TObjPlayerFPv(void* p);

void set_code_12_3__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 12; *(u8*)((char*)p + 0x1) = 3; }
void reinit_update_sub4_and_send__10TObjPlayerFPv(void* p) { apply_status_effect__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void set_code_161_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 161; *(u8*)((char*)p + 0x1) = 1; }
void update_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void send_font_state__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void set_code_50_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 50; *(u8*)((char*)p + 0x1) = 1; }
void set_code_49_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 49; *(u8*)((char*)p + 0x1) = 1; }
void bswap_font_lobby__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void set_code_45_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 45; *(u8*)((char*)p + 0x1) = 1; }
void send_lobby_update_font__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_pkt_u16x2_u32__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x10); bswap_pkt_u32x2__10TObjPlayerFPv((char*)p + 0x8); }
void TObjPlayer__sub_801C0B24(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x2C;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

}
