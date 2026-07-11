#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TKeyBoardControl__sub_801320F4(void);
s32 TKeyBoardControl__sub_80132150(s32 arg0);
s32 TKeyBoardControl__sub_801321B4(s32);
s32 TKeyBoardControl__sub_801322E4(s32);
s32 TKeyBoardControl__sub_80132310(void);
M2C_UNK fn_803F0E90(s32, M2C_UNK);
s32 fn_803F1604(s32, M2C_UNK *);

void TKeyBoardControl__sub_801320F4(void) {
    M2C_UNK sp8;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = fn_803F1604(var_r31, &sp8);
        if ((temp_r3 == -1) || (temp_r3 == -0x80)) {
            fn_803F0E90(var_r31, 0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

s32 TKeyBoardControl__sub_80132150(s32 arg0) {
    if (TKeyBoardControl__sub_80132310() != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801322E4(arg0) != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801321B4(arg0) != 0) {
        return 0;
    }
    return 1;
}

}
