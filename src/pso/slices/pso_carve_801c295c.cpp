#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801C4FDC(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);

struct S801C295C { M2C_UNK f0; s8 f4; s8 pad[0x13]; };

void fn_801C295C(void) {
    struct S801C295C sp8;

    build_6x7D_set_battle_mode_data(&sp8);
    sp8.f4 = 5;
    fn_801C4FDC(&sp8);
}

}
