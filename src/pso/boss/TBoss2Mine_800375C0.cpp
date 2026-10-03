#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void move_mine__10TBoss2MineFPv(u8 *arg0);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TBoss2Mine__data_805D84D4;
extern const f32 lbl_805D84E4;
void TBoss2Mine__sub_80037AEC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TBoss2Mine__sub_80037C6C(void *arg0);
void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s32 is_alive__9TObjEneDDFPv(s32);

extern const f32 lbl_805D84E8;

void TBoss2Mine__sub_80037AEC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 var_r31;
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 0x100);
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x2FC), (s32)(arg1));
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg2;
    temp_r31 = arg3 * 0x5555;
    M2C_FIELD(arg0, s32 *, 0x3F4) = arg3;
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (lbl_805D84E4 * sin_table_lookup(temp_r31));
    M2C_FIELD(arg0, f32 *, 0x3FC) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x400) = (f32) (lbl_805D84E4 * cos_table_lookup(temp_r31));
    if (arg3 == 0) {
        var_r31 = 0x8000;
    } else if (arg3 == 1) {
        var_r31 = 0x6800;
    } else {
        var_r31 = 0x9800;
    }
    M2C_FIELD(arg0, f32 *, 0x404) = sin_table_lookup(var_r31);
    M2C_FIELD(arg0, f32 *, 0x408) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x40C) = cos_table_lookup(var_r31);
    M2C_FIELD(arg0, s32 *, 0x60) = var_r31;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) TBoss2Mine__data_805D84D4;
    move_mine__10TBoss2MineFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x38), (s32)(arg0 + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

void move_mine__10TBoss2MineFPv(u8 *arg0) {
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x3F0)) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x390, M2C_FIELD(arg0, s32 *, 0x3F0) + 0x38);
        vec3_add_to(arg0 + 0x390, arg0 + 0x3F8);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + lbl_805D84E8);
    }
}

extern f32 TBoss2Mine__data_805D84EC;

void TBoss2Mine__sub_80037C6C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TBoss2Mine__data_805D84EC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

}
