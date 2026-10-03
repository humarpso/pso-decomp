#ifndef PSO_PLAYER_DAMAGE_BOOKKEEPING_H
#define PSO_PLAYER_DAMAGE_BOOKKEEPING_H
#include "types.h"
extern "C" {
void record_local_damage_if_enabled(void *defender, void *attacker, s32 damage);
void empty_post_damage_hook(void *defender, void *attacker);
}
#endif
