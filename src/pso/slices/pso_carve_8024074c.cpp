#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802405B0(void *, M2C_UNK);
M2C_UNK fn_803AA2FC(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_804CD9A8[];

s32 fn_8024074C(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x16)) {
        return 4;
    }
    if ((arg1 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x288) == -1)) {
        return 8;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x288) > 0) {
        fn_802405B0(arg0, 0);
    }
    fn_803AA2FC(0x7F, 0, 0xFF);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x298) != 1) {
        return 9;
    }
    M2C_FIELD(arg0, s32 *, 0x2B0) = -1;
    M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) lbl_804CD9A8[arg1];
    M2C_FIELD(arg0, s32 *, 0x29C) = arg1;
    return 0;
}

}
