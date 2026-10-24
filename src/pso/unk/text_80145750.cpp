#include "pso/ui/MenuText.h"
#include "pso/misc/TWindowSubStatusDisp_80144B14.h"

void draw_menu_text(f32 x, f32 y, const char *text, u32 color) {
    draw_menu_font_string(text, color, 0, x, y, menu_font_default_scale);
}
