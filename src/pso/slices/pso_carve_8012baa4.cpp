#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800112A4(s32, s16);
M2C_UNK TObjectV8047c128_subtract_hp(s32, s16);
s16 obj_getS16_32E(s32);
s32 fn_802034EC();

void fn_8012BAA4(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;

    if (fn_802034EC() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), temp_r0);
            fn_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) (temp_r0 / 2));
        }
    }
}

}
