#include "types.h"
#include "pso/TObjWarpString.h"

extern "C" {
void draw_menu_font_string(void *, s32, s32, f32, f32, f32);
extern const f32 lbl_805DB1A8;
void TObjWarpString::draw_string(s32 arg1, f32 farg0, f32 farg1) {
    u8 *arg0 = (u8 *)this;
    draw_menu_font_string(arg0, arg1, 0, farg0, farg1, lbl_805DB1A8);
}

}
