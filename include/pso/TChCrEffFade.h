#ifndef PSO_TCHCREFFFADE_H
#define PSO_TCHCREFFFADE_H
#include "pso/TObject.h"
#include "types.h"

class TChCrEffFade : public TObject {
public:
    virtual ~TChCrEffFade();
    virtual void run_task();
    virtual void render();
public:
    void update_fade();
    static void draw_fade_strip(f32 farg0);
};

#endif
