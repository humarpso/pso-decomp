#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_target_enemy__12TBoss8DragonFv(void);
s32 is_any_part_alive__12TBoss8DragonFv(void);
void update_all_parts__12TBoss8DragonFv(void);
M2C_UNK get_part_count_plus__12TBoss8DragonFPvi(u32, s32);
u32 get_enemy_entity();
M2C_UNK set_state_22__12TBoss8DragonFPv();

extern u32 boss8_dragon_leader_part;

s32 find_target_enemy__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) boss8_dragon_leader_part == 0U) {
        return 0;
    }
    var_r31 = 1;
loop_3:
    get_part_count_plus__12TBoss8DragonFPvi(boss8_dragon_leader_part, var_r31);
    if (get_enemy_entity() != 0U) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 6) {
        return 0;
    }
    goto loop_3;
}

extern u32 boss8_dragon_leader_part;

s32 is_any_part_alive__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) boss8_dragon_leader_part == 0U) {
        return 1;
    }
    var_r31 = 1;
loop_3:
    get_part_count_plus__12TBoss8DragonFPvi(boss8_dragon_leader_part, var_r31);
    if (get_enemy_entity() != 0U) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 6) {
        return 1;
    }
    goto loop_3;
}

extern u32 boss8_dragon_leader_part;

void update_all_parts__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) boss8_dragon_leader_part != 0U) {
        var_r31 = 1;
        do {
            get_part_count_plus__12TBoss8DragonFPvi(boss8_dragon_leader_part, var_r31);
            if (get_enemy_entity() != 0U) {
                set_state_22__12TBoss8DragonFPv();
            }
            var_r31 += 1;
        } while (var_r31 < 6);
    }
}

}
