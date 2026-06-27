#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNeedleShoot__vt1(void *arg0);

M2C_UNK TObjEneMe1GiGueMissile__sub_802A4628(void *);
M2C_UNK fn_802A4668();
M2C_UNK fn_802A4694();

void TNeedleShoot__vt1(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        fn_802A4694();
        TObjEneMe1GiGueMissile__sub_802A4628(arg0);
        return;
    }
    fn_802A4668();
}

}
