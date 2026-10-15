#include "types.h"

extern "C" {
s32 draw_string__14TObjWarpStringFlff(void *, void *, f32, f32);
void fn_802A0A30(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void fn_802A0A30(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    draw_string__14TObjWarpStringFlff((void *) (arg4), (void *) (arg3), (f32) (*(f32 *)((s8 *)arg1 + 0)), (f32) (*(f32 *)((s8 *)arg1 + 4)));
}

}
