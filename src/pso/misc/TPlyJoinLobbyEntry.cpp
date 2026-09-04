#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __dt__18TPlyJoinLobbyEntryFv(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__12TPlyCharDataFv(s32, M2C_UNK);

s32 __dt__18TPlyJoinLobbyEntryFv(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0 + 0x20, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801DFA18
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
#endif
#endif
