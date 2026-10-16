#ifndef PSO_TWINDOWEFFECTLIGHT_H
#define PSO_TWINDOWEFFECTLIGHT_H
#include "pso/TObject.h"
#include "types.h"

class TWindowEffectLight : public TObject {
public:
    virtual ~TWindowEffectLight();
    void draw_outline_quad(s32);
    virtual void render();
    virtual void run_task();
public:
    f32 calc_scale();
    u32 calc_alpha();
    static void *create(void *arg0, void *arg1, void *arg2);
};

#endif
