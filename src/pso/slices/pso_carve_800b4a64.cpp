#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800B7EA0(void *);
M2C_UNK fn_800B7F60(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B8570(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B85A0(void *);
s32 fn_800BB858();

void fn_800B4A64(void *arg0) {
    s32 temp_r31;

    if (fn_800BB858() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x3D8);
        fn_800B7EA0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x3D8)) {
            if (temp_r31 != 0) {
                TObjEneBm5Wolf__sub_800B8570(arg0);
            } else {
                TObjEneBm5Wolf__sub_800B85A0(arg0);
            }
        }
        fn_800B7F60(arg0);
    }
}

}
