#ifndef PSO_UNK_TEXT_80290FEC_H
#define PSO_UNK_TEXT_80290FEC_H

#include "types.h"

extern "C" {
void draw_ui_sprite(s32 sprite_id, const vec2f *position, f32 depth, f32 alpha);
void draw_ui_sprite_scaled(s32 sprite_id, const vec2f *position, const vec2f *scale, f32 depth, f32 alpha);
void draw_ui_sprite_shaded(s32 sprite_id, const vec2f *position, const vec2f *scale, f32 depth, f32 alpha, f32 brightness);
}

// --- C functions defined in text_80290FEC.cpp ---
extern "C" {
void draw_ui_sprite(s32 sprite_id, const vec2f *position, f32 depth, f32 alpha);
void draw_ui_sprite_scaled(s32 sprite_id, const vec2f *position, const vec2f *scale, f32 depth, f32 alpha);
void draw_ui_sprite_shaded(s32 sprite_id, const vec2f *position, const vec2f *scale, f32 depth, f32 alpha, f32 brightness);
}
// --- end of C functions

#endif
