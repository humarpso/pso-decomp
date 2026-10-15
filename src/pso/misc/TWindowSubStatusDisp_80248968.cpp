#include "types.h"

extern "C" {

void set_selected_index__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
s32 refresh_selected_entry__20TWindowSubStatusDispFPvi(void *, s32);

void set_selected_index__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    *(s16 *)((s8 *)arg0 + 0x88) = arg1;
    *(s16 *)((s8 *)arg0 + 0x74) = arg1;
    refresh_selected_entry__20TWindowSubStatusDispFPvi(arg0, 0);
}

}
