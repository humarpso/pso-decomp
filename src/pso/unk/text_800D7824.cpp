#include "types.h"
struct P_800D78CC { u8 b[0x10]; };

struct Obj_800D78CC { u8 pad0[0x1C]; s32 count; P_800D78CC a[2]; };

extern "C" {
s32 TAdDrawLineTask__sub_80019A8C(void *, void *);
void fn_800D78CC(Obj_800D78CC *arg0);
}

extern "C" {

void fn_800D78CC(Obj_800D78CC *arg0) {
    P_800D78CC *p;
    P_800D78CC *q;
    s32 lim;
    s32 i;
    s32 n = arg0->count;
    if (n <= 1) {
        arg0->count = 0;
        return;
    }
    p = arg0->a;
    q = arg0->a + 2;
    lim = (n - 1) * 2;
    for (i = 0; i < lim; i++) {
        TAdDrawLineTask__sub_80019A8C(p++, q++);
    }
    arg0->count = arg0->count - 1;
}

}
