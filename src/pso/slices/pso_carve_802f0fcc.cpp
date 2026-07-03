#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjAreaWarpForest__ct(void *);
extern M2C_UNK lbl_804E48D8[];

void *fn_802F0FCC(void *arg0) {
    TObjAreaWarpForest__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E48D8;
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
    return arg0;
}

}
