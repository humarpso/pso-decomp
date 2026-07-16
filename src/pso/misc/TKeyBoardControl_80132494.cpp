#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TKeyBoardControl__sub_80132494(s32 arg0);
s32 TKeyBoardControl__sub_801323C8(void *, int);

void TKeyBoardControl__sub_80132494(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;

    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((void *) (arg0), (int) (M2C_FIELD(var_r28, u8 *, 0))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}

}
