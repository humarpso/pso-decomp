#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80255850(u32);

void TWindowSubItem__sub_80279714(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        fn_80255850(M2C_FIELD(arg0, u32 *, 0x40));
    }
}

}
