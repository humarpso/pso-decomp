#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TTecKafun__sub_802A9948(void *, s32, s32, s32, s32, s32, f32, f32);

void fn_802A9710(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1) {
    void *ptr = __nw__7TObjectFUl(0x100);
    if (ptr != NULL) {
        TTecKafun__sub_802A9948(ptr, arg0, arg1, arg2, arg3, arg4, farg0, farg1);
    }
}

}
