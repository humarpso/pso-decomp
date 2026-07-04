#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8011006C(void *);
extern M2C_UNK lbl_8049F42C[];
void TObjPlayer__sub_8001BF10(void *);
void fn_8001BF40(void *);
struct VOff_8010FD2C_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void *fn_8010FD2C(void *arg0) {
    struct VOff_8010FD2C_arg0 *self = (struct VOff_8010FD2C_arg0 *)arg0;
    fn_8011006C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F42C;
    TObjPlayer__sub_8001BF10(self->f_1C);
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
    fn_8001BF40(self->f_1C);
    return arg0;
}

}
