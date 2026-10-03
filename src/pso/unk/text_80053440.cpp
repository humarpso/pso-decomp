#include "types.h"
typedef struct Vec_80053440 {
    f32 x, y, z;
} Vec_80053440;

typedef struct Obj_80053440 {
    u8 pad0[0x38];
    Vec_80053440 pos;
    u8 pad44[0x374 - 0x44];
    s32 state;
    u8 f378[0x3F8 - 0x378];
    void *a[4];
    void *b[4];
} Obj_80053440;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Type2__sub_8004A98C(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void play_persistent_sound(s32, void *, void *, s32, s32);
void vec3_add_to(Vec_80053440 *, Vec_80053440 *);
extern Vec_80053440 lbl_80486194[4];
void fn_80053440(Obj_80053440 *arg0);
}

extern "C" {

void fn_80053440(Obj_80053440 *arg0) {
    Vec_80053440 v;
    s32 i;
    if (arg0->state == 4) {
        return;
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&v, &arg0->pos);
        vec3_add_to(&v, &lbl_80486194[i]);
        if (arg0->a[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->a[i], &v);
        }
        if (arg0->b[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->b[i], &v);
        }
    }
    TBoss4Type2__sub_8004A98C(arg0->f378);
    play_persistent_sound(0x4003BC0E, arg0, &arg0->pos, 0x40, 2);
}

}
