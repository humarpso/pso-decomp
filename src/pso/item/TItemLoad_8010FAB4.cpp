#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 { char pad_0[0x1C]; char f_1C[1]; };

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1);
void reset_state__9TItemLoadFPv(void *arg0);
s32 TObjPlayer__sub_8001BEF8(void *, int);
void clear_flags__11TAdRicoRingFPvUi(void *, int);
void free_texture__9TItemLoadFPv(void *);
void set_flags__10TObjPlayerFPvUi(void *, int);

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        clear_flags__11TAdRicoRingFPvUi((void *)(arg0 + 0x1C), (int)(2));
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5498;

void reset_state__9TItemLoadFPv(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 *self = (struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 *)arg0;
    free_texture__9TItemLoadFPv(arg0);
    set_flags__10TObjPlayerFPvUi(self->f_1C, 2);
    x = TObjPlayer__sub_8001BEF8(self->f_1C, 4);
    if (x != 0) {
        lbl_805D5498 = 0;
        clear_flags__11TAdRicoRingFPvUi((void *)(self->f_1C), (int)(4));
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
}

}
