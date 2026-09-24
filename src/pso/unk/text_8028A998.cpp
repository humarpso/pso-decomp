#include "types.h"
struct Obj_8028A998 { u8 pad[0x2c]; Obj_8028A998 *f2c; Obj_8028A998 *next; };

extern "C" {
void fn_8028A998(Obj_8028A998 *o, Obj_8028A998 *x);
}

extern "C" {

void fn_8028A998(Obj_8028A998 *o, Obj_8028A998 *x) {
    Obj_8028A998 *p;
    if (o == 0) return;
    for (p = o->f2c; p != 0; p = p->next) {
        if (p->f2c == x) p->f2c = 0;
    }
}

}
