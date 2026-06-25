#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80223B88(void *, s16);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_80249060();
s32 fn_80268488(s32);
M2C_UNK fn_8028783C(void *, M2C_UNK);

void fn_802678E0(void *arg0) {
    s32 temp_r31;
    temp_r31 = fn_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if ((fn_80249060() == 0) || (fn_80268488(temp_r31) != 0)) {
        fn_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x100)) {
        fn_8022675C(0x52D01, 0, 0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        fn_8028783C(M2C_FIELD(arg0, void **, 0x80), 2);
    }
}

}
