#include "types.h"
struct B_801AF454 { u8 pad[8]; };

struct V_801AF454 : B_801AF454 {
    virtual void m0(); virtual void m1(); virtual void m2();
    virtual void m3(u16 x);
};

struct O_801AF454 { u8 pad[0x380]; V_801AF454 *obj; };

extern "C" {
void TObjPlayer__sub_801AF454(O_801AF454 *self, s32 x);
}

extern "C" {

void TObjPlayer__sub_801AF454(O_801AF454 *self, s32 x) {
    if (self->obj) {
        self->obj->m3(x);
    }
}

}
