#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80248940(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK fn_8027CED8(s32, s32);
M2C_UNK fn_8027CF00(s32, s32);
M2C_UNK fn_8027CF28(s32, s32);
M2C_UNK fn_8027CF50(s32, s32);
M2C_UNK fn_8027CF78(s32, s32);
M2C_UNK fn_8027CFA0(s32, s32);

void fn_8027C7CC(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r4 = fn_80248940(M2C_FIELD(arg0, s32 *, 0x2C));
    switch (temp_r31) {
    case 0:
        fn_8027CFA0(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 1:
        fn_8027CF78(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 2:
        fn_8027CF50(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 4:
        fn_8027CF28(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 3:
        fn_8027CF00(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 5:
        fn_8027CED8(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    }
}

}
