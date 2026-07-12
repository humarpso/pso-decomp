#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_frame_buffer_size__6TMovieFii(s32 arg0, s32 arg1);

extern void *lbl_805D2CE8;
extern s32 lbl_805D568C;
extern s32 lbl_805D5690;
extern s32 lbl_805D5694;

void calc_frame_buffer_size__6TMovieFii(s32 arg0, s32 arg1) {
    lbl_805D568C = arg0;
    lbl_805D5690 = arg1;
    lbl_805D5694 = ((M2C_FIELD(lbl_805D2CE8, u16 *, 4) + 0xF) & 0xFFF0) * M2C_FIELD(lbl_805D2CE8, u16 *, 8) * 2;
}

}
