#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemMagSub__vt0(void *arg0, s16 arg1);
void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
s32 calc_feed_level__11TItemMagSubFPv(void *arg0);
void clear_flag2__11TItemMagSubFPv(void *arg0);
void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1);
void reset__11TItemMagSubFPv(u8 *arg0);
void reset_stats__11TItemMagSubFPv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void __dt__7TObjectFv(void *, int);
M2C_UNK clear_flags64__11TItemMagSubFPvUi(void *, M2C_UNK);
void free_to_heap__11TItemMagSubFPv(void *);
M2C_UNK memset(void *, int, int);

void clear_flag2__11TItemMagSubFPv(void *arg0) {
    if ((u32) arg0 != 0U) {
        clear_flags64__11TItemMagSubFPvUi(arg0, 2);
    }
}

extern const f32 TItemMagSub__data_805DABC8;

void reset_stats__11TItemMagSubFPv(u8 *arg0) {
    memset(arg0 + 0x34, 0, 0xC);
    memset(arg0 + 0x58, 0, 0xC);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
}

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * TBoss8Dragon__sub_803D64C0(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

s32 calc_feed_level__11TItemMagSubFPv(void *arg0) {
    s32 temp_r3;
    void **temp_r4_2;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_3;

    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r4_2 = M2C_FIELD(temp_r3_2, void ***, 0xF8);
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x60);
    if (temp_r4_2 != NULL) {
        temp_r4_3 = *temp_r4_2;
        if (temp_r4_3 != NULL) {
            temp_r4 = M2C_FIELD(temp_r4_3, void **, 4);
            if (temp_r4 != NULL) {
                return temp_r3 + M2C_FIELD(temp_r4, s16 *, 4);
            }
        }
    }
    return temp_r3;
}

extern M2C_UNK __vt__11TItemMagSub[];

void *TItemMagSub__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemMagSub;
        destroy__11TItemMagSubFPvs((void *)((void *)(arg0)), (s16)((s16)(0)));
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F5A0[];

void *destroy__11TItemMagSubFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F5A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 TItemMagSub__data_805DABC8;

void reset__11TItemMagSubFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, M2C_FIELD(arg0, s32 *, 0x20) + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TItemMagSub__data_805DABC8;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

}
