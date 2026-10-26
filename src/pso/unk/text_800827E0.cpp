#include "pso/effect/EffectConstants.h"
#include "types.h"

struct LightColor {
    f32 a;
    f32 r;
    f32 g;
    f32 b;
};

extern "C" {

void TObjLight__sub_800827E0(LightColor *cur, LightColor *tgt, f32 step) {
    if (cur->r < tgt->r) {
        f32 v = cur->r + step;
        cur->r = (v < effect_zero) ? effect_zero : ((v < tgt->r) ? v : tgt->r);
    } else {
        f32 v = cur->r - step;
        cur->r = (v < tgt->r) ? tgt->r : ((v < effect_one) ? v : effect_one);
    }
    if (cur->g < tgt->g) {
        f32 v = cur->g + step;
        cur->g = (v < effect_zero) ? effect_zero : ((v < tgt->g) ? v : tgt->g);
    } else {
        f32 v = cur->g - step;
        cur->g = (v < tgt->g) ? tgt->g : ((v < effect_one) ? v : effect_one);
    }
    if (cur->b < tgt->b) {
        f32 v = cur->b + step;
        cur->b = (v < effect_zero) ? effect_zero : ((v < tgt->b) ? v : tgt->b);
    } else {
        f32 v = cur->b - step;
        cur->b = (v < tgt->b) ? tgt->b : ((v < effect_one) ? v : effect_one);
    }
}
}
