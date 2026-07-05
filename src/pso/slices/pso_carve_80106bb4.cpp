#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80106D0C(s32, void *);
u8 fn_80107790(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *lbl_805D5460;

void fn_80106BB4(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r3;
    u8 call_res;

    fn_80106D0C(arg0, arg2);
    call_res = (u8) fn_80107790(arg0, M2C_FIELD(lbl_805D5460, s32 *, 0x10), 0, 5, 1);
    M2C_FIELD(arg2, u8 *, 2) = (u8) (arg1 + call_res + M2C_FIELD(lbl_805D5460, u8 *, 0x48));
    temp_r3 = M2C_FIELD(arg2, u8 *, 2);
    if (temp_r3 < 3U) {
        M2C_FIELD(arg2, u8 *, 2) = 0U;
    } else {
        M2C_FIELD(arg2, u8 *, 2) = (u8) (temp_r3 - 3);
    }
}

}
