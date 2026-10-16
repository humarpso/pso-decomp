#include "types.h"
#include "pso/player/TObjPlayer.h"
struct O_801AA64C { u16 a; u16 b; };

extern "C" {
int __dl__FPv(void* a0);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
}

extern "C" {

#include "types.h"

extern "C" {
s32 __construct_array(void *, void *, void *, int, int);
void TObjPlayer__sub_801AA64C(O_801AA64C *p);
void* TObjPlayer__sub_801AA61C(void* p);

}

s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        ((s32)__dl__FPv((void*)(arg0)));
    }
    return arg0;
}

}

#include "types.h"

extern "C" {

#include "types.h"

extern "C" {

s32 init_arrays__10TObjPlayerFi(s32 arg0) {
    ((TObjPlayer *)(arg0 + 4))->init_forward();
    __construct_array((void *) (arg0 + 8), (void *) (&TObjPlayer__sub_801AA61C), (void *) (&TObjPlayer__sub_801AA584), (int) (4), (int) (4));
    ((TObjPlayer *)arg0)->reset_id_entry();
    return arg0;
}

}

}

#include "types.h"

extern "C" {

void* TObjPlayer__sub_801AA61C(void* p) { TObjPlayer__sub_801AA64C((O_801AA64C *)p); return p; }

}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_801AA64C(O_801AA64C *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

}
