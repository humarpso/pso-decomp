#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B5D38(s32 arg0);
M2C_UNK TObjPlayer__sub_801B59C4(s32);
s32 fn_80019248();
s32 fn_8002AE08(u16);
M2C_UNK fn_801C1E74(s32);
M2C_UNK fn_801C1EA4(s32);
M2C_UNK fn_801C1EC4(s32);
M2C_UNK fn_801C1EF4(s32);
s32 fn_801C1F50(s32);
s32 fn_803517F8(s32, s32);

s32 obj_getField1c(s32);

void TObjPlayer__sub_801B5D38(s32 arg0) {
    if (fn_80019248() != 0) {
        if (fn_803517F8(arg0 + 0x550, fn_8002AE08(obj_getField1c(arg0))) != 0) {
            fn_801C1EF4(arg0 + 0x500);
            if (fn_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1EC4(arg0 + 0x500);
            }
        } else {
            fn_801C1EA4(arg0 + 0x500);
            if (fn_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1E74(arg0 + 0x500);
            }
        }
        TObjPlayer__sub_801B59C4(arg0);
    }
}

}
