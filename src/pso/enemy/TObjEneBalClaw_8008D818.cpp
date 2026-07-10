#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_claw_angle__14TObjEneBalClawFPv(void *arg0);

extern f32 lbl_805D9600;

void update_claw_angle__14TObjEneBalClawFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFF9);
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x3B4);
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x3B0);
            if (temp_f1 < temp_f0) {
                M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (temp_f1 + lbl_805D9600);
                return;
            }
            M2C_FIELD(arg0, f32 *, 0x3B4) = temp_f0;
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 4);
            return;
        }
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3B4);
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x3AC);
        if (temp_f1_2 > temp_f0_2) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (temp_f1_2 - lbl_805D9600);
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x3B4) = temp_f0_2;
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) | 2);
    }
}

}
