#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEnePanarms__sub_800E0C50(void *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK fn_800E1C98(void *, M2C_UNK);

void TObjEnePanarms__sub_800E0C50(void *arg0) {
    if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) {
        fn_800E1C98(arg0, 2);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        fn_800E1C98(arg0, 0);
    }
}

}
