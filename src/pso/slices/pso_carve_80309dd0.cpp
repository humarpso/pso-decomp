#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_8030A07C(void *);
void TObjPlayer__sub_8030A030(void *, void *);
struct VOff_80309DD0_arg0 { char pad_0[0x4]; char f_4[1]; };

void fn_80309DD0(void *arg0, void *arg1) {
    struct VOff_80309DD0_arg0 *self = (struct VOff_80309DD0_arg0 *)arg0;
    TObjPlayer__sub_8030A07C(self->f_4);
    TObjPlayer__sub_8030A030(self->f_4, arg1);
}

}
