#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B7988(void *arg0);

M2C_UNK TBoss6Type1__sub_802B78BC(void *);
M2C_UNK TBoss6Type1__sub_802B7918(void *);
M2C_UNK TBoss6Type1__sub_802B7944();

void TBoss6Type1__sub_802B7988(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        TBoss6Type1__sub_802B7918(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        TBoss6Type1__sub_802B78BC(arg0);
    }
}

}
