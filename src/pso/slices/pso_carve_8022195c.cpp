#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_801F8FD4(void *);

void fn_8022195C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) != 0U) {
        fn_801F8FD4(M2C_FIELD(arg0, void **, 0x384));
    }
    fn_80073DC4(arg0, 1);
}

}
