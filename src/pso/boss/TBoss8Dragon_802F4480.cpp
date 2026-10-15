#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {

void VecCopy__FP3VecPC3Vec(void *, void *);
void subtract_vector(void *, void *);

struct VOff_802F4480_arg0 { char pad_0[0x410]; char f_410[1]; char pad_411[0xB]; char f_41C[1]; };

void TBoss8Dragon::copy_vectors() {
    struct VOff_802F4480_arg0 *self = (struct VOff_802F4480_arg0 *)this;
    VecCopy__FP3VecPC3Vec(self->f_410, (void *)((char *)this + 1004));
    VecCopy__FP3VecPC3Vec(self->f_41C, (void *)((char *)this + 1016));
    subtract_vector(self->f_41C, self->f_410);
    VecCopy__FP3VecPC3Vec((void *)((char *)this + 1064), (void *)((char *)this + 1028));
}

}
