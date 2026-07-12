#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_anim__12TOSwitchItemFPv(void *arg0);

M2C_UNK init_switch_id__5TOKeyFPv();

void update_anim__12TOSwitchItemFPv(void *arg0) {
    f32 temp_f0;

    init_switch_id__5TOKeyFPv();
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (temp_f0 * temp_f0);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) >= 8) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 1);
}

}
