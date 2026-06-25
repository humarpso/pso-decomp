#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80101FEC(void *, s32, s32);
s32 fn_8011AF58(s32);

void fn_80102088(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = fn_8011AF58(arg1);
    }
    fn_80101FEC(arg0, arg1, arg2);
}

}
