#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012789C(void* p);
void cast_jellen_zalure__10TObjPlayerFPv(void *arg0);
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, void *, M2C_UNK, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
int roll_technique__11TItemWeaponFv(void*);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_attack_stage__11TItemWeaponFPv();
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create__9TTecJelinFiiii(s32, s32, s32, M2C_UNK);
M2C_UNK create_instance__9TTecZaruaFiiii(s32, s32, s32, M2C_UNK);

void TObjPlayer__sub_8012789C(void* p) { roll_technique__11TItemWeaponFv((void*)(p)); roll_technique__11TItemWeaponFv((void*)(p)); }

extern s32 tl_05;

void cast_jellen_zalure__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;

    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 1);
    }
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        if (get_tp__10TObjPlayerFPv(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4 = temp_r3 + 0x38;
            create__9TTecJelinFiiii(temp_r3, temp_r4, temp_r4, 4);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            temp_r4_2 = temp_r3_2 + 0x38;
            create_instance__9TTecZaruaFiiii(temp_r3_2, temp_r4_2, temp_r4_2, 4);
        }
        roll_technique__11TItemWeaponFv((void*)(arg0));
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
