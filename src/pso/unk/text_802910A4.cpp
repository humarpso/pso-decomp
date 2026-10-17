#include "types.h"

extern "C" {
s32 draw_ui_sprite_scaled(f32, f32);
extern const f32 lbl_805DD964;
void fn_802910A4(f32 arg0);
#pragma push
#pragma fp_contract on
void fn_802910A4(f32 arg0) {
    draw_ui_sprite_scaled(arg0, lbl_805DD964);
}
#pragma pop

}
