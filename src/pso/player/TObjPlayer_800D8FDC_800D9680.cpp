#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800D9680(void* a0);
void *TObjPlayer__sub_800D96D0(void *arg0, s16 arg1);
s32 lookup_entry_by_value__10TObjPlayerFPvf(void *arg0, f32 farg0);
void set_rate_from_divisor__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK __dl__FPv(void *);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32, f32);

    extern const float lbl_805DA3DC;
void TObjPlayer__sub_800D9680(void* a0) { *(float*)((char*)a0 + 0x0) = lbl_805DA3DC; *(float*)((char*)a0 + 0x4) = lbl_805DA3DC; *(float*)((char*)a0 + 0x8) = lbl_805DA3DC; *(float*)((char*)a0 + 0xc) = lbl_805DA3DC; }

extern const f64 lbl_8043C758;
extern const f32 lbl_805DA3E0;

void set_rate_from_divisor__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805DA3E0 / (f32) arg1);
}

extern M2C_UNK lbl_80494AE0[];

void *TObjPlayer__sub_800D96D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_80494AE0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DA3E8;

s32 lookup_entry_by_value__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    void *var_r31;
    f32 temp_f2;
    f32 temp_f_sda;
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r3;

    var_r31 = arg0;
    temp_f2 = M2C_FIELD(var_r31, f32 *, 0xC);
    if ((farg0 < temp_f2) || (farg0 > M2C_FIELD(var_r31, f32 *, 0x10))) {
        return 0;
    }
    temp_f_sda = lbl_805DA3E8;
    {
        f32 temp_sub = farg0 - temp_f2;
        temp_r4 = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((temp_sub + lbl_805DA3E8) / M2C_FIELD(var_r31, f32 *, 0x14), lbl_805DA3E8);
    }
    temp_r0 = M2C_FIELD(var_r31, s32 *, 0x4);
    temp_r3 = M2C_FIELD(var_r31, s32 *, 0x0);
    return temp_r3 + temp_r0 * temp_r4 * 0xC;
}

}
