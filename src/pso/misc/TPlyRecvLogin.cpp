#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap__13TPlyRecvLoginFv(s32 arg0);
s32 *copy_with_guild_card_tag__13TPlyRecvLoginFPvPv(s32 *arg0, s32 *arg1);
M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
M2C_UNK bswap__13packet_headerFv();
M2C_UNK bswap__16TPlyGuildCardTagFv(s32);

void bswap__13TPlyRecvLoginFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap__16TPlyGuildCardTagFv(arg0 + 4);
}

s32 *copy_with_guild_card_tag__13TPlyRecvLoginFPvPv(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag((s32 *)((s8 *)arg0 + 4), (s32 *)((s8 *)arg1 + 4));
    return arg0;
}

}
