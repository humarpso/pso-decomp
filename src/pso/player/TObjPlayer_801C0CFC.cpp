#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C0FC8(void* p);
int TObjPlayer__sub_801C0F10(void* a0 = 0);
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
s32 bswap_pkt_u16x2_u32__10TObjPlayerFPv();
s32 TLobby__send_and_handle_60(s32);
s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
s32 TFontSmallLobby__sub_801C0228();
s32 bswap_16__FPUs(s32);
s32 bswap__9TItemDataFv(s32);

void bswap_body_dwords2__10TObjPlayerFi(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void *copy_pair_fields2__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

}
