#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801DEEB8(void *);

void handle_cmd_AB(void *arg0, void *arg1) {
    M2C_UNK (*temp_r12)(u16);

    fn_801DEEB8(arg1);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(u16), 0xBC94);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg1, u16 *, 4));
    }
}

}
