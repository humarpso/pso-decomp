#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcCloakroomBase__vt88(s32 arg0);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK fn_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TObjNpcCloakroomBase__vt88(s32 arg0) {
    if (TOKeyMachine01__sub_802034A8() != 5) {
        fn_8022675C(0x40003804, arg0 + 0x38, 0, 0);
        return;
    }
    fn_8022675C(0x40003802, arg0 + 0x38, 0, 0);
}

}
