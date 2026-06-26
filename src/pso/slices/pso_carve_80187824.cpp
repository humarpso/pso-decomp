#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80186DA0();
M2C_UNK fn_80186E24();
M2C_UNK fn_80186F84();
M2C_UNK fn_8018709C();
M2C_UNK fn_801871D0();

void TObjCityMainWarpChallenge__sub_80187824(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        fn_801871D0();
        return;
    case 1:
        fn_8018709C();
        return;
    case 2:
        fn_80186F84();
        return;
    case 3:
        fn_80186E24();
        return;
    case 4:
        fn_80186DA0();
        return;
    }
}

}
