#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEneHoldEffect__sub_80142478(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 TObjEneHoldEffect__sub_80142478(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 0)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 4)) != 0) || (TCameraCtrl__sub_8006B370(M2C_FIELD(arg0, f32 *, 8)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
