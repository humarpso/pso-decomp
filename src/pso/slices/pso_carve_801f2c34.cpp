#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801E6580(s32, s32, s32);
s32 strlen(s32, s32);
extern s32 lbl_805D5E70;
extern s32 lbl_805D5E90;

void append_string_to_buffer(s32 arg0) {
    s32 temp_r31;

    temp_r31 = strlen(lbl_805D5E70 + lbl_805D5E90, lbl_805D5E70);
    fn_801E6580(lbl_805D5E70 + lbl_805D5E90, arg0, lbl_805D5E70);
    lbl_805D5E90 += temp_r31 + 1;
}

}
