#include "pso/ui/UISprite.h"
#include "pso/unk/text_80290FEC.h"
extern const f32 lbl_805DD960;

void draw_ui_sprite_shaded(s32 sprite_id, const vec2f* position, const vec2f* scale,
                          f32 depth, f32 alpha, f32 brightness) {
    UISpriteTint tint;
    if (!(alpha <= lbl_805DD960)) {
        tint.alpha = alpha;
        tint.channels[2] = brightness;
        tint.channels[1] = brightness;
        tint.channels[0] = brightness;
        draw_ui_sprite_tinted(sprite_id, position, scale, &tint, depth);
    }
}

void draw_ui_sprite_scaled(s32 sprite_id, const vec2f* position, const vec2f* scale,
                          f32 depth, f32 alpha) {
    if (!(alpha <= lbl_805DD960)) {
        draw_ui_sprite_shaded(sprite_id, position, scale, depth, alpha, ui_sprite_unit_scale);
    }
}

void draw_ui_sprite(s32 sprite_id, const vec2f* position, f32 depth, f32 alpha) {
    vec2f scale;
    if (!(alpha <= lbl_805DD960)) {
        scale.y = ui_sprite_unit_scale;
        scale.x = ui_sprite_unit_scale;
        draw_ui_sprite_scaled(sprite_id, position, &scale, depth, alpha);
    }
}
