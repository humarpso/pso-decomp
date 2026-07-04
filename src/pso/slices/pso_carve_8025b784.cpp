#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(void *);
M2C_UNK TOBoss4Rock__sub_80147A80(s32);
M2C_UNK fn_80258058(void *, M2C_UNK);
extern M2C_UNK lbl_804CFA58[];

void *fn_8025B784(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA58;
        TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, s32 *, 0x20));
        TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, s32 *, 0x1C));
        fn_80258058(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
