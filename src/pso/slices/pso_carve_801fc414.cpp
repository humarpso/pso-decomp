#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubComCard__sub_80202990(u16);

u16 fn_801FC414(int arg0) {
    void *temp_r3;

    temp_r3 = TWindowSubComCard__sub_80202990(arg0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u16 *, 0x21AE);
    }
    return 0U;
}

}
