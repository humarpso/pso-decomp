#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK fn_80258058(void *, M2C_UNK);
extern M2C_UNK lbl_804EF440[];

void *fn_80338AA0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804EF440;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        fn_80258058(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
