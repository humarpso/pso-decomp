#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_target_vector__12TBoss1DragonFPv(u8 *arg0);
void TBoss1Dragon__sub_800293E4(void);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);

extern const f32 TBoss1Dragon__data_805D7F28;

void calc_target_vector__12TBoss1DragonFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x5C8) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x40C));
    M2C_FIELD(arg0, f32 *, 0x5CC) = (f32) TBoss1Dragon__data_805D7F28;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x5D0) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x414));
    M2C_FIELD(arg0, f32 *, 0x5D4) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x5C8, temp_f1, temp_f2);
}

extern const f32 lbl_805D7F30;

void TBoss1Dragon__sub_800293E4(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D7F30);
}

}
