#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_confirmed__17TAdExNetConfirmGCFv(void);

M2C_UNK fn_8042EE4C(s32 *);

s32 is_confirmed__17TAdExNetConfirmGCFv(void) {
    s32 sp8;

    fn_8042EE4C(&sp8);
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
