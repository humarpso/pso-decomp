#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
s32 obj_getField1c(s32);
M2C_UNK fn_8003F108(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, M2C_UNK);
M2C_UNK fn_80087638(s32, s32);
s32 fn_80102CB4(s32);
s32 TObjPlayer__sub_801B12A8(s32);
s32 fn_802034B0();

void fn_8011D7DC(void *arg0) {
    s32 temp_r3;

    if ((TObjPlayer__sub_801B12A8(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (fn_80102CB4(M2C_FIELD(arg0, s32 *, 0x28)) == 0)) {
        fn_8003F108(M2C_FIELD(arg0, s32 *, 0x28));
        if ((fn_802034B0() == 1) && (obj_testFlags30(M2C_FIELD(arg0, s32 *, 0x28), 0x800) == 0)) {
            temp_r3 = TOSwitchAttack__sub_80087278(M2C_FIELD(arg0, s32 *, 0x28) + 0x2FC, M2C_FIELD(arg0, s32 *, 0x2C), 0x10);
            if (temp_r3 != 0) {
                fn_80087638(temp_r3, obj_getField1c(M2C_FIELD(arg0, s32 *, 0x28)));
            }
        }
    }
}

}
