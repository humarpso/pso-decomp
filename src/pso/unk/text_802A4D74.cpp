#include "types.h"

extern "C" {
void draw_string__14TObjWarpStringFPviff(void *, s32, f32, f32);
extern const f32 lbl_805DDF80;
extern const f32 lbl_805DDF84;
void fn_802A4D74(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

void fn_802A4D74(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    draw_string__14TObjWarpStringFPviff(arg2, arg1, lbl_805DDF80 + *(f32 *)((s8 *)arg0 + 0x1C), lbl_805DDF84 + *(f32 *)((s8 *)arg0 + 0x20));
    draw_string__14TObjWarpStringFPviff(arg3, arg1, lbl_805DDF80 + *(f32 *)((s8 *)arg0 + 0x3C), lbl_805DDF84 + *(f32 *)((s8 *)arg0 + 0x40));
}

}
