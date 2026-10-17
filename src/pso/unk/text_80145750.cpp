#include "types.h"
#include "pso/TObjWarpString.h"

extern "C" {
void draw_menu_font_string(const char *s, s32 arg1, u32 flags, f32 x, f32 y, f32 scale);
extern const f32 lbl_805DB1A8;
void TObjWarpString::draw_string(s32 arg1, f32 farg0, f32 farg1) {
    u8 *arg0 = (u8 *)this;
    draw_menu_font_string((const char *)arg0, (s32)arg1, (u32)(0), (f32)farg0, (f32)farg1, (f32)lbl_805DB1A8);
}

}
