#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80363E78(void);
M2C_UNK TItemLoad__sub_80110240(M2C_UNK, void **, M2C_UNK *);
M2C_UNK TObjPlayer__sub_801004DC(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void TObjPlayer__sub_80363E78(void) {
    void *spC;
    M2C_UNK sp8;

    TItemLoad__sub_80110240(5, &spC, &sp8);
    if (spC != NULL) {
        TObjPlayer__sub_801004DC(M2C_FIELD(spC, s32 *, 0x2C), 2, 2, 0xB);
    }
}

}
