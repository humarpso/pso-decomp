#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001053C(void *);
s32 fn_80019248(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK fn_8002AE8C(void *);
M2C_UNK fn_801D2630();

void fn_801C91AC(u8 *arg0) {
    fn_801D2630();
    fn_8001053C(arg0);
    obj_clearFlags30(arg0, 0x20);
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 1) && (fn_80019248(arg0) != 0)) {
        fn_8002AE8C(arg0 + 0x644);
    }
}

}
