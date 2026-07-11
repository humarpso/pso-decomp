#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK reset_state__14TBoss6PlotFalzFPv(s32);
M2C_UNK TBoss6PlotFalz__sub_802AB260(s32);
M2C_UNK release_object__11TBoss6Type1FPv();
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);

void fn_802B2800(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    release_object__11TBoss6Type1FPv();
    fn_8022675C(0x4003B515, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    TBoss6PlotFalz__sub_802AB260(M2C_FIELD(arg0, s32 *, 0x3F8));
    reset_state__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    if (TBoss6Type1__sub_802B529C(arg0, 0x1F, 4) == 0) {
        fn_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

}
