#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK *get_status_window__20TWindowSubStatusDispFi(u16);
M2C_UNK fn_80222704(s32, M2C_UNK *);
extern M2C_UNK lbl_8044C290[];
extern s32 lbl_805D53A0;

void show_message_or_error(s32 arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = get_status_window__20TWindowSubStatusDispFi((u16) lbl_805D53A0);
    if (temp_r3 != NULL) {
        fn_80222704(arg0, temp_r3);
        return;
    }
    fn_80222704(arg0, lbl_8044C290);
}

}
