#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK draw_ui_sprite_scaled(f32, f32);
extern const f32 lbl_805DD964;
void fn_802910A4(f32 arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_802910A4(f32 arg0) {
    draw_ui_sprite_scaled(arg0, lbl_805DD964);
}
#pragma pop

}
