#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_params__10TObjPlayerFPvPvPviPv(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4);
s16 TObjPlayer__sub_800194E8(s32, s16);
s32 get_level__10TObjPlayerFPv(s32);

extern M2C_UNK lbl_80447120;
extern const f32 lbl_805DC330;

void set_params__10TObjPlayerFPvPvPviPv(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4) {
    s16 temp_r4;

    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) + get_level__10TObjPlayerFPv(arg3));
    temp_r4 = M2C_FIELD(arg2, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (temp_r4 + M2C_FIELD(arg4, s32 *, 0x1C));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg2, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 6) = (s16) (lbl_805DC330 * (f32) (M2C_FIELD(arg2, s16 *, 0xA) + TObjPlayer__sub_800194E8(arg3, temp_r4)));
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 4) + M2C_FIELD(arg4, s16 *, 0));
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg2, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg4, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg4, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg4, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg4, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg4, s16 *, 0xA);
}

}
