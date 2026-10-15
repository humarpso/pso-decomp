#ifndef PSO_TBOSS7TENTACLE_H
#define PSO_TBOSS7TENTACLE_H
#include "pso/TObject.h"
#include "types.h"

class TBoss7Tentacle : public TObject {
public:
    virtual ~TBoss7Tentacle();
public:
    void restart_particle_effect();
    s32 advance_anim_time_wrapped(f32 d);
    s32 advance_toward_limit(f32 farg0);
    void update_extend_amount();
    void switch_state();
    void advance_path_position();
    void reset_state();
    void setup_state();
    void init_segments();
    void start_attack_at_position(u8 *arg1, s32 arg2);
};

#endif
