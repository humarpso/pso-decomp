#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_8002AF90(void *);
void *get_enemy_entity(int);
void copy_params__12TBoss1DragonFPvPv(void *, void *);

void handle_6x10_dragon_boss_actions(void *arg0) {
    void *x;
    TObjPlayer__sub_8002AF90(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        copy_params__12TBoss1DragonFPvPv(x, arg0);
    }
}

}
