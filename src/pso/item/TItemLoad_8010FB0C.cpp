#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TItemLoad__sub_8010FB0C(void *arg0);
void TAdRicoRing__sub_8001BEE8(void *, int);
void TItemLoad__sub_8010FF68(void *);
void TObjPlayer__sub_8001BED8(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern u32 lbl_805D5498;
struct VOff_8010FB0C_arg0_8010fb0c { char pad_0[0x1C]; char f_1C[1]; };

void TItemLoad__sub_8010FB0C(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0_8010fb0c *self = (struct VOff_8010FB0C_arg0_8010fb0c *)arg0;
    TItemLoad__sub_8010FF68(arg0);
    TObjPlayer__sub_8001BED8(self->f_1C, 2);
    x = TObjPlayer__sub_8001BEF8(self->f_1C, 4);
    if (x != 0) {
        lbl_805D5498 = 0;
        TAdRicoRing__sub_8001BEE8(self->f_1C, 4);
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
}

}
