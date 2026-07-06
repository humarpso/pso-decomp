#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6PlotFalz__sub_802AB23C(s32);
M2C_UNK TBoss6PlotFalz__sub_802AB28C(s32);
M2C_UNK TBoss6Type1__sub_802B49A4(void *);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B7E7C(void *);

void fn_802B2A10(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x12C;
    TBoss6PlotFalz__sub_802AB28C(M2C_FIELD(arg0, s32 *, 0x3F8));
    TBoss6PlotFalz__sub_802AB23C(M2C_FIELD(arg0, s32 *, 0x3F8));
    TBoss6Type1__sub_802B49A4(arg0);
    fn_8022675C(0x40039C13, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    TBoss6Type1__sub_802B7E7C(arg0);
}

}
