#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803CB458(int);

void fn_803C3984(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 3) {
        fn_803CB458((int) (M2C_FIELD(arg0, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

}
