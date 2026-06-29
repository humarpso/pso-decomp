#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss6Type2__sub_802BD938(void *, M2C_UNK *);
M2C_UNK TBoss6Type2__sub_802BDD6C(void *, M2C_UNK, M2C_UNK *);

void TBoss6Type2__sub_802BDD1C(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r4;

    TBoss6Type2__sub_802BD938(arg0, &sp8);
    var_r4 = 4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
        var_r4 = 5;
    }
    TBoss6Type2__sub_802BDD6C(arg0, var_r4, &sp8);
}

}
