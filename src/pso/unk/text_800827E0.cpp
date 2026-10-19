#include "types.h"

struct LightColor {
    f32 a;
    f32 r;
    f32 g;
    f32 b;
};

extern "C" {
extern const f32 lbl_805D93B8; /* 0.0f */
extern const f32 lbl_805D93BC; /* 1.0f */

void TObjLight__sub_800827E0(LightColor *cur, LightColor *tgt, f32 step) {
    if (cur->r < tgt->r) {
        f32 v = cur->r + step;
        cur->r = (v < lbl_805D93B8) ? lbl_805D93B8 : ((v < tgt->r) ? v : tgt->r);
    } else {
        f32 v = cur->r - step;
        cur->r = (v < tgt->r) ? tgt->r : ((v < lbl_805D93BC) ? v : lbl_805D93BC);
    }
    if (cur->g < tgt->g) {
        f32 v = cur->g + step;
        cur->g = (v < lbl_805D93B8) ? lbl_805D93B8 : ((v < tgt->g) ? v : tgt->g);
    } else {
        f32 v = cur->g - step;
        cur->g = (v < tgt->g) ? tgt->g : ((v < lbl_805D93BC) ? v : lbl_805D93BC);
    }
    if (cur->b < tgt->b) {
        f32 v = cur->b + step;
        cur->b = (v < lbl_805D93B8) ? lbl_805D93B8 : ((v < tgt->b) ? v : tgt->b);
    } else {
        f32 v = cur->b - step;
        cur->b = (v < tgt->b) ? tgt->b : ((v < lbl_805D93BC) ? v : lbl_805D93BC);
    }
}
}
