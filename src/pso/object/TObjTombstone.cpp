#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TObjTombstoneFv(s32 arg0);
s32 fn_8006F190(M2C_UNK);
M2C_UNK fn_80075340(s32);
M2C_UNK fn_800753DC(s32);
M2C_UNK fn_80075764(s32);
s32 fn_800758C8();

void render__13TObjTombstoneFv(s32 arg0) {
    s32 temp_r3;

    if (fn_800758C8() != 0) {
        fn_80075764(arg0);
        temp_r3 = fn_8006F190(-1);
        switch (temp_r3) {
        case 2:
        case 3:
            fn_80075340(arg0);
            break;
        default:
            fn_800753DC(arg0);
            break;
        }
    }
}

}
