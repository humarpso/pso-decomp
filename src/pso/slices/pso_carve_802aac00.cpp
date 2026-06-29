#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8FC();
s32 fn_80019690();
s32 TBoss6PlotFalz__sub_802AAC74(void);
void TBoss6PlotFalz__sub_802AAC98(void* p);
int TBoss6PlotFalz__sub_802AACEC(void);

s32 TBoss6PlotFalz__sub_802AAC00(void *arg0, s16 *arg1, s16 *arg2) {
    if (TBoss6PlotFalz__sub_802AAC74() < 1) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    return 1;
}
s32 TBoss6PlotFalz__sub_802AAC74(void) { return 0; }
void TBoss6PlotFalz__sub_802AAC98(void* p) { *(s32*)((char*)p + 0x3c8) = 1; }
u8 TBoss6PlotFalz__sub_802AACA4(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((fn_8000F8FC() == 0xF) || (fn_80019690() != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
int TBoss6PlotFalz__sub_802AACEC(void) { return 0; }

}
