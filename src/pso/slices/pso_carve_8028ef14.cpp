#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803DA16C(void *);

void fn_8028EF14(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        fn_803DA16C(arg0 + 0x178);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x184) != 0)) {
        fn_803DA16C(arg0 + 0x2EC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        fn_803DA16C(arg0 + 0x460);
    }
}

}
