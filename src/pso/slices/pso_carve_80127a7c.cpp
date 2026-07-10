#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8011E384();
M2C_UNK fn_8011F5E0(void *);
s32 fn_801207E8(void *, M2C_UNK, M2C_UNK *);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, M2C_UNK);

void fn_80127A7C(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    if (fn_8011E384() != 0) {
        if (fn_801207E8(arg0, 1, &sp8) != 0) {
            temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 5);
        }
    } else {
        fn_8011F5E0(arg0);
    }
}

}
