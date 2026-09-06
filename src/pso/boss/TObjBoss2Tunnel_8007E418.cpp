#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TObjBoss2Tunnel__sub_8007E764(void *arg0, void *arg1, s32 arg2);
s32 TCameraCtrl__sub_80069258();
M2C_UNK TCameraCtrl__sub_803D8934(M2C_UNK, s32, s32);
M2C_UNK TCameraCtrl__sub_803D976C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void TObjBoss2Tunnel__sub_8007E884(s32 arg0, s32 arg1, s32 arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TObjBoss2Tunnel__sub_8007E7D8(f32 *arg0, f32 *arg1, s32 arg2);
s32 TObjBoss2Tunnel__sub_8007E6C4(u8 *arg0);
}

extern "C" {

s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1);
f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 arg0, f32 farg0);
s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0);
s32 decrement_packed_timer__15TObjBoss2TunnelFPvi(u32 *arg0, s32 arg1);
void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1, s32 _w2);
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(s32 arg0, void *arg1, void *arg2);
int TBoss4Zako__sub_803D8910(void*, void*);
void *TBoss8Dragon__sub_8007A544(void *, M2C_UNK, f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);

s32 decrement_packed_timer__15TObjBoss2TunnelFPvi(u32 *arg0, s32 arg1) {
    u32 temp_r5;

    temp_r5 = *arg0;
    if ((s32)((temp_r5 >> 24) - arg1) < 0) {
        *arg0 = temp_r5 & 0xFFFFFF;
        return 1;
    }
    *arg0 = ((((temp_r5 >> 24) - arg1) << 24) & 0xFF000000) | (temp_r5 & 0xFFFFFF);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 spawn_effect__15TObjBoss2TunnelFiPvPv(s32 arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = TBoss8Dragon__sub_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        VecCopy__FP3VecPC3Vec(arg2, M2C_FIELD(temp_r3, s32 *, 4) + 0xC);
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = TBoss8Dragon__sub_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1, s32 _w2) { TObjBoss2Tunnel__sub_8007E7D8((f32 *)(p), (f32 *)((char*)p + 0x8), (s32)(_w2)); TBoss4Zako__sub_803D8910(p, a1); }

s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        if (!(temp_r3 & 8)) {
            var_r31 += 1;
        }
        if (!(temp_r3 & 0x10)) {
            var_r31 += count_active_segments__15TObjBoss2TunnelFPv((void *)(M2C_FIELD(arg0, void **, 0x2C)));
        }
        arg0 = M2C_FIELD(arg0, void **, 0x30);
    } while (arg0 != NULL);
    return var_r31;
}

extern f32 TObjBoss2Tunnel__data_805D926C;

s32 TObjBoss2Tunnel__sub_8007E6C4(u8 *arg0) {
    s32 var_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    var_r31 = 1;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2C));
    if (temp_r3 != NULL) {
        var_r31 = TObjBoss2Tunnel__sub_8007E6C4(temp_r3) + 1;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3_2 != NULL) {
        var_r31 += TObjBoss2Tunnel__sub_8007E6C4(temp_r3_2);
    }
    return var_r31;
}

f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 arg0, f32 farg0) {
    return (TObjBoss2Tunnel__data_805D926C * farg0) / TBoss8Dragon__sub_803D64C0(arg0 / 2);
}
#pragma push
#pragma fp_contract on
void TObjBoss2Tunnel__sub_8007E764(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f3;
    temp_f31 = TBoss8Dragon__sub_803D64DC(arg2);
    temp_f1 = TBoss8Dragon__sub_803D64C0(arg2);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f31 * temp_f3) - (temp_f1 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * temp_f3) + (temp_f31 * temp_f0));
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjBoss2Tunnel__sub_8007E7D8(f32 *arg0, f32 *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f3;
    temp_f31 = TBoss8Dragon__sub_803D64DC(arg2);
    temp_f1 = TBoss8Dragon__sub_803D64C0(arg2);
    temp_f0 = *arg0;
    temp_f3 = *arg1;
    *arg1 = (temp_f31 * temp_f3) - (temp_f1 * temp_f0);
    *arg0 = (temp_f1 * temp_f3) + (temp_f31 * temp_f0);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjBoss2Tunnel__sub_8007E884(s32 arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_803D9B2C();
    TCameraCtrl__sub_803D976C(0, TCameraCtrl__sub_80069258());
    TCameraCtrl__sub_803D8934(0, arg1, arg2);
    TObjPlayer__sub_803D9B78();
}
#pragma pop

}
