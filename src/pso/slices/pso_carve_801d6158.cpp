#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801D66E4(s32);
M2C_UNK fn_801D670C(s32, M2C_UNK);
M2C_UNK fn_801D6714(s32, M2C_UNK);

void fn_801D6158(s32 arg0) {
    fn_801D6714(arg0 + 0x4C, 0);
    fn_801D670C(arg0 + 0x4C, 0);
    fn_801D66E4(arg0);
}

}
