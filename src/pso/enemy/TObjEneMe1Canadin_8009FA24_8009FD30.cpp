#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma fp_contract on
extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK fn_8009E1D4(s32, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK construct__12TTecZondeEffFPvPvPvPvf(void *, s32, void *, void *, f32);
M2C_UNK subtract_vector(void *, void *);
extern s32 tl_05;
extern const f32 lbl_805D9948;

void update_zonde_projectile(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    s32 var_r31;

    var_r31 = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + lbl_805D9948);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x34)) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg0 + 0x44);
        var_r31 = 1;
    } else {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x30);
        if (temp_f1 < temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        } else {
            temp_f2 = temp_f1 - temp_f0;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) (temp_f2 * (M2C_FIELD(arg0, f32 *, 0x20) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x24));
        }
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + M2C_FIELD(arg0, f32 *, 0x5C));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + M2C_FIELD(arg0, f32 *, 0x64));
    }
    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x50);
    subtract_vector(&sp8, arg0 + 0x38);
    temp_f31 = update_scale__15TObjBoss2TunnelFPv(&sp8);
    M2C_UNK nw_ret = __nw__7TObjectFUl(0x260);
    if (nw_ret != 0U) {
        construct__12TTecZondeEffFPvPvPvPvf((void *)nw_ret, tl_05, arg0 + 0x38, &sp8, temp_f31);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
    if (var_r31 != 0) {
        fn_8009E1D4(M2C_FIELD(arg0, s32 *, 0x1C), arg0 + 0x44);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
