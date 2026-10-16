#ifndef PSO_TDUELEFFECTNUMBER_H
#define PSO_TDUELEFFECTNUMBER_H
#include "pso/TObject.h"
#include "types.h"

class TDuelEffectNumber : public TObject {
public:
    TDuelEffectNumber(TObject *arg1, void *arg2, void *arg3);
    virtual ~TDuelEffectNumber();
    void sub_8007FFF4(s32);
    virtual void run_task();
    virtual void render();
public:
    void render_pair(f32 f);
    void render_number_default(f32 farg0);
public:
    static void calc_digit_transform(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3);
};

#endif
