#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80263D94 { s16 f0; s16 f2; s32 f4; };

extern "C" {

void fn_80263D94(u8 *arg0, s16 arg1) {
    struct Elt80263D94 *arr = (struct Elt80263D94 *)arg0;
    struct Elt80263D94 *e = (struct Elt80263D94 *)((char *)&arr[M2C_FIELD(arg0, s16 *, 0x50)] + 0x28);
    e->f0 = (s16) M2C_FIELD(arg0, s16 *, 0x52);
    e->f2 = arg1;
    e->f4 = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
}

}
