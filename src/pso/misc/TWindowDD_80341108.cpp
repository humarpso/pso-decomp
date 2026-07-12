#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0);
M2C_UNK draw_entry_if_visible__9TWindowDDFPvPv(s32, void *);
M2C_UNK TWindowDD__sub_80348AFC(s32, void *);
void *TWindowDD__sub_80244CF4();
M2C_UNK fn_80257BC0(s32, s32, void *, f32);

extern f32 lbl_805DFC90;

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    temp_r3 = TWindowDD__sub_80244CF4();
    TWindowDD__sub_80348AFC(arg0, temp_r3);
    draw_entry_if_visible__9TWindowDDFPvPv(arg0, temp_r3);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x14);
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (temp_f1 + lbl_805DFC90);
    fn_80257BC0(arg0, arg0 + 0x24, temp_r3, temp_f1);
}

}
