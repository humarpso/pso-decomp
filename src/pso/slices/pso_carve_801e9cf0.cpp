#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_8007B7E4();
extern s32 lbl_805D5EC4;

void fn_801E9CF0(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = fn_8007B7E4();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    lbl_805D5EC4 = var_r0;
}

}
