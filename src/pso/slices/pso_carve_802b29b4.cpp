#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type1__sub_802B5E48();
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);

void fn_802B29B4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6Type1__sub_802B5E48() != 0) {
            TBoss6Type1__sub_802B9204(arg0, 0x20);
            return;
        }
        TBoss6Type1__sub_802B9204(arg0, 0x1F);
    }
}

}
