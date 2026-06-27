#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKurage__sub_8016D9F0(void *arg0);

s32 fn_80158360(f32);

void TOKurage__sub_8016D9F0(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    if (fn_80158360(temp_f0 * temp_f0) == 1) {
        M2C_FIELD(arg0, s8 *, 0x100) = 4;
    }
}

}
