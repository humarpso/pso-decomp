#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80087350(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
s32 fn_800EC41C(void *);

void fn_800E9740(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x394) + 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r3;
    if (!(temp_r3 & 3)) {
        fn_80087350(arg0 + 0x2FC, 0xE0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (fn_800EC41C(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 6);
    }
}

}
