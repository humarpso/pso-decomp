#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 refresh_selected_entry__20TWindowSubStatusDispFl(void *, s32);

void TWindowSubStatusDisp::set_selected_index(s16 arg1) {
    *(s16 *)((s8 *)this + 0x88) = arg1;
    *(s16 *)((s8 *)this + 0x74) = arg1;
    refresh_selected_entry__20TWindowSubStatusDispFl(this, 0);
}

}
