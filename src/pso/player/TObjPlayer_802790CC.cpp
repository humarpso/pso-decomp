#include "types.h"

extern "C" {

void add_status_line__10TObjPlayerFPvUcUii(void *arg0, u8 arg1, u32 arg2, s32 arg3);
s32 init_status_entry__20TWindowSubStatusDispFPvcUii(void *, u8, s32, s32);
s32 init_item_row__20TWindowSubStatusDispFPvPvi(void *, u32, s32);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

extern const f32 lbl_805DD620;

void add_status_line__10TObjPlayerFPvUcUii(void *arg0, u8 arg1, u32 arg2, s32 arg3) {
    void *temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x72));
    if (arg2 == 0U) {
        init_status_entry__20TWindowSubStatusDispFPvcUii(temp_r31, arg1, 0, arg3);
        *(f32 *)((s8 *)temp_r31 + 8) = (f32) (*(f32 *)((s8 *)temp_r31 + 8) + lbl_805DD620);
        *(s32 *)((s8 *)temp_r31 + 0x2C) = 0xFFAAAAAA;
    } else {
        init_item_row__20TWindowSubStatusDispFPvPvi(temp_r31, arg2, arg3);
    }
    if (arg1 == 4) {
        *(f32 *)((s8 *)temp_r31 + 8) = (f32) (*(f32 *)((s8 *)temp_r31 + 8) + lbl_805DD620);
    }
    *(s16 *)((s8 *)arg0 + 0x72) = (s16) (*(s16 *)((s8 *)arg0 + 0x72) + 1);
}

}
