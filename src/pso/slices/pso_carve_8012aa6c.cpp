#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80115BFC(void *, M2C_UNK);
s32 fn_80121200();
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);

void fn_8012AA6C(u8 *arg0) {
    if (fn_80121200() == 2) {
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        fn_80115BFC(arg0 + 0x1F8, 0x1999);
    }
}

}
