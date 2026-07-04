#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8010FF68(void *);
void fn_8001BED8(void *, int);
s32 fn_8001BEF8(void *, int);
extern u32 lbl_805D5498;
void TAdRicoRing__sub_8001BEE8(void *, int);
struct VOff_8010FB0C_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void fn_8010FB0C(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0 *self = (struct VOff_8010FB0C_arg0 *)arg0;
    fn_8010FF68(arg0);
    fn_8001BED8(self->f_1C, 2);
    x = fn_8001BEF8(self->f_1C, 4);
    if (x != 0) {
        lbl_805D5498 = 0;
        TAdRicoRing__sub_8001BEE8(self->f_1C, 4);
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
}

}
