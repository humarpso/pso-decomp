#include "types.h"
#include "pso/misc/TUnk_804CE7E8.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 advance_all_entries__13TUnk_804CE7E8Fl(void *, s32);
s32 append_entry__20TWindowSubStatusDispFPviiiii(s32, s32, s32, s32, s32, s32);

void TWindowSubStatusDisp::draw_status(s32 arg1, s32 arg2, s32 arg3) {
    append_entry__20TWindowSubStatusDispFPviiiii(arg1, 0, arg2, arg3, 0, 1);
}

void TWindowSubStatusDisp::dispatch_without_flags(s32 arg1, s32 arg2, s32 arg3) {
    append_entry__20TWindowSubStatusDispFPviiiii(arg1, 0, arg2, arg3, 0, 0);
}

void TUnk_804CE7E8::sync_level_field() {
    s16 temp_r4;

    if (*(s16 *)((s8 *)this + 0x88) != (temp_r4 = *(s16 *)((s8 *)this + 0x74))) {
        *(s16 *)((s8 *)this + 0x88) = temp_r4;
        advance_all_entries__13TUnk_804CE7E8Fl(this, 1);
    }
}

}
