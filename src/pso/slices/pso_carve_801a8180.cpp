#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(void *, M2C_UNK);
s32 TPhotonMylla__sub_80154CB4(s32, f32);
M2C_UNK fn_801569F4(s32, s32);
extern M2C_UNK __vt__18TPhotonConcentrate[];
extern s32 lbl_805D34D0;

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;

    fn_801569F4((s32)arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TPhotonConcentrate;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D34D0;
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, VecCopy__FP3VecPC3Vec(arg0 + 0xB8, arg1));
    VecCopy__FP3VecPC3Vec(arg0 + 0xD0, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC4, arg1 + 0x18);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) * M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) * M2C_FIELD(arg1, f32 *, 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (temp_f1 * M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0xFC) = TPhotonMylla__sub_80154CB4(arg3, temp_f1);
    M2C_FIELD(arg0, s32 *, 0xF8) = TBoss4Type2__sub_800874F4(arg0 + 0xB8, 0x135);
    return arg0;
}

}
