#include "types.h"

extern "C" {

struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 { char pad_0[0x1C]; char f_1C[1]; };

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1);
void reset_state__9TItemLoadFPv(void *arg0);
s32 test_flags_any(void *, int);
void clear_flags__11TAdRicoRingFPvUi(void *, int);
void free_texture__9TItemLoadFPv(void *);
void set_flags__10TObjPlayerFPvUi(void *, int);

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x18) == 0) {
        *(s32 *)((s8 *)arg0 + 0x20) = arg1;
        clear_flags__11TAdRicoRingFPvUi((void *)(arg0 + 0x1C), (int)(2));
        *(s32 *)((s8 *)arg0 + 0x18) = 1;
        return 1;
    }
    return 0;
}

extern u32 item_load_work_buffer_busy;

void reset_state__9TItemLoadFPv(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 *self = (struct VOff_8010FB0C_arg0_8010fb0c_8010FAB4 *)arg0;
    free_texture__9TItemLoadFPv(arg0);
    set_flags__10TObjPlayerFPvUi(self->f_1C, 2);
    x = test_flags_any(self->f_1C, 4);
    if (x != 0) {
        item_load_work_buffer_busy = 0;
        clear_flags__11TAdRicoRingFPvUi((void *)(self->f_1C), (int)(4));
    }
    *(u32 *)((s8 *)arg0 + 0x18) = 0;
}

}
