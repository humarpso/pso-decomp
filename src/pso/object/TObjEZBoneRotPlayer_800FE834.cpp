#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TObjEZBoneRotPlayerFv(void *arg0);
M2C_UNK advance_bone_rotation__19TObjEZBoneRotPlayerFPv(void *);

extern const f32 lbl_805DAA40;
extern const f32 lbl_805DAA44;
extern const f32 lbl_805DAA48;
extern const f32 lbl_805DAA4C;
extern const f32 lbl_805DAA50;

void run_task__19TObjEZBoneRotPlayerFv(void *arg0) {
    f32 temp_f1;
    s32 temp_r4;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x98);
    temp_r4 = M2C_FIELD(temp_r6, s32 *, 0x320) & 0xDF7FF;
    if (temp_r4 & 0x99003) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA40);
    } else if ((temp_r4 & 0x1E0) || ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != (s32) M2C_FIELD(temp_r6, s32 *, 0x60))) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA44);
    } else if (temp_r4 & 0x4661C) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA48);
    } else {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) + lbl_805DAA40);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (temp_f1 < lbl_805DAA4C) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DAA4C;
    } else if (temp_f1 > lbl_805DAA50) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DAA50;
    }
    advance_bone_rotation__19TObjEZBoneRotPlayerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x98), s32 *, 0x60);
}

}
