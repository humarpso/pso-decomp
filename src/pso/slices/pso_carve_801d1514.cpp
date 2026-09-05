#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
int TFontSmallLobby__sub_801C0228(void*);
u8 *TObjPlayer__sub_801D1514(u8 *arg0, u8 *arg1);
}

extern "C" {
void bswap_packet__10TObjPlayerFPv(void* p);

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);

u8 *TObjPlayer__sub_801D1514(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228((void*)(arg0));
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    return arg0;
}

}
