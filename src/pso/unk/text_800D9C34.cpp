#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800DC420(void *, int);
f32 TObjPlayer__sub_800DC434(void *, int);
extern f32 lbl_805D525C;
extern f32 lbl_805D5260;
extern f32 lbl_805D5264;
extern f32 lbl_805D5268;
extern s32 lbl_805D526C;
extern s32 lbl_805D5270;
void TObjPlayer__sub_800D9E08(s32 arg0);
}

extern "C" {

s32 TObjPlayer__sub_800D9C34(s32 arg0);
s32 TObjPlayer__sub_80016FF8();
M2C_UNK fn_800D9BBC(s32);

s32 TObjPlayer__sub_800D9C34(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        fn_800D9BBC(arg0);
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800D9E08(s32 arg0) {
    lbl_805D525C = TObjPlayer__sub_800DC434((void *) (arg0), (int) (1));
    lbl_805D5260 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (2));
    lbl_805D5264 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (3));
    lbl_805D5268 = TObjPlayer__sub_800DC434((void *) (arg0), (int) (4));
    lbl_805D526C = TObjPlayer__sub_800DC420((void *) (arg0), (int) (0));
    lbl_805D5270 = TObjPlayer__sub_800DC420((void *) (arg0), (int) (1));
}

}
