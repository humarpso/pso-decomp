#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);
s32 calc_field4f0_delta__11TBoss6Type2FPv(void *arg0);
void copy_anim_state__11TBoss6Type2FPv(void *arg0);
s32 get_hit_count__11TBoss6Type2FPv(void *arg0);
void reset_attack_counter__11TBoss6Type2FPv(void *arg0);
void reset_indices__11TBoss6Type2FPv(void *arg0);

void reset_indices__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x518) = -1;
    M2C_FIELD(arg0, s32 *, 0x51C) = 0;
}

s32 get_hit_count__11TBoss6Type2FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F4);
}

void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if (temp_r0 < 9) {
        if (temp_r0 == 5) {
            goto block_4;
        }
        goto block_5;
    } else if (temp_r0 < 0xC) {
block_4:
        var_r4 *= 2;
    }
block_5:
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4F4) + var_r4);
}

void reset_attack_counter__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F4) = 0;
}

s32 calc_field4f0_delta__11TBoss6Type2FPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void copy_anim_state__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

}
