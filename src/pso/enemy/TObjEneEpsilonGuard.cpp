#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2);

s32 TObjPlayer__sub_80019248(void *);
s32 obj_testFlags30(void *, M2C_UNK);
s32 get_player_count__10TObjPlayerFv();
M2C_UNK create_damage_font__19TObjEneEpsilonGuardFiiii(u32, M2C_UNK, M2C_UNK, s16);

void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && (TObjPlayer__sub_80019248(arg0) == 0) && (arg1 != 0U) && ((s16) arg2 >= 0) && ((get_player_count__10TObjPlayerFv() == 0) || ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U))) {
        create_damage_font__19TObjEneEpsilonGuardFiiii(arg1, -1, 0x14, (s16) arg2);
    }
}

}
