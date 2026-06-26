#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8018D3B8(M2C_UNK);
s32 fn_8018D3C0(M2C_UNK);
s32 fn_8018D900(M2C_UNK);
s32 fn_8018D93C(M2C_UNK);

void fn_8018CD48(void *arg0) {
    s32 var_r0;
    s32 temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
        if (temp_r3 <= 1) {
            var_r0 = temp_r3;
        }
    }
    switch (var_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x368) = fn_8018D3C0(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = fn_8018D3C0(1);
        M2C_FIELD(arg0, s32 *, 0x370) = fn_8018D3C0(2);
        M2C_FIELD(arg0, s32 *, 0x374) = fn_8018D3C0(3);
        M2C_FIELD(arg0, s32 *, 0x24) = fn_8018D3B8(0);
        return;
    default:
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = fn_8018D93C(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = fn_8018D93C(1);
        M2C_FIELD(arg0, s32 *, 0x370) = fn_8018D93C(2);
        M2C_FIELD(arg0, s32 *, 0x374) = fn_8018D93C(3);
        M2C_FIELD(arg0, s32 *, 0x24) = fn_8018D900(0);
        return;
    }
}

}
