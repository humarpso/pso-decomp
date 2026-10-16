#ifndef PSO_TOBJRAIN_H
#define PSO_TOBJRAIN_H
#include "pso/TObject.h"
#include "types.h"

class TObjRain : public TObject {
public:
    virtual ~TObjRain();
    void update_drops();
    virtual void run_task();
    virtual void render();
public:
    void draw_streaks();
    void init_drops();
};

#endif
