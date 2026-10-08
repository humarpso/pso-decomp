#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void rotate_vec_xz(void *arg0, void *arg1, s32 arg2);
s32 TCameraCtrl__sub_80069258();
M2C_UNK matrix_mult_vec(M2C_UNK, s32, s32);
M2C_UNK TCameraCtrl__sub_803D976C(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void transform_vec_by_camera__15TObjBoss2TunnelFiii(s32 arg0, s32 arg1, s32 arg2);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void rotate_xz_pair_by_angle(f32 *arg0, f32 *arg1, s32 arg2);
s32 TObjBoss2Tunnel__sub_8007E6C4(u8 *arg0);
extern const f32 TObjBoss2Tunnel__data_805D9234;
bool is_vec_xz_cross_negative(u8 *arg0, u8 *arg1);
s32 angle_diff_s16(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s16 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(s32 arg0, s32 cur, s32 target, s32 step, s32 limit);
}

extern "C" {

s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1);
f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 arg0, f32 farg0);
s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0);
s32 decrement_packed_timer__15TObjBoss2TunnelFPvi(u32 *arg0, s32 arg1);
void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1, s32 _w2);
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(s32 arg0, void *arg1, void *arg2);
int vec3_add_to(void*, void*);
void *csnVecterUnder(void *, M2C_UNK, f32);
f32 sin_table_lookup(s32);
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
    temp_r3 = csnVecterUnder(arg1, 0x16EF, temp_f1);
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
    temp_r3 = csnVecterUnder(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1, s32 _w2) { rotate_xz_pair_by_angle((f32 *)(p), (f32 *)((char*)p + 0x8), (s32)(_w2)); vec3_add_to(p, a1); }

s16 turn_toward_angle_limited__15TObjBoss2TunnelFiiiii(s32 arg0, s32 cur, s32 target, s32 step, s32 limit) {
    target = angle_diff_s16(arg0, target);
    if (target > limit) {
        target = limit;
    } else if (target < -limit) {
        target = -limit;
    }
    if (cur * target >= 0) {
        cur = approach_angle_limited(cur, target, step);
    } else if (cur * angle_diff_s16(cur, target) >= 0) {
        if (cur >= 0) {
            cur = cur - step;
        } else {
            cur = cur + step;
        }
    } else {
        cur = approach_angle_limited(cur, target, step);
    }
    return cur;
}

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
    return (TObjBoss2Tunnel__data_805D926C * farg0) / sin_table_lookup(arg0 / 2);
}
#pragma push
#pragma fp_contract on
void rotate_vec_xz(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f3;
    temp_f31 = cos_table_lookup(arg2);
    temp_f1 = sin_table_lookup(arg2);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f31 * temp_f3) - (temp_f1 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f1 * temp_f3) + (temp_f31 * temp_f0));
}
#pragma pop

#pragma push
#pragma fp_contract on
void rotate_xz_pair_by_angle(f32 *arg0, f32 *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f3;
    temp_f31 = cos_table_lookup(arg2);
    temp_f1 = sin_table_lookup(arg2);
    temp_f0 = *arg0;
    temp_f3 = *arg1;
    *arg1 = (temp_f31 * temp_f3) - (temp_f1 * temp_f0);
    *arg0 = (temp_f1 * temp_f3) + (temp_f31 * temp_f0);
}
#pragma pop

#pragma push
#pragma fp_contract on
bool is_vec_xz_cross_negative(u8 *arg0, u8 *arg1) {
    return (((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0)) - (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 8))) >= TObjBoss2Tunnel__data_805D9234) == 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
void transform_vec_by_camera__15TObjBoss2TunnelFiii(s32 arg0, s32 arg1, s32 arg2) {
    push_matrix();
    TCameraCtrl__sub_803D976C(0, TCameraCtrl__sub_80069258());
    matrix_mult_vec(0, arg1, arg2);
    pop_matrix();
}
#pragma pop

}
