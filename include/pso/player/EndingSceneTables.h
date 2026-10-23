#ifndef PSO_PLAYER_ENDING_SCENE_TABLES_H
#define PSO_PLAYER_ENDING_SCENE_TABLES_H
#include "types.h"
#include <dolphin/mtx.h>

struct EndingPlayerAngle {
    s32 x, y, z;
};

struct EndingLightColor {
    u8 r, g, b, a;
};

extern const Vec ending_player_positions_0[12];
extern const EndingPlayerAngle ending_player_angles_0[12];
extern const Vec ending_player_positions_1[12];
extern const EndingPlayerAngle ending_player_angles_1[12];
extern const Vec ending_player_positions_2[12];
extern const EndingPlayerAngle ending_player_angles_2[12];
extern const EndingLightColor player_light_color_rgba_table[21];
extern const Vec player_light_direction_color_table[12];
extern Vec ending_player_start_position;
extern Vec ending_camera_position;
extern Vec ending_camera_direction;

#endif
