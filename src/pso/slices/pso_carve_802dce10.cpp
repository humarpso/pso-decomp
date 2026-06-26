#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802C64D0(M2C_UNK);
s32 fn_802C6508();
s32 fn_802C6558();
M2C_UNK fn_802E0008(s32);
s32 fn_802E0124(s32);
M2C_UNK fn_802E644C(s32);

void fn_802DCE10(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    if ((fn_802E0124(M2C_FIELD(arg0, s32 *, 0x78)) == 0) && (fn_802C6558() > 1) && (fn_802C64D0(0) != 0)) {
        temp_r31 = fn_802C6508();
        temp_r3 = fn_802C6558();
        if (temp_r3 != temp_r31) {
            fn_802E644C(M2C_FIELD(arg0, s32 *, 0x78));
        }
    }
    fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
    M2C_FIELD(arg0, s32 *, 0x20) = 3;
}

}
