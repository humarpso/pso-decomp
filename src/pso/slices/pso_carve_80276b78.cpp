#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80276A38(void *, s32, M2C_UNK);

void TWindowSubCustomEquip__sub_80276B78(void *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = 0xB200;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) > 0) {
        var_r4 = 0x13200;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x68);
    if (var_r4 != temp_r3) {
        if ((s32) (u16) (var_r4 - temp_r3) < 0xC00) {
            M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
        } else {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3 + 0xC00);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) & 0x8000) {
        M2C_FIELD(arg0, s8 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x65) = 1;
        fn_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 9);
        fn_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x64) = 1;
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    fn_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 9);
    fn_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 0);
}

}
