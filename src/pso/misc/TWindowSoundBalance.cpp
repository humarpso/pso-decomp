#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK apply_balance__19TWindowSoundBalanceFPvPv(s32, void *, f32, f32);
void *fn_80244CF4();
M2C_UNK fn_80245F98(s32, void *);
M2C_UNK fn_80257BC0(s32, s32, void *);

extern const f32 lbl_805DD40C;
extern const f32 lbl_805DD410;

void render__19TWindowSoundBalanceFv(s32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r3;

    temp_r3 = fn_80244CF4();
    fn_80245F98(arg0, temp_r3);
    fn_80257BC0(arg0, arg0 + 0x24, temp_r3);
    temp_f2 = M2C_FIELD(temp_r3, f32 *, 0x10);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (temp_f2 + lbl_805DD40C);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x18);
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) (temp_f1 - lbl_805DD410);
    apply_balance__19TWindowSoundBalanceFPvPv(arg0, temp_r3, temp_f1, temp_f2);
}

}
