#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80120500(void *arg0);
void *TObjPlayer__sub_80015DC4(s32, s32);
M2C_UNK TObjPlayer__sub_801210C0(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801210C8(s32, M2C_UNK);

void TObjPlayer__sub_80120500(void *arg0) {
    s32 var_r30;
    void *temp_r3;

    TObjPlayer__sub_801210C8(M2C_FIELD(arg0, s32 *, 0xF0), 0);
    TObjPlayer__sub_801210C0(M2C_FIELD(arg0, s32 *, 0xF0), 0);
    var_r30 = 0;
    do {
        temp_r3 = TObjPlayer__sub_80015DC4(M2C_FIELD(arg0, s32 *, 0xF0), var_r30);
        M2C_FIELD(temp_r3, s8 *, 0) = 0;
        var_r30 += 1;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
    } while (var_r30 != 3);
}

}
