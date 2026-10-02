#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 obj_testFlags30(s32, s32);
M2C_UNK create_font_small_task_default_color(u32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s16);
extern M2C_UNK lbl_805D7DAC;

void show_tp_font(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && (is_locally_controlled__10TObjPlayerFPv(arg0) == 0) && (arg1 != 0U)) {
        create_font_small_task_default_color(arg1, 0xFF00B2FF, 0x14, arg2, &lbl_805D7DAC, arg3);
    }
}

}
