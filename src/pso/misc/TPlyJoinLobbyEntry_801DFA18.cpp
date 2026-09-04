#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap__18TPlyJoinLobbyEntryFv(s32 arg0);
M2C_UNK bswap_32__FPUl(s32);
M2C_UNK bswap__12TPlyCharDataFv(s32);
M2C_UNK bswap__16TPlyGuildCardTagFv();

void bswap__18TPlyJoinLobbyEntryFv(s32 arg0) {
    bswap__16TPlyGuildCardTagFv();
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap__12TPlyCharDataFv(arg0 + 0x20);
}

}
