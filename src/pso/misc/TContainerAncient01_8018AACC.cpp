#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TContainerAncient01__sub_8018AACC(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TContainerAncient01__sub_8018AB44(void *);
M2C_UNK fn_8018A66C(void *);

void TContainerAncient01__sub_8018AACC(void *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x338) = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x338);
        if ((M2C_FIELD(arg0, s16 *, 0x32C) - temp_r4) <= 0) {
            fn_8018A66C(arg0);
            TContainerAncient01__sub_8018AB44(arg0);
            M2C_FIELD(arg0, s32 *, 0x360) = 1;
        }
    } else if ((M2C_FIELD(arg0, s16 *, 0x32C) - M2C_FIELD(arg0, s16 *, 0x338)) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x360) = 1;
    }
}

}
