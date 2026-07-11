#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

void *fn_8002DB10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
