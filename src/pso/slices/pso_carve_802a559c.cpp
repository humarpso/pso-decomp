#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern const f32 lbl_805DDFF0;
extern const f32 lbl_805DDFF4;

void get_position_offset__14TChCrTagPlBackFPvPv(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(temp_r5, f32 *, 0x30) + M2C_FIELD(temp_r5, f32 *, 0x38)) - lbl_805DDFF0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(temp_r3, f32 *, 0x34) + M2C_FIELD(temp_r3, f32 *, 0x3C)) - lbl_805DDFF4);
    }
}

}
