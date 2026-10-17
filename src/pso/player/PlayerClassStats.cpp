#include "pso/player/PlayerClassStats.h"

extern const PlayerProfessionStatFactors player_profession_stat_factors[3] = {
    { 2.0f, 1.0f },
    { 1.850000023841858f, 1.0f },
    { 1.4500000476837158f, 1.5f },
};

extern const player_stats player_class_stat_caps[12] = {
    { { 1387, 732, 756, 613, 579, 1355, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1227, 1177, 811, 596, 589, 1388, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1629, 0, 660, 889, 601, 1300, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1255, 665, 715, 725, 515, 1739, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1345, 0, 699, 1072, 606, 1530, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1170, 0, 787, 1081, 688, 1580, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 869, 1284, 588, 770, 498, 1088, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 811, 1500, 679, 739, 463, 1200, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 580, 1750, 883, 702, 390, 1260, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1291, 0, 877, 750, 525, 1500, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 999, 1340, 651, 716, 470, 1010, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
    { { 1140, 1031, 900, 719, 577, 1730, 100 }, 100, 0.0f, 0.0f, 0, 0, 0 },
};

extern const stats player_class_base_stats_00 = { 35, 29, 45, 20, 17, 30, 10 };
extern const stats player_class_base_stats_01 = { 30, 40, 60, 19, 22, 25, 10 };
extern const stats player_class_base_stats_02 = { 35, 0, 35, 22, 18, 35, 10 };
extern const stats player_class_base_stats_03 = { 18, 20, 36, 16, 13, 40, 10 };
extern const stats player_class_base_stats_04 = { 25, 0, 31, 18, 18, 45, 10 };
extern const stats player_class_base_stats_05 = { 20, 0, 31, 17, 23, 45, 10 };
extern const stats player_class_base_stats_06 = { 13, 53, 35, 20, 10, 15, 10 };
extern const stats player_class_base_stats_07 = { 13, 60, 50, 19, 7, 12, 10 };
extern const stats player_class_base_stats_08 = { 10, 58, 53, 19, 13, 10, 10 };
extern const stats player_class_base_stats_09 = { 35, 0, 35, 22, 18, 35, 10 };
extern const stats player_class_base_stats_10 = { 13, 53, 35, 20, 10, 15, 10 };
extern const stats player_class_base_stats_11 = { 18, 20, 36, 16, 13, 40, 10 };

stats* player_class_base_stat_tables[12] = {
    (stats*)&player_class_base_stats_00,
    (stats*)&player_class_base_stats_01,
    (stats*)&player_class_base_stats_02,
    (stats*)&player_class_base_stats_03,
    (stats*)&player_class_base_stats_04,
    (stats*)&player_class_base_stats_05,
    (stats*)&player_class_base_stats_06,
    (stats*)&player_class_base_stats_07,
    (stats*)&player_class_base_stats_08,
    (stats*)&player_class_base_stats_09,
    (stats*)&player_class_base_stats_10,
    (stats*)&player_class_base_stats_11,
};

typedef char StatsSize[(sizeof(stats)==14)?1:-1];
typedef char PlayerStatsSize[(sizeof(player_stats)==36)?1:-1];
typedef char ProfessionFactorsSize[(sizeof(PlayerProfessionStatFactors)==8)?1:-1];
