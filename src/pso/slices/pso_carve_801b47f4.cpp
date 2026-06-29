#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 obj_getField1c(s32);
s32 TObjPlayer__sub_801B472C(s32);
M2C_UNK fn_801C1F1C(s32);
s32 fn_801CBD00();
M2C_UNK fn_801D6158(s32);
M2C_UNK fn_801D6230(s32, s32, s32);

void TObjPlayer__sub_801B47F4(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_801CBD00();
    if (((u16)temp_r3 == 0xFFFF) || ((u16)temp_r3 == obj_getField1c(arg0))) {
        fn_801D6158(arg0 + 0x4AC);
        return;
    }
    fn_801C1F1C(arg0 + 0x4AC);
    if (TObjPlayer__sub_801B472C(arg0) != 0) {
        fn_801D6230(arg0 + 0x4AC, arg0, temp_r3);
    }
}

}
