#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss8Dragon__sub_802F4480(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_803D9370(void *, void *);

struct VOff_802F4480_arg0 { char pad_0[0x410]; char f_410[1]; char pad_411[0xB]; char f_41C[1]; };

void TBoss8Dragon__sub_802F4480(void *arg0) {
    struct VOff_802F4480_arg0 *self = (struct VOff_802F4480_arg0 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_410, (void *)((char *)arg0 + 1004));
    VecCopy__FP3VecPC3Vec(self->f_41C, (void *)((char *)arg0 + 1016));
    fn_803D9370(self->f_41C, self->f_410);
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1064), (void *)((char *)arg0 + 1028));
}

}
