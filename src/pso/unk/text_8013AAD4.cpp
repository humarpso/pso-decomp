#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

struct M2CCopy_20 { u8 bytes[0x20]; };

struct M2CCopy_24 { u8 bytes[0x24]; };

struct M2CCopy_50 { u8 bytes[0x50]; };

struct M2CCopy_348 { u8 bytes[0x348]; };

extern "C" {
u8 * copy_full__16TPlyGuildCardTagFPvPv(void *, void *);
u8 *fn_8013AAD4(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *fn_8013AAD4(u8 *arg0, u8 *arg1) {
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r5;
    u8 *temp_r6;
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(M2CCopy_348 *)((s32) arg0 + 4) = *(const M2CCopy_348 *)((s32) arg1 + 4);
    temp_r6 = (u8 *)((void *)((u8 *)(arg0) + 0x348));
    temp_r4 = (u8 *)((void *)((u8 *)(arg1) + 0x348));
    *(M2CCopy_24 *)((s32) temp_r6 + 4) = *(const M2CCopy_24 *)((s32) temp_r4 + 4);
    *(M2CCopy_50 *)((s32) ((u8 *)(arg0) + 0x36C) + 4) = *(const M2CCopy_50 *)((s32) ((u8 *)(arg1) + 0x36C) + 4);
    copy_full__16TPlyGuildCardTagFPvPv((u8 *)(arg0) + 0x3C0, (u8 *)(arg1) + 0x3C0);
    temp_r5 = (u8 *)((void *)((u8 *)(arg0) + 0x404));
    temp_r4_2 = (u8 *)((void *)((u8 *)(arg1) + 0x404));
    *(M2CCopy_14 *)((s32) temp_r5 + 4) = *(const M2CCopy_14 *)((s32) temp_r4_2 + 4);
    return arg0;
}

}
