#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_8007EB94(M2C_UNK);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK fn_8029F6C0();
extern u32 lbl_805D4EE8;

void fn_800833A4(void) {
    u32 temp_r3;

    lbl_805D4EE8 = 0U;
    if (TOKeyMachine01__sub_802034A8() == 0x21) {
        temp_r3 = fn_8007EB94(0x28);
        lbl_805D4EE8 = temp_r3;
        if (temp_r3 != 0U) {
            fn_8029F6C0();
        }
    }
}

}
