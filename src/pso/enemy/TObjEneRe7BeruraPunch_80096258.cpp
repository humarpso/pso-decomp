#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7BeruraPunch__sub_80096258(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
M2C_UNK TObjEneRe7BeruraPunch__sub_800963B0(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
f32 fn_803D64C0(s32);
f32 fn_803D64DC(s32);

extern const f32 lbl_805D9794;
extern const f32 lbl_805D97B4;

void TObjEneRe7BeruraPunch__sub_80096258(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 0xB8) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0xDC, arg2);
    TObjEneRe7BeruraPunch__sub_80096300(arg0);
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D97B4;
    TObjEneRe7BeruraPunch__sub_800963B0(arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = 1;
}

}
