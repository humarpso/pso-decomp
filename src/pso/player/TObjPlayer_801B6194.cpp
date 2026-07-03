#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TObjPlayer__sub_801B6194(s32 arg0, s16 *arg1, s16 arg2);
void TObjPlayer__sub_801B61D4(void *arg0, s32 arg1);
void TObjPlayer__sub_801B6218(void *arg0, s32 arg1);
void TObjPlayer__sub_801B625C(void *arg0, s32 arg1);
void TObjPlayer__sub_801B62A0(void *arg0, s32 arg1);
void TObjPlayer__sub_801B62E4(void *arg0, s32 arg1);
void TObjPlayer__sub_801B6328(void *arg0, s32 arg1);
void TObjPlayer__sub_801B636C(void *arg0, s32 arg1);
s16 *fn_801D93C4();

s16 TObjPlayer__sub_801B6194(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

void TObjPlayer__sub_801B61D4(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC, M2C_FIELD(fn_801D93C4(), s16 *, 0xC));
}

void TObjPlayer__sub_801B6218(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 4, M2C_FIELD(fn_801D93C4(), s16 *, 4));
}

void TObjPlayer__sub_801B625C(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA, M2C_FIELD(fn_801D93C4(), s16 *, 0xA));
}

void TObjPlayer__sub_801B62A0(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 2, M2C_FIELD(fn_801D93C4(), s16 *, 2));
}

void TObjPlayer__sub_801B62E4(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 6, M2C_FIELD(fn_801D93C4(), s16 *, 6));
}

void TObjPlayer__sub_801B6328(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0) + 8, M2C_FIELD(fn_801D93C4(), s16 *, 8));
}

void TObjPlayer__sub_801B636C(void *arg0, s32 arg1) {
    TObjPlayer__sub_801B6194(arg1, M2C_FIELD(arg0, s32 *, 0x2B0), *fn_801D93C4());
}

}
