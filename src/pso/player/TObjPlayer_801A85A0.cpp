#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_any_teammate_in_state__10TObjPlayerFv(void);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv();
s32 get_photon_blast_chain(void *, s32);
u32 get_player_by_client_id(s32);

s32 is_any_teammate_in_state__10TObjPlayerFv(void) {
    struct { u8 _pad[0x20]; } sp8;
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = get_current_floor();
    var_r30 = 0;
loop_1:
    if ((get_player_by_client_id(var_r30) != 0U) && (temp_r31 == get_field_3e4__10TObjPlayerFPv()) && (get_photon_blast_chain(&sp8, var_r30) == 2)) {
        return 1;
    }
    var_r30 += 1;
    if (var_r30 >= 4) {
        return 0;
    }
    goto loop_1;
}

}
