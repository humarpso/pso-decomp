#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_mag_scale__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_80102CD8(s32);

extern f32 lbl_805DAA90;

f32 get_mag_scale__10TObjPlayerFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r3 != 0U) {
        return TObjPlayer__sub_80102CD8(temp_r3 + 0x608);
    }
    return lbl_805DAA90;
}

}
