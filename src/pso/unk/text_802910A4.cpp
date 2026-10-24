#include "pso/ui/UISprite.h"

void draw_ui_sprite_opaque(s32 sprite_id, const vec2f *position, const vec2f *scale, f32 depth) {
    draw_ui_sprite_scaled(sprite_id, position, scale, depth, ui_sprite_unit_scale);
}
