#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void *TObjPlayer__sub_801D13A8(void *arg0, void *arg1);
void TObjPlayer__sub_801D13EC(u8 *arg0);
void TObjPlayer__sub_801D1440(void* p);
void bswap_and_send__10TObjPlayerFPv(void* p);
void bswap_packet__10TObjPlayerFPv(void* p);
void draw_and_send__10TObjPlayerFPv(void* p);
void* handle_6x57__10TObjPlayerFPv(void* p);
void handle_recv_packet__10TObjPlayerFPv(void* p);
void send_swapped_bytes__10TObjPlayerFPv(void* p);
void send_swapped_packet__10TObjPlayerFPv(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
void swap_endian_words__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
void TObjPlayer__sub_801D10D4(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int query_field_340__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void swap_bytes__10TObjPlayerFPv(void* p);
void swap_endian32__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int update_players__6TLobbyFi(void*);

void send_swapped_bytes__10TObjPlayerFPv(void* p) { swap_bytes__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void TObjPlayer__sub_801D12D8(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void TObjPlayer__sub_801D12E8(void* p) { *(u16*)((char*)p + 0x6) |= 0x2; }
void send_swapped_packet__10TObjPlayerFPv(void* p) { swap_endian32__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }
void bswap_and_send__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D10D4(p); TLobby__send_and_handle_60(p); }
int TObjPlayer__sub_801D1360(void* p) { return *(u16*)((char*)p + 0x6) & 0x1; }
void bswap_packet__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801D13A8(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, u16 *, 0x4) = M2C_FIELD(arg1, s16 *, 0x4);
    M2C_FIELD(arg0, u16 *, 0x6) = M2C_FIELD(arg1, u16 *, 0x6);
    return arg0;
}

void TObjPlayer__sub_801D13EC(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x58;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void handle_recv_packet__10TObjPlayerFPv(void* p) { bswap_packet__10TObjPlayerFPv((void*)(p)); update_players__6TLobbyFi(p); }
void TObjPlayer__sub_801D1440(void* p) { *(u16*)((char*)p + 0x6) |= 0x1; }
void* handle_6x57__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void set_cmd_87__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 87; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__10TObjPlayerFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void swap_endian_words__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); }

}
