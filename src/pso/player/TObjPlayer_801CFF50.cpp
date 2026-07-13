#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_attack_state__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_801CFBFC(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, s16, M2C_UNK);
f32 TObjPlayer__sub_801D2640(void *);
M2C_UNK TObjPlayer__sub_801D268C(void *);
f32 TObjPlayer__sub_801D2858(void *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s16);
M2C_UNK apply_stats_and_update__10TObjPlayerFPv(void *, void *);
s32 is_matching_id__10TObjPlayerFPvs(void *, s16);

void set_attack_state__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f1;
    s16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x33C) = 2;
    TObjPlayer__sub_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    temp_r3 = TObjPlayer__sub_801CFBFC(arg0);
    if (is_matching_id__10TObjPlayerFPvs(arg0, temp_r3) != 0) {
        TObjPlayer__sub_801D268C(arg0);
    }
    apply_stats_and_update__10TObjPlayerFPv(arg0 + 0x5E0, arg0);
    set_action_state__10TObjPlayerFPvss(arg0, 2, temp_r3);
    temp_f31 = TObjPlayer__sub_801D2858(arg0 + 0x5E0);
    temp_f1 = TObjPlayer__sub_801D2640(arg0);
    TObjPlayer__sub_800A7798(arg0, temp_f1 * temp_f31);
}

}
