#ifndef PSO_ENEMY_TUNK_80494938_H
#define PSO_ENEMY_TUNK_80494938_H
#include "types.h"
#include "pso/misc/MaterialColorFade.h"

class TUnk_80494938 : public MaterialColorFade {
public:
    virtual ~TUnk_80494938();
    virtual void set_rate_from_divisor(s32);
    virtual void reset_color();
    virtual void reset_obstruction_fade();
    virtual s32 decay_value_toward_floor();
    virtual s32 advance_toward_max();
    virtual void set_flags_and_apply_damage_color();
    virtual s32 has_visible_opacity();
    void*init_common();
    void sub_800D741C();
    u8 unk_18[0x4];
};

#endif
