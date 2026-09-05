#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct M2CCopy_8 { u8 bytes[0x8]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
extern "C" {
void __as__8TPlySmthFRC8TPlySmth(s32 arg0, s32 arg1);
}

extern "C" {

void __ct__8TPlySmthFv(void*);
void* construct__8TPlySmthFPv(void* p);
s32 init_ply_guild_card_tag(s32 arg0);
int __ct__16TPlyGuildCardTagFv(void*);
int fn_80077AA4(void*);

void __as__8TPlySmthFRC8TPlySmth(s32 arg0, s32 arg1) {
    *(M2CCopy_8 *)(arg0) = *(const M2CCopy_8 *)(arg1);
}

void* construct__8TPlySmthFPv(void* p) { __ct__16TPlyGuildCardTagFv((void*)((char*)p + 0x4)); __ct__8TPlySmthFv((void*)((char*)p + 0xc)); fn_80077AA4((char*)p + 0xec); return p; }

void __ct__8TPlySmthFv(void*) {

}

s32 init_ply_guild_card_tag(s32 arg0) {
    __ct__16TPlyGuildCardTagFv((void*)(arg0 + 4));
    return arg0;
}

}
