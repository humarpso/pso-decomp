#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_status_line__10TObjPlayerFPvUcUii(void *arg0, u8 arg1, u32 arg2, s32 arg3);
M2C_UNK TWindowSubStatusDisp__sub_80258CB8(void *, u8, M2C_UNK, s32);
M2C_UNK init_item_row__20TWindowSubStatusDispFPvPvi(void *, u32, s32);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

extern const f32 lbl_805DD620;

void add_status_line__10TObjPlayerFPvUcUii(void *arg0, u8 arg1, u32 arg2, s32 arg3) {
    void *temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x72));
    if (arg2 == 0U) {
        TWindowSubStatusDisp__sub_80258CB8(temp_r31, arg1, 0, arg3);
        M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) + lbl_805DD620);
        M2C_FIELD(temp_r31, s32 *, 0x2C) = 0xFFAAAAAA;
    } else {
        init_item_row__20TWindowSubStatusDispFPvPvi(temp_r31, arg2, arg3);
    }
    if (arg1 == 4) {
        M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) + lbl_805DD620);
    }
    M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
}

}
