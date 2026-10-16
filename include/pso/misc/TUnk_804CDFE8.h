#ifndef PSO_MISC_TUNK_804CDFE8_H
#define PSO_MISC_TUNK_804CDFE8_H
#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

class TUnk_804CDFE8 : public TUnk_804CE018 {
public:
    virtual ~TUnk_804CDFE8();
    void sub_802443B4();
    void step_window_tween();
    void set_position_xy(f32, f32);
};

#endif
