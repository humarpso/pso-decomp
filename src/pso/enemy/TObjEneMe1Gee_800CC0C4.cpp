#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
M2C_UNK TObjEneMe1Gee__sub_800CB5B8(void *);
M2C_UNK TObjEneMe1Gee__sub_800CB5D4(void *);
M2C_UNK TObjEneMe1Gee__sub_800CB5F0(void *);
M2C_UNK TObjEneMe1Gee__sub_800CB60C(void *);
extern const f32 TObjEneMe1Gee__data_805DA0EC;
extern const f32 lbl_805DA140;
extern const f32 lbl_805DA144;
void TObjEneMe1Gee__sub_800CC0C4(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjEneMe1Gee__sub_800CC0C4(u8 *arg0) {
    if ((s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x354))) == 0) {
        TObjEneMe1Gee__sub_800CB5D4((void *) (arg0));
    } else {
        TObjEneMe1Gee__sub_800CB5B8((void *) (arg0));
    }
    if ((s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) (M2C_FIELD(arg0, f32 *, 0x358))) == 0) {
        TObjEneMe1Gee__sub_800CB60C((void *) (arg0));
    } else {
        TObjEneMe1Gee__sub_800CB5F0((void *) (arg0));
    }
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) (lbl_805DA140 + M2C_FIELD(arg0, f32 *, 0x360));
    if (M2C_FIELD(arg0, f32 *, 0x3FC) < lbl_805DA144) {
        M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) lbl_805DA144;
    }
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) (TObjEneMe1Gee__data_805DA0EC + M2C_FIELD(arg0, f32 *, 0x35C));
    if (M2C_FIELD(arg0, f32 *, 0x400) < TObjEneMe1Gee__data_805DA0EC) {
        M2C_FIELD(arg0, f32 *, 0x400) = (f32) TObjEneMe1Gee__data_805DA0EC;
    }
}
#pragma pop

}
