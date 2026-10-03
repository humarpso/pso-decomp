#ifndef PSO_PLAYER_ATTACK_CONTROLLER_H
#define PSO_PLAYER_ATTACK_CONTROLLER_H
#include "types.h"
#include <stddef.h>
struct TObjPlayer;
struct PlayerAttackController {
    s16 attack_kind;
    s16 queued_kind;
    u8 unknown04[8];
    u32 flags;
    s16 pending_stage;
    s16 hit_count;
    u8 unknown14[0x0C];
};
typedef char AttackControllerFlags[offsetof(PlayerAttackController,flags)==0x0C?1:-1];
typedef char AttackControllerStage[offsetof(PlayerAttackController,pending_stage)==0x10?1:-1];
extern "C" void queue_physical_attack_input(PlayerAttackController *controller,
                                            TObjPlayer *player, s32 channel, s16 maximum_stage);
#endif
