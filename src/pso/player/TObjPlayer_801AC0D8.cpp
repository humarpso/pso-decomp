#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AC0D8(void);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);

extern u32 lbl_805D5D40;

void TObjPlayer__sub_801AC0D8(void) {
    if ((u32) lbl_805D5D40 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D40, 1);
    }
    lbl_805D5D40 = 0U;
}

}
