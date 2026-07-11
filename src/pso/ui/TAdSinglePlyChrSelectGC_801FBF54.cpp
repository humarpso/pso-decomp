#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u32 fn_80381ABC();

M2C_UNK strncpy(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_805D5FB0;

void copy_name__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    u32 var_r3;
    if (arg0 >= 0) {
        var_r3 = fn_80381ABC();
        if (var_r3 != 0U) {
            strncpy((M2C_UNK *)var_r3, &lbl_805D5FB0, 4);
        }
    }
}

}
