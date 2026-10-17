#include "types.h"
struct Obj_801D6DB0 { u8 pad[0x10]; u8 v; };

extern "C" {
u8 fn_801D6DB0(Obj_801D6DB0 *p);
u8 fn_801D6DB0(Obj_801D6DB0 *p) {
    u8 v = p->v;
    if (v > 99) {
        v = 0;
    }
    return v;
}

}
