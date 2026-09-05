#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_80 { u8 bytes[0x80]; };

extern "C" {
u8 * fn_801E051C(void *, void *);
u8 *__ct__12TPlyJoinGameFRC12TPlyJoinGame(u8 *arg0, u8 *arg1);
}

extern "C" {

u8 *__ct__12TPlyJoinGameFRC12TPlyJoinGame(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    *(M2CCopy_80 *)((s32) arg0 + 4) = *(const M2CCopy_80 *)((s32) arg1 + 4);
    fn_801E051C(arg0 + 0x84, arg1 + 0x84);
    fn_801E051C(arg0 + 0xA4, arg1 + 0xA4);
    fn_801E051C(arg0 + 0xC4, arg1 + 0xC4);
    fn_801E051C(arg0 + 0xE4, arg1 + 0xE4);
    M2C_FIELD(arg0, u8 *, 0x104) = (u8) M2C_FIELD(arg1, u8 *, 0x104);
    M2C_FIELD(arg0, u8 *, 0x105) = (u8) M2C_FIELD(arg1, u8 *, 0x105);
    M2C_FIELD(arg0, u8 *, 0x106) = (u8) M2C_FIELD(arg1, u8 *, 0x106);
    M2C_FIELD(arg0, u8 *, 0x107) = (u8) M2C_FIELD(arg1, u8 *, 0x107);
    M2C_FIELD(arg0, u8 *, 0x108) = (u8) M2C_FIELD(arg1, u8 *, 0x108);
    M2C_FIELD(arg0, u8 *, 0x109) = (u8) M2C_FIELD(arg1, u8 *, 0x109);
    M2C_FIELD(arg0, u8 *, 0x10A) = (u8) M2C_FIELD(arg1, u8 *, 0x10A);
    M2C_FIELD(arg0, u8 *, 0x10B) = (u8) M2C_FIELD(arg1, u8 *, 0x10B);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) M2C_FIELD(arg1, s32 *, 0x10C);
    M2C_FIELD(arg0, u8 *, 0x110) = (u8) M2C_FIELD(arg1, u8 *, 0x110);
    M2C_FIELD(arg0, u8 *, 0x111) = (u8) M2C_FIELD(arg1, u8 *, 0x111);
    M2C_FIELD(arg0, u8 *, 0x112) = (u8) M2C_FIELD(arg1, u8 *, 0x112);
    M2C_FIELD(arg0, u8 *, 0x113) = (u8) M2C_FIELD(arg1, u8 *, 0x113);
    return arg0;
}

}
