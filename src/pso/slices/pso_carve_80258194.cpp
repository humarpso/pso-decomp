#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOBoss4Rock__sub_80147A80(u32);

void fn_80258194(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) && (M2C_FIELD(arg0, u16 *, 0) & 0x10)) {
        TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, u32 *, 0x24));
    }
    M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) && (M2C_FIELD(arg0, u16 *, 0) & 8)) {
        TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, u32 *, 0x20));
    }
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & ~0x1BFD);
}

}
