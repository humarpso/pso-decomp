#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E0FA4(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2404(M2C_UNK, M2C_UNK);
s32 fn_802E1D5C(s32);
s32 fn_802E1DC8();

s32 fn_802E1CEC(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;

    temp_r29 = fn_802E1DC8();
    temp_r30 = fn_802E1D5C(arg0);
    temp_r31 = TAdPlayerLoadGC__sub_801E0FA4(0);
    temp_r3 = TAdPlayerLoadGC__sub_801E2404(0, 0);
    if ((temp_r29 > temp_r31) || (temp_r30 > temp_r3)) {
        return 0;
    }
    return 1;
}

}
