#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801BF7F4(void *, s32);
M2C_UNK TObjPlayer__sub_801BF7FC(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BF804(void *, s32);
M2C_UNK TObjPlayer__sub_801BF80C(void *, M2C_UNK);

s32 fn_801BA54C(u8 *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x320) & 0x1E000) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10000);
    TObjPlayer__sub_801BF80C(arg0 + 0x5F0, 0x10);
    TObjPlayer__sub_801BF804(arg0 + 0x5F0, arg1);
    TObjPlayer__sub_801BF7FC(arg0 + 0x5F0, 0);
    TObjPlayer__sub_801BF7F4(arg0 + 0x5F0, M2C_FIELD(arg0, s32 *, 0x60));
    return 1;
}

}
