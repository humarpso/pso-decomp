#include "types.h"
#include "pso/unk/text_8008271C.h"
struct Vec_8008271C { f32 x; f32 y; f32 z; };

extern "C" {
void approach_vector_fixed_distance(const Vec_8008271C *, const Vec_8008271C *, Vec_8008271C *, f32);
void approach_vector_in_place(Vec_8008271C *a, const Vec_8008271C *b, f32 t);
void approach_vector_in_place(Vec_8008271C *a, const Vec_8008271C *b, f32 t) {
    Vec_8008271C tmp;
    approach_vector_fixed_distance(a, b, &tmp, t);
    a->x = tmp.x;
    a->y = tmp.y;
    a->z = tmp.z;
}

s32 approach_alpha_clamped(f32 *cur, const f32 *target, f32 step) {
    f32 v;
    if (*cur == *target) {
        return 1;
    }
    if (*cur < *target) {
        v = *cur + step;
        *cur = (v < 0.0f) ? 0.0f : ((v < *target) ? v : *target);
    } else {
        v = *cur - step;
        *cur = (v < *target) ? *target : ((v < 1.0f) ? v : 1.0f);
    }
    return 0;
}

}
