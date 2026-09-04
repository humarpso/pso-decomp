#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0);
s32 TObjEneMe3SinowZoa__sub_80316690(void *, void *);
void TObjEneDellBiter__sub_80087350(void *, int);

struct VOff_803167FC_arg0 { char pad_0[0x38]; char f_38[1]; };

void check_and_notify__18TObjEneMe3SinowZoaFPv(void *arg0) {
    s32 x;
    struct VOff_803167FC_arg0 *self = (struct VOff_803167FC_arg0 *)arg0;
    x = TObjEneMe3SinowZoa__sub_80316690(arg0, self->f_38);
    if (x == 0) {
        TObjEneDellBiter__sub_80087350(self->f_38, 243);
    }
}

}
