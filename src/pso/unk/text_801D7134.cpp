#include "types.h"
struct Obj_801D7168 { u8 pad[0x4]; u8 v; };

struct Obj_801D719C { u8 pad[0x3]; u8 v; };

struct Obj_801D7204 { u8 pad[0x1]; u8 v; };

struct Obj_801D71D0 { u8 pad[0x2]; u8 v; };

struct Obj_801D7134 { u8 pad[0x5]; u8 v; };

extern "C" {
u8 ret_801D7944(Obj_801D7168 *p);
u8 fn_801D7168(Obj_801D7168 *p);
u8 ret_801D794C(Obj_801D719C *p);
u8 fn_801D719C(Obj_801D719C *p);
u8 ret_801D795C(Obj_801D7204 *p);
u8 fn_801D7204(Obj_801D7204 *p);
u8 ret_801D7954(Obj_801D71D0 *p);
u8 fn_801D71D0(Obj_801D71D0 *p);
u8 ret_801D793C(Obj_801D7134 *p);
u8 fn_801D7134(Obj_801D7134 *p);
}

extern "C" {

u8 fn_801D7134(Obj_801D7134 *p) {
    if (p->v >= 2) {
        return ret_801D793C(p);
    }
    return p->v;
}

u8 fn_801D7168(Obj_801D7168 *p) {
    if (p->v >= 3) {
        return ret_801D7944(p);
    }
    return p->v;
}
u8 fn_801D719C(Obj_801D719C *p) {
    if (p->v >= 2) {
        return ret_801D794C(p);
    }
    return p->v;
}

u8 fn_801D71D0(Obj_801D71D0 *p) {
    if (p->v >= 4) {
        return ret_801D7954(p);
    }
    return p->v;
}

u8 fn_801D7204(Obj_801D7204 *p) {
    if (p->v >= 3) {
        return ret_801D795C(p);
    }
    return p->v;
}

}
