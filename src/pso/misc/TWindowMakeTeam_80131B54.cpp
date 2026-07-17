#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_sub_position__15TWindowMakeTeamFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK save_position__17TWindowSubComCardFPv(void *, int, int, f32);

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void set_sub_position__15TWindowMakeTeamFPvPv(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r5;

    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    M2C_FIELD(temp_r5, f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) - lbl_805DB078);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    M2C_FIELD(temp_r4, f32 *, 0x34) = (f32) (temp_f1 - lbl_805DB07C);
    save_position__17TWindowSubComCardFPv((void *) (M2C_FIELD(arg0, void **, 0x20)), (int) (temp_r4), (int) (temp_r5), (f32) (temp_f1));
}

}
