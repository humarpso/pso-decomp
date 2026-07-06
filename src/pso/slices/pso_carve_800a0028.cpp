#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK fn_800A02AC(void *, s32, void *, void *);
u32 __nw__7TObjectFUl(M2C_UNK);

void fn_800A0028(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x20));
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 5) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        u32 newp = __nw__7TObjectFUl(0x3C);
        if (newp != 0U) {
            fn_800A02AC((void*)newp, M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0x28, arg0 + 0x34);
        }
    }
}

}
