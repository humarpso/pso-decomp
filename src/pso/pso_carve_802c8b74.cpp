#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80154764(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_80154788(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_802C9600();

void fn_802C8B74(void *arg0) {
    fn_802C9600();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        fn_80154764(arg0, 1, 0x100);
        return;
    }
    fn_80154788(arg0, 1, 0x100);
}

}
