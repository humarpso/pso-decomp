#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BC364(void *arg0);
s32 fn_80019690();

extern s32 lbl_805D53A0;

s32 TBoss6Type2__sub_802BC364(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
        return 1;
    }
    if (fn_80019690() != 0) {
        return 0;
    }
    return (lbl_805D53A0 - (s32) M2C_FIELD(arg0, u16 *, 0x55C)) != 0 ? 1 : 0;
}

}
