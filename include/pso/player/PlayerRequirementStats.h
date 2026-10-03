#ifndef PSO_PLAYER_REQUIREMENT_STATS_H
#define PSO_PLAYER_REQUIREMENT_STATS_H
#include "types.h"
struct TObjPlayer;
struct PlayerRequirementStats { s16 values[11]; };
extern "C" s32 build_player_equipment_requirement_stats(TObjPlayer *, PlayerRequirementStats *);
#endif
