#ifndef PSO_TOBJVOLOPTSHUTTER_H
#define PSO_TOBJVOLOPTSHUTTER_H
#include "pso/TObject.h"
#include "types.h"

class TObjVoloptShutter : public TObject {
public:
    virtual ~TObjVoloptShutter();
    virtual void run_task();
    virtual void render();
public:
    void update_shutter_slide();
    void update_shutter_state();
};

#endif
