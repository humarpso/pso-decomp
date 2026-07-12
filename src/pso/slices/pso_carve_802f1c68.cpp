#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_803D8CD4(void *);
void TObjPlayer__sub_803D8C7C(void *, void *);
void TObjChip__sub_803D8AE4(void *, void *, void *, void *);
struct VOff_802F1C68_arg0 { char pad_0[0x48]; char f_48[1]; };

void fn_802F1C68(void *arg0) {
    struct VOff_802F1C68_arg0 *self = (struct VOff_802F1C68_arg0 *)arg0;
    TObjPlayer__sub_803D8CD4(self->f_48);
    TObjPlayer__sub_803D8C7C(self->f_48, (void *)((char *)arg0 + 28));
    TObjChip__sub_803D8AE4(self->f_48, M2C_FIELD(arg0, void **, 0x28), M2C_FIELD(arg0, void **, 0x2C), M2C_FIELD(arg0, void **, 0x30));
}

}
