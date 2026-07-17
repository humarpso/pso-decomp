#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_status_326__10TObjPlayerFPv(void *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800A0728();
s32 is_flag_set_388_bit26__10TObjPlayerFPv();
u32 get_enemy_entity(u16);

void handle_status_326__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if ((temp_r0 == 2) && (is_flag_set_388_bit26__10TObjPlayerFPv() != 0) && (get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x428)) != 0U)) {
            TObjPlayer__sub_800A0728();
            return;
        }
        set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    }
}

}
