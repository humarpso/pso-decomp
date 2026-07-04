#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006F190();
extern M2C_UNK lbl_8043859C[];

s32 fn_8006F094(void) {
    if (fn_8006F190() < 3) {
        return lbl_8043859C[fn_8006F190()];
    }
    return 5;
}

}
