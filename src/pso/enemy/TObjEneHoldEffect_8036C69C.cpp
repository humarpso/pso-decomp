#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_impose_hold__17TObjEneHoldEffectFPv(u8 *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_camera_visible__17TObjEneHoldEffectFPv(void *);

extern const f32 lbl_805E03A8;

s32 can_impose_hold__17TObjEneHoldEffectFPv(u8 *arg0) {
    u32 cond;
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    if (is_camera_visible__17TObjEneHoldEffectFPv(arg0 + 8) != 0) {
        return 0;
    }
    cond = (M2C_FIELD(arg0, f32 *, 0x10) < lbl_805E03A8);
    return (u32)__cntlzw(cond) >> 5;
}

}
