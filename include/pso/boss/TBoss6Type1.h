#ifndef PSO_BOSS_TBOSS6TYPE1_H
#define PSO_BOSS_TBOSS6TYPE1_H
#include "types.h"
#include <stddef.h>

struct Boss6EffectPoint { f32 x, y, z; };
struct TBoss6Type1 {
    void update_effect_points();
    void update_trail_points();
    u8 unknown_00[0x400];
    void* trail_point_receiver;
    void* effect_point_receiver;
    u8 unknown_408[0x1D0];
    Boss6EffectPoint trail_points[3];
    u8 unknown_5FC[0x3C];
    Boss6EffectPoint effect_points[2];
};
typedef char Boss6EffectPoint_size[(sizeof(Boss6EffectPoint)==0xC)?1:-1];
typedef char TBoss6Type1_receiver_offset[(offsetof(TBoss6Type1,effect_point_receiver)==0x404)?1:-1];
typedef char TBoss6Type1_points_offset[(offsetof(TBoss6Type1,effect_points)==0x638)?1:-1];
typedef char TBoss6Type1_trail_receiver_offset[(offsetof(TBoss6Type1,trail_point_receiver)==0x400)?1:-1];
typedef char TBoss6Type1_trail_points_offset[(offsetof(TBoss6Type1,trail_points)==0x5D8)?1:-1];
#endif
