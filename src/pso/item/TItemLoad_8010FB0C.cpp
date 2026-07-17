#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void reset_state__9TItemLoadFPv(void *arg0);
void clear_flags__11TAdRicoRingFPvUi(void *, int);
void free_texture__9TItemLoadFPv(void *);
void set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern u32 lbl_805D5498;
struct VOff_8010FB0C_arg0_8010fb0c { char pad_0[0x1C]; char f_1C[1]; };

void reset_state__9TItemLoadFPv(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0_8010fb0c *self = (struct VOff_8010FB0C_arg0_8010fb0c *)arg0;
    free_texture__9TItemLoadFPv(arg0);
    set_flags__10TObjPlayerFPvUi(self->f_1C, 2);
    x = TObjPlayer__sub_8001BEF8(self->f_1C, 4);
    if (x != 0) {
        lbl_805D5498 = 0;
        clear_flags__11TAdRicoRingFPvUi(self->f_1C, 4);
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
}

}
