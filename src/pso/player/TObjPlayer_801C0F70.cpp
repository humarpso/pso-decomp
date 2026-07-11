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
s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
s32 TFontSmallLobby__sub_801C0228();
s32 bswap_16__FPUs(s32);
s32 bswap__9TItemDataFv(s32);

void* init_pkt_6x2B__10TObjPlayerFPv(void* p) { set_code_43_6__10TObjPlayerFPv(p); *(unsigned char*)(p) = 43; *(unsigned char*)((char*)p + 0x18) = 2; *(unsigned char*)((char*)p + 0x19) = 0; *(unsigned char*)((char*)p + 0x1a) = 0; *(unsigned char*)((char*)p + 0x1b) = 0; *(unsigned char*)((char*)p + 0x1) = 7; return p; }
void set_code_43_6__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 43; *(u8*)((char*)p + 0x1) = 6; }

}
