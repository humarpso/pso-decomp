#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802C46E0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_802C37EC(s32 arg0, s32 arg1) {
    fn_802C46E0(arg1, 0, 0, 1, 0);
    fn_802C46E0(arg1, 1, 0, 1, 0);
    fn_802C46E0(arg1, 0, 1, 2, 0);
    fn_802C46E0(arg1, 0, 2, 2, 1);
    if (arg0 & 0x60) {
        fn_802C46E0(arg1, 0, 3, 4, 0);
        return;
    }
    fn_802C46E0(arg1, 0, 3, 3, 0);
}

}
