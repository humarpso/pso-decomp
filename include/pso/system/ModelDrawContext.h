#ifndef PSO_SYSTEM_MODELDRAWCONTEXT_H
#define PSO_SYSTEM_MODELDRAWCONTEXT_H

#include "types.h"

extern "C" {
void apply_cached_blend_mode(s32 arg0);
void draw_ginja_model_with_motion(void *arg0, void *arg1);
}
void draw_ginja_motion_node_tree(u8 *arg0);
extern "C" {
void select_render_context(s32 arg0);
void set_cached_blend_factor(s32 arg0, s32 arg1);
void set_model_node_callback(s32 arg0);
}

#endif
