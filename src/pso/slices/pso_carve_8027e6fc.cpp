#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_80225924(s32);
s32 fn_80266E0C(s32);
M2C_UNK fn_80269C6C(u32, s32, M2C_UNK);
s32 fn_8027FAF0();

void fn_8027E6FC(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        temp_r3 = fn_80266E0C(M2C_FIELD(arg0, s32 *, 0x38));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != temp_r3) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
            if (fn_80225924(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                fn_80269C6C(M2C_FIELD(arg0, u32 *, 0x3C), fn_8027FAF0(), 0x482);
            }
        }
    }
}

}
