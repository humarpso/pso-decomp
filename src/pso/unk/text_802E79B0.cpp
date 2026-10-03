#include "types.h"
typedef struct Vec_802E79B0 { f32 x, y, z; } Vec_802E79B0;

typedef struct Obj_802E79B0 {
    u8 pad0[0x3EC];
    Vec_802E79B0 pts[20];
    u8 pad[0x530 - 0x3EC - 20 * 12];
    Vec_802E79B0 out[10];
} Obj_802E79B0;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void vec3_add_to(void *, void *);
extern const f32 lbl_805DEA14;
void fn_802E79B0(Obj_802E79B0 *arg0);
}

extern "C" {

void fn_802E79B0(Obj_802E79B0 *arg0) {
    Vec_802E79B0 v;
    Vec_802E79B0 *out;
    s32 i;
    out = arg0->out;
    VecCopy__FP3VecPC3Vec(&v, &arg0->pts[0]);
    vec3_add_to(&v, &arg0->pts[9]);
    v.x *= lbl_805DEA14;
    v.y *= lbl_805DEA14;
    v.z *= lbl_805DEA14;
    VecCopy__FP3VecPC3Vec(&out[0], &v);
    VecCopy__FP3VecPC3Vec(&v, &arg0->pts[9]);
    vec3_add_to(&v, &arg0->pts[11]);
    v.x *= lbl_805DEA14;
    v.y *= lbl_805DEA14;
    v.z *= lbl_805DEA14;
    VecCopy__FP3VecPC3Vec(&out[1], &v);
    out += 2;
    for (i = 0; i < 8; i++, out++) {
        VecCopy__FP3VecPC3Vec(&v, &arg0->pts[i + 11]);
        vec3_add_to(&v, &arg0->pts[i + 12]);
        v.x *= lbl_805DEA14;
        v.y *= lbl_805DEA14;
        v.z *= lbl_805DEA14;
        VecCopy__FP3VecPC3Vec(out, &v);
    }
}

}
