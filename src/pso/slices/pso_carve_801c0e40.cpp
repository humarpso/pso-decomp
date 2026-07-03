#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C0FC8(void* p);
int TObjPlayer__sub_801C0F10(void* a0 = 0);
void* TObjPlayer__sub_801C0EC4(void* p, void* a1);
void* TObjPlayer__sub_801C0F70(void* p);
s32 TObjPlayer__sub_801C0AD8();
s32 TLobby__send_and_handle_60(s32);
s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
s32 TFontSmallLobby__sub_801C0228();
s32 bswap_16__FPUs(s32);
s32 bswap__9TItemDataFv(s32);

int TObjPlayer__sub_801C0E40(void) { return 0; }
int TObjPlayer__sub_801C0E5C(void) { return 0; }

}
