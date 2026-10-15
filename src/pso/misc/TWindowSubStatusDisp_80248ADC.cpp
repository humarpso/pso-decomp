#include "types.h"

extern "C" {

void dispatch_without_flags__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3);
void draw_status__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3);
void sync_level_field__20TWindowSubStatusDispFPv(void *arg0);
s32 advance_all_entries__20TWindowSubStatusDispFPvi(void *, s32);
s32 append_entry__20TWindowSubStatusDispFPviiiii(s32, s32, s32, s32, s32, s32);

void draw_status__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3) {
    append_entry__20TWindowSubStatusDispFPviiiii(arg1, 0, arg2, arg3, 0, 1);
}

void dispatch_without_flags__20TWindowSubStatusDispFiii(s32 arg1, s32 arg2, s32 arg3) {
    append_entry__20TWindowSubStatusDispFPviiiii(arg1, 0, arg2, arg3, 0, 0);
}

void sync_level_field__20TWindowSubStatusDispFPv(void *arg0) {
    s16 temp_r4;

    if (*(s16 *)((s8 *)arg0 + 0x88) != (temp_r4 = *(s16 *)((s8 *)arg0 + 0x74))) {
        *(s16 *)((s8 *)arg0 + 0x88) = temp_r4;
        advance_all_entries__20TWindowSubStatusDispFPvi(arg0, 1);
    }
}

}
