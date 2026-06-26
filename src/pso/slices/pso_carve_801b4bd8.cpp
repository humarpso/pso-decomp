#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B5200(void *);
M2C_UNK TObjPlayer__sub_801BE768(void *);
u32 fn_801BE778(void *);
s32 fn_801C2044(s32);

void TObjPlayer__sub_801B4BD8(void *arg0) {
    if ((fn_801C2044(M2C_FIELD(arg0, s32 *, 0xD00) + 0x20) == 0) && (fn_801BE778(arg0) != 0U)) {
        TObjPlayer__sub_801BE768(arg0);
        fn_801B5200(arg0);
    }
}

}
