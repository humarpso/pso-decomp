#ifndef PSO_TENDINGPIC_H
#define PSO_TENDINGPIC_H
#include "pso/TObject.h"
#include "types.h"

class TEndingPic : public TObject {
public:
    virtual ~TEndingPic();
    virtual void run_task();
    virtual void render();
public:
    void advance_animation_state();
    void draw_current_pic();
    void init_positions();
    void send_obj_position_event(s32 arg1);
    void set_phase_18();
    void update_player_object();
    void update_shield();
};

#endif
