#include "types.h"
#include "pso/TAdTitleTexGC.h"
#include "pso/TObjWarpString.h"

extern const f32 lbl_805DDF80;
extern const f32 lbl_805DDF84;

void TAdTitleTexGC::sub_802A4D74(s32 arg1, u8 *arg2, u8 *arg3) {
    u8 *arg0 = (u8 *)this;
    ((TObjWarpString *)arg2)->draw_string(arg1, lbl_805DDF80 + *(f32 *)((s8 *)arg0 + 0x1C), lbl_805DDF84 + *(f32 *)((s8 *)arg0 + 0x20));
    ((TObjWarpString *)arg3)->draw_string(arg1, lbl_805DDF80 + *(f32 *)((s8 *)arg0 + 0x3C), lbl_805DDF84 + *(f32 *)((s8 *)arg0 + 0x40));
}
