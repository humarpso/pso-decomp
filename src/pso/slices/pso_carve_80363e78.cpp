#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801004DC(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80110240(M2C_UNK, void **, M2C_UNK *);

void fn_80363E78(void) {
    void *spC;
    M2C_UNK sp8;

    fn_80110240(5, &spC, &sp8);
    if (spC != NULL) {
        fn_801004DC(M2C_FIELD(spC, s32 *, 0x2C), 2, 2, 0xB);
    }
}

}
