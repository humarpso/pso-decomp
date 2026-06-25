#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001DC24();
u32 fn_80228F84(u32);
M2C_UNK fn_802290E0();
M2C_UNK fn_80269C6C(void *, s32, s32);

void fn_8026ADC8(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        fn_802290E0();
        M2C_FIELD(arg0, u32 *, 0x94) = fn_80228F84(M2C_FIELD(arg0, u32 *, 0x94));
        fn_80269C6C(arg0, fn_8001DC24(), M2C_FIELD(arg0, s32 *, 0x90));
    }
}

}
