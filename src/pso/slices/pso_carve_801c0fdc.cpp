#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_code_43_6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C0F10(void* a0 = 0);
void* copy__10TObjPlayerFPvPv(void* p, void* a1);
void* init_pkt_6x2B__10TObjPlayerFPv(void* p);
s32 bswap_pkt_u16x2_u32__10TObjPlayerFPv();
s32 TLobby__send_and_handle_60(s32);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
s32 TFontSmallLobby__sub_801C0228();
s32 bswap_16__FPUs(s32);
s32 bswap__9TItemDataFv(s32);

int TObjPlayer__sub_801C0FDC(void) { return 0; }

}
