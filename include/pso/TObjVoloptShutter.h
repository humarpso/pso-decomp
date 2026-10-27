#ifndef PSO_TOBJVOLOPTSHUTTER_H
#define PSO_TOBJVOLOPTSHUTTER_H
#include "pso/TObject.h"
#include "types.h"

// One of the shutters over the Vol Opt monitor pits: state 2 opens it (both
// panels move away from 0), state 1 closes it again.
class TObjVoloptShutter : public TObject {
public:
    s32 index;
    s32 state;
    s32 substate;
    f32 offset_y;
    f32 offset_z;
    s32 rotation_y;

    virtual ~TObjVoloptShutter();
    virtual void run_task();
    virtual void render();
public:
    void update_shutter_slide();
    void update_shutter_state();
    void close();
    void open();
};

#endif
