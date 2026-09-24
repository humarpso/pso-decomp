#include "types.h"
struct Vec_8008271C { f32 x; f32 y; f32 z; };

extern "C" {
void TEffStarLightChild__sub_80141FBC(const Vec_8008271C *, const Vec_8008271C *, Vec_8008271C *, f32);
void fn_8008271C(Vec_8008271C *a, const Vec_8008271C *b, f32 t);
}

extern "C" {

void fn_8008271C(Vec_8008271C *a, const Vec_8008271C *b, f32 t) {
    Vec_8008271C tmp;
    TEffStarLightChild__sub_80141FBC(a, b, &tmp, t);
    a->x = tmp.x;
    a->y = tmp.y;
    a->z = tmp.z;
}

}
