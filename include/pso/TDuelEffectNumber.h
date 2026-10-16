#ifndef PSO_TDUELEFFECTNUMBER_H
#define PSO_TDUELEFFECTNUMBER_H
#include "pso/TObject.h"
#include "types.h"

class TDuelEffectNumber : public TObject {
public:
    virtual ~TDuelEffectNumber();
    void sub_8007FFF4(s32);
    virtual void run_task();
    virtual void render();
public:
    void render_pair(f32 f);
    void render_number_default(f32 farg0);
};

#endif
