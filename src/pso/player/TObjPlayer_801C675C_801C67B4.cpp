#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 apply_stat_multipliers__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
void apply_stats_and_update__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C6FCC(s32, f32);
int apply_stat_multipliers_default__10TObjPlayerFv(void*);
s32 check_state_flag_1__8TItemMagFPv(s32);
f32 get_stat_f32__8TItemMagFPv(s32);
s32 is_flag30_8_set__10TObjPlayerFi(s32);
int set_stat_scale__10TObjPlayerFPvf(void*);

void apply_stats_and_update__10TObjPlayerFPv(void* p) { apply_stat_multipliers_default__10TObjPlayerFv(p); set_stat_scale__10TObjPlayerFPvf(p); }

extern const f32 lbl_805DC33C;
extern const f32 lbl_805DC340;

f32 apply_stat_multipliers__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    f32 var_f31;

    var_f31 = farg0;
    if (is_flag30_8_set__10TObjPlayerFi(arg1) != 0) {
        var_f31 *= lbl_805DC33C;
    } else if (TObjPlayer__sub_8001BEF8(arg0 + 0xC, 8) != 0) {
        var_f31 *= lbl_805DC340;
    }
    TObjPlayer__sub_801C6FCC(arg0, var_f31);
    if (check_state_flag_1__8TItemMagFPv(arg1 + 0x5B0) != 0) {
        var_f31 *= get_stat_f32__8TItemMagFPv(arg1 + 0x5B0);
    }
    return var_f31;
}

}
