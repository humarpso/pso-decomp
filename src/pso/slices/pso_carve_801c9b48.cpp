#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 obj_getField1c(s32);
M2C_UNK TObjPlayer__sub_801D2630();
M2C_UNK fn_8024AC20(int);

void fn_801C9B48(s32 arg0) {
    TObjPlayer__sub_801D2630();
    fn_8024AC20(obj_getField1c(arg0));
}

}
