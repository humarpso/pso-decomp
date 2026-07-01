#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801085B0(s32, void *, M2C_UNK);
M2C_UNK fn_8011EB84(void *, M2C_UNK *, s32, M2C_UNK);
s32 fn_8011F63C(void *);
M2C_UNK fn_801207E8(void *, M2C_UNK, M2C_UNK *);
s16 TObjPlayer__sub_801D2EA8(s32);
extern s32 tl_05;

void fn_8032DA84(void *arg0) {
    M2C_UNK sp8;

    fn_801207E8(arg0, 4, &sp8);
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        fn_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        fn_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        fn_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        fn_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (fn_8011F63C(arg0) == 0) {
        fn_801085B0(tl_05, arg0, 4);
    }
}

}
