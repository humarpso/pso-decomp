#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
M2C_UNK fn_8036E26C(void *);

void fn_8036E224(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    fn_8036E26C(arg0);
}

}
