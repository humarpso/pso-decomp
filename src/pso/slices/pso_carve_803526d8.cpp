#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80080750();
M2C_UNK TObjLobbyMain__sub_803520D8(void *);
M2C_UNK fn_80352360(void *);
M2C_UNK fn_803524F8(void *);
M2C_UNK fn_8035255C(void *);
M2C_UNK fn_803525F0(void *);
M2C_UNK fn_80352624(void *);
M2C_UNK fn_80352690(void *);

void TObjLobbyMain__vt1(void *arg0) {
    s32 temp_r0;

    if (fn_80080750() == 1) {
        TObjLobbyMain__sub_803520D8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        fn_80352624(arg0);
        break;
    case 1:
        fn_803525F0(arg0);
        break;
    default:
    case 2:
        fn_80352690(arg0);
        break;
    }
    fn_803524F8(arg0);
    fn_8035255C(arg0);
    fn_80352360(arg0);
}

}
