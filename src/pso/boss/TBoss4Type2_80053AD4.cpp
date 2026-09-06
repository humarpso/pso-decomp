#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38C));
    if (temp_r3 != NULL) {
        TBoss4DarkFalz__sub_8004B16C(temp_r3, ((((((((((((M2C_FIELD(arg0, s32 *, 0x3A0) * 0x10) & 0x30 & ~0xF) | (arg1 & 0xF)) & ~0xC0) | ((arg2 << 6) & 0xC0)) & ~0x300) | ((M2C_FIELD(arg0, s32 *, 0x3A8) << 8) & 0x300)) & ~0xC00) | ((arg3 << 0xA) & 0xC00)) & ~0xF000) | ((M2C_FIELD(arg0, s32 *, 0x3B0) << 0xC) & 0xF000)) & ~0xF0000) | ((M2C_FIELD(arg0, s32 *, 0x3B4) << 0x10) & 0xF0000));
    }
}

}
