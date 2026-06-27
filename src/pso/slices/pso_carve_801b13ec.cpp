#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248();
s32 obj_getField1c(s32);
M2C_UNK fn_80242EBC(M2C_UNK, M2C_UNK, s16);

void fn_801B13EC(s32 arg0) {
    if (fn_80019248() != 0) {
        fn_80242EBC(0xC0, 0xF, obj_getField1c(arg0));
    }
}

}
