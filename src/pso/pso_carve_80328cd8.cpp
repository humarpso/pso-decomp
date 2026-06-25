#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80328210();
M2C_UNK fn_803282B8();
M2C_UNK fn_80328360();
M2C_UNK fn_80328558(void *);

void TAdDialingGC__vt1(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_80328360();
        break;
    case 1:
        fn_803282B8();
        break;
    case 2:
        fn_80328210();
        break;
    }
    fn_80328558(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
}

}
