#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
s32 TObjPlayer__sub_801B19EC();

s32 TObjPlayer__sub_801B25C4(s32 arg0) {
    if (TObjPlayer__sub_801B19EC() != 0) {
        return obj_testFlags30(arg0, 0x20);
    }
    return 0;
}

}
