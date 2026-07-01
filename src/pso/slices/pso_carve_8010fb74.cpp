#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001BED8(s32, M2C_UNK);
M2C_UNK TAdRicoRing__sub_8001BEE8(s32, M2C_UNK);
M2C_UNK fn_8010FBD4(s32);
s32 TItemLoad__sub_801107B8();

void fn_8010FB74(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TItemLoad__sub_801107B8();
    if (temp_r3 != 2) {
        if (temp_r3 == 3) {
            TAdRicoRing__sub_8001BEE8(arg0 + 0x1C, 1);
        } else {
            fn_8001BED8(arg0 + 0x1C, 1);
        }
        fn_8010FBD4(arg0);
    }
}

}
