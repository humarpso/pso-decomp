#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_speed_or_default__10TObjPlayerFPv(void *arg0);
f32 TObjPlayer__sub_800822E0();

extern f32 lbl_805DB168;

f32 get_speed_or_default__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        return lbl_805DB168;
    }
    return TObjPlayer__sub_800822E0();
}

}
