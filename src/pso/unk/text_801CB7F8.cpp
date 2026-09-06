#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, s32);
s32 TObjPlayer__sub_801CB874(u8 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_801CB874(u8 *arg0) {
    if ((obj_testFlags30(arg0, 0x100) != 0) && (obj_testFlags30(arg0, 0x04000000) == 0)) {
        return 1;
    }
    return 0;
}

}
