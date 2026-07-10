#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__18TWindowEffectPartyFv(void *arg0);
M2C_UNK TNowLoading__sub_80087660(u32, M2C_UNK *);
s32 TWindowEffectParty__sub_8024F690(void *, f32, f32);
M2C_UNK calc_effect_position__18TWindowEffectPartyFPvPv(void *, M2C_UNK *);
s32 fn_80244994();
u32 fn_8024FB80(s8);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DCCD4;

void run_task__18TWindowEffectPartyFv(void *arg0) {
    M2C_UNK sp8;
    u8 temp_r0;
    u8 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u8 *, 0x1E);
    if (((s8) temp_r3 > 0) && ((fn_8024FB80((s8) (temp_r3 - 1)) == 0U) || (fn_80244994() == 0))) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
    switch ((s8) temp_r0) {
    case 0:
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
    case 1:
        if (TWindowEffectParty__sub_8024F690(arg0, lbl_805DCCD4, M2C_FIELD(arg0, f32 *, 0x24)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
        }
        break;
    case 2:
        if (TWindowEffectParty__sub_8024F690(arg0, lbl_805DCCD4, M2C_FIELD(arg0, f32 *, 0x2C)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3U;
        }
        break;
    case 3:
        if (TWindowEffectParty__sub_8024F690(arg0, M2C_FIELD(arg0, f32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x2C)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
        }
        break;
    case 4:
        queue_destruction__7TObjectFv(arg0);
        break;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        calc_effect_position__18TWindowEffectPartyFPvPv(arg0, &sp8);
        TNowLoading__sub_80087660(M2C_FIELD(arg0, u32 *, 0x30), &sp8);
    }
}

}
