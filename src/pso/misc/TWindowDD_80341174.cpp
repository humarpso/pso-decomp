#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1);
M2C_UNK TWindowDD__sub_80348914(void *, void *, s32, f32);

extern f32 lbl_805DFC94;

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        TWindowDD__sub_80348914(arg0, arg1,
                               M2C_FIELD(arg0, s32 *, 0x60), lbl_805DFC94);
    }
}

}
