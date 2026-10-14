#ifndef PSO_BOSS_TBOSS6TYPE1_H
#define PSO_BOSS_TBOSS6TYPE1_H
#include "types.h"
#include <stddef.h>

struct Boss6EffectPoint { f32 x, y, z; };
struct TBoss6Type1 {
    void update_effect_points();
    u8 unknown_00[0x404];
    void* effect_point_receiver;
    u8 unknown_408[0x230];
    Boss6EffectPoint effect_points[2];
};
typedef char Boss6EffectPoint_size[(sizeof(Boss6EffectPoint)==0xC)?1:-1];
typedef char TBoss6Type1_receiver_offset[(offsetof(TBoss6Type1,effect_point_receiver)==0x404)?1:-1];
typedef char TBoss6Type1_points_offset[(offsetof(TBoss6Type1,effect_points)==0x638)?1:-1];
#endif
