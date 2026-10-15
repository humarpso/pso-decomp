#include "types.h"

extern "C" {

bool has_enough_enemies__12TBoss8DragonFv(void);
s32 get_part_count_plus__12TBoss8DragonFPvi(u32, s32);
u32 get_enemy_entity();
s32 is_split_screen();

extern u32 boss8_dragon_leader_part;

bool has_enough_enemies__12TBoss8DragonFv(void) {
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
        get_part_count_plus__12TBoss8DragonFPvi(boss8_dragon_leader_part, i);
        if (get_enemy_entity() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
