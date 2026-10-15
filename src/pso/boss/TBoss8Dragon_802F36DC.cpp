#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {

s32 get_part_count_plus__12TBoss8DragonFl(u32, s32);
u32 get_enemy_entity();
s32 is_split_screen();

extern u32 boss8_dragon_leader_part;

bool TBoss8Dragon::has_enough_enemies() {
    s32 i;
    s32 count;

    if (is_split_screen() != 0) {
        return 1;
    }
    if (boss8_dragon_leader_part == 0U) {
        return 0;
    }
    count = 0;
    i = 0;
    do {
        get_part_count_plus__12TBoss8DragonFl(boss8_dragon_leader_part, i);
        if (get_enemy_entity() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
