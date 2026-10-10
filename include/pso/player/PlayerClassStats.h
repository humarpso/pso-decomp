#ifndef PSO_PLAYER_CLASS_STATS_H
#define PSO_PLAYER_CLASS_STATS_H
#include "pso/TPlyDispData.h"

struct PlayerProfessionStatFactors { f32 hp; f32 tp; };
extern "C" {
extern const PlayerProfessionStatFactors player_profession_stat_factors[3];
extern const player_stats player_class_stat_caps[12];
extern stats* player_class_base_stat_tables[12];
}
#endif
