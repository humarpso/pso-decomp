#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8032DA84(void *arg0);
void *TObjPlayer__sub_8032DB44(void *arg0);
M2C_UNK TObjPlayer__sub_801085B0(s32, void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011EB84(void *, M2C_UNK *, s32, M2C_UNK);
s32 TObjPlayer__sub_8011F63C(void *);
M2C_UNK TObjPlayer__sub_801207E8(void *, M2C_UNK, M2C_UNK *);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
s16 TObjPlayer__sub_801D2EA8(s32);

extern s32 tl_05;

void TObjPlayer__sub_8032DA84(void *arg0) {
    M2C_UNK sp8;

    TObjPlayer__sub_801207E8(arg0, 4, &sp8);
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (TObjPlayer__sub_8011F63C(arg0) == 0) {
        TObjPlayer__sub_801085B0(tl_05, arg0, 4);
    }
}

extern M2C_UNK lbl_804EDC28[];

void *TObjPlayer__sub_8032DB44(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
    TObjPlayer__sub_8012106C(arg0, 2);
    return arg0;
}

}
