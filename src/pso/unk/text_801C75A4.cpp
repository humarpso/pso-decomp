#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8001053C(void *);
s32 apply_velocity__10TObjPlayerFPv(void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 calc_direction_vector__10TObjPlayerFiPvf(int, void *, f32);
u32 TObjPlayer__sub_801B5EA4(void *);
s32 interpolate_angle__10TObjPlayerFPvUsUsPv(void *, int, void *, void *);
s32 TObjPlayer__sub_801D0DAC(void *);
extern const f32 lbl_805DC364;
void TObjPlayer__sub_801C75A4(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801C75A4(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x60) = interpolate_angle__10TObjPlayerFPvUsUsPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (void *) (TObjPlayer__sub_801D0DAC((void *) (arg0))), (void *) (&sp8));
    temp_f1 = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x308)) - lbl_805DC364;
    if (temp_f1 < lbl_805DC364) {
        TObjPlayer__sub_8001053C((void *) (arg0));
    } else {
        calc_direction_vector__10TObjPlayerFiPvf((int) (M2C_FIELD(arg0, s32 *, 0x60)), (void *) (arg0 + 0x308), (f32) (temp_f1));
    }
    if (TObjPlayer__sub_801B5EA4((void *) (arg0)) == 0U) {
        apply_velocity__10TObjPlayerFPv((void *) (arg0));
    }
}

}
