#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK create_font_small_task(s32, s32, s32, int, void *, void *, int);

void fn_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    create_font_small_task(arg0, arg1, arg2, 0, arg3, arg4, 0xFFFF);
}

}
