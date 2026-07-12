#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_dragon_boss_fields__10TObjPlayerFPv(void *);
void *get_enemy_entity(int);
void set_params__12TBoss1DragonFPvPv(void *, void *);

void handle_6x11_dragon_boss_actions(void *arg0) {
    void *x;
    bswap_dragon_boss_fields__10TObjPlayerFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_params__12TBoss1DragonFPvPv(x, arg0);
    }
}

}
