#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__9TItemLoadFPv(void *arg0);
void TItemLoad__sub_8011006C(void *);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F42C[];
struct VOff_8010FD2C_arg0_8010fd2c { char pad_0[0x1C]; char f_1C[1]; };

void *init__9TItemLoadFPv(void *arg0) {
    struct VOff_8010FD2C_arg0_8010fd2c *self = (struct VOff_8010FD2C_arg0_8010fd2c *)arg0;
    TItemLoad__sub_8011006C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F42C;
    init_forward__10TObjPlayerFPv(self->f_1C);
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
    clear_id__10TObjPlayerFPv(self->f_1C);
    return arg0;
}

}
