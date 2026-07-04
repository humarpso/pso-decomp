#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss7Joint__sub_802EE9A4(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);

struct VOff_802EE9A4_arg0 { char pad_0[0x2FC]; char f_2FC[1]; };

void TBoss7Joint__sub_802EE9A4(void *arg0) {
    struct VOff_802EE9A4_arg0 *self = (struct VOff_802EE9A4_arg0 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_2FC, (void *)((char *)arg0 + 56));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 116), self->f_2FC);
}

}
