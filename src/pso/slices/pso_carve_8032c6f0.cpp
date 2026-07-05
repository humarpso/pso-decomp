#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TDLGraph__sub_8007F6F0(M2C_UNK, M2C_UNK);
u32 fn_8007F85C();
extern u32 lbl_805D6CC4;

void fn_8032C6F0(void) {
    u32 temp_r3;

    if ((u32) lbl_805D6CC4 == 0U) {
        temp_r3 = fn_8007F85C();
        lbl_805D6CC4 = temp_r3;
        if (temp_r3 != 0U) {
            TDLGraph__sub_8007F6F0(temp_r3, 2);
        }
    }
}

}
