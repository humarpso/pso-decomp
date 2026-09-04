#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 mask_sub_flags__9TObjEnemyFPvi(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) & arg1);
        return 1;
    }
    return 0;
}

s32 fn_8020C408(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) | arg1);
        return 1;
    }
    return 0;
}

s32 fn_8020C430(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s16 *, 2) = (s16) (M2C_FIELD(temp_r5, s16 *, 2) & arg1);
        return 1;
    }
    return 0;
}

}
