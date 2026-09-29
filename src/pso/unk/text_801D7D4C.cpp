#include "types.h"
struct Tag_801D7D4C { u8 d[4]; };

struct Obj_801D7D4C { s32 n; Tag_801D7D4C x[4]; Tag_801D7D4C y[4]; };

extern "C" {
void init__6gc_tagFv(void *);
void TObjPlayer__sub_801D7D4C(Obj_801D7D4C *arg0);
}

extern "C" {

void TObjPlayer__sub_801D7D4C(Obj_801D7D4C *arg0) {
    s32 i;
    i = 0;
    arg0->n = 0;
    do {
        init__6gc_tagFv(&arg0->x[i]);
        init__6gc_tagFv(&arg0->y[i]);
        i++;
    } while (i < 4);
}

}
