#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_8001ED80();

void TWindowOptionCtrl__sub_8026B308(void *arg0, s16 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = fn_8001ED80();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 4) = arg1;
        M2C_FIELD(temp_r3, s8 *, 6) = arg2;
    }
}

}
