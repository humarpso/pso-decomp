#include "types.h"

extern "C" {
void draw_menu_font_string(void *, s32, s32, f32, f32, f32);
extern const f32 lbl_805DB1A8;
void draw_string__14TObjWarpStringFPviff(u8 *arg0, s32 arg1, f32 farg0, f32 farg1);
}

extern "C" {

void draw_string__14TObjWarpStringFPviff(u8 *arg0, s32 arg1, f32 farg0, f32 farg1) {
    draw_menu_font_string(arg0, arg1, 0, farg0, farg1, lbl_805DB1A8);
}

}
