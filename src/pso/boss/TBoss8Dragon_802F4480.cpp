#include "types.h"

extern "C" {

void copy_vectors__12TBoss8DragonFPv(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void subtract_vector(void *, void *);

struct VOff_802F4480_arg0 { char pad_0[0x410]; char f_410[1]; char pad_411[0xB]; char f_41C[1]; };

void copy_vectors__12TBoss8DragonFPv(void *arg0) {
    struct VOff_802F4480_arg0 *self = (struct VOff_802F4480_arg0 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_410, (void *)((char *)arg0 + 1004));
    VecCopy__FP3VecPC3Vec(self->f_41C, (void *)((char *)arg0 + 1016));
    subtract_vector(self->f_41C, self->f_410);
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1064), (void *)((char *)arg0 + 1028));
}

}
